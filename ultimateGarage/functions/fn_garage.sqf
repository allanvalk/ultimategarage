scriptName "fn_garage";

#define __FILENAME "fn_garage.sqf"

if (isDedicated || !hasInterface) exitWith {};

params
[
	["_mode", "init"],
	["_location", [0,0,0]],
	["_type", ""],
	["_class", ""],
	["_object", objNull]
];

switch (_mode) do {

	case "init": {
		
		_id = _object addAction
		[
			"Garage",
			{
				params ["_target", "_caller", "_actionId", "_arguments"];

				_location = (_arguments # 0);
				["open", _location] spawn ARES_fnc_garage;
			},
			[_location],
			2,
			true,
			false,
			"",
			"true",
			5,
			false,
			"",
			""
		];

		_object setUserActionText [
			_id,
			"Garage",
			"<img size=2.0 image='\a3\ui_f\data\igui\cfg\simpletasks\types\Use_ca.paa'/>"
		];
	};

	case "open": {

		cutText ["", "BLACK OUT"];

		_camera = "camera" camCreate (_location);
		_camera cameraEffect ["Internal", "BACK"];
		showCinemaBorder false;

		_camera camSetTarget player;
		_camera camSetRelPos [0,0,0];
		_camera camCommit 0;

		cutText ["", "BLACK IN", 3];

		_camera camSetTarget _location;
		_camera camSetRelPos [10,10,5];
		_camera camCommit 3;

		//

		disableSerialization;

		createDialog "ARES_garageDialog";

		localNamespace setVariable ["ARES_garage_open", true];
		localNamespace setVariable ["ARES_garage_location", _location];
		localNamespace setVariable ["ARES_garage_camera", _camera];

		_ctrlList = (findDisplay 11000) displayCtrl 11001;
		_ctrlGround = (findDisplay 11000) displayCtrl 11002;
		_ctrlAir = (findDisplay 11000) displayCtrl 11003;
		_ctrlWater = (findDisplay 11000) displayCtrl 11004;
		_ctrlStatic = (findDisplay 11000) displayCtrl 11010;
		_ctrlButtonSpawn = (findDisplay 11000) displayCtrl 11009;

		_ctrlButtonSpawn ctrlEnable false;

		_ctrlGround ctrlSetText "\A3\Soft_F\MRAP_01\Data\UI\MRAP_01_Base_ca.paa";
		_ctrlAir ctrlSetText "\A3\Air_F_Jets\Plane_Fighter_01\Data\UI\Fighter01_picture_ca.paa";
		_ctrlWater ctrlSetText "\A3\boat_F\Boat_Transport_01\data\UI\Boat_Transport_01_CA.paa";
		_ctrlStatic ctrlSetText "\A3\Static_f\Mortar_01\data\UI\Mortar_01_ca.paa";

		_ctrlGround buttonSetAction format ["['%1', %2, '%3'] call ARES_fnc_garage;", "list", _location, "ground"];
		_ctrlAir buttonSetAction format ["['%1', %2, '%3'] call ARES_fnc_garage;", "list", _location, "air"];
		_ctrlWater buttonSetAction format ["['%1', %2, '%3'] call ARES_fnc_garage;", "list", _location, "water"];
		_ctrlStatic buttonSetAction format ["['%1', %2, '%3'] call ARES_fnc_garage;", "list", _location, "static"];

		(findDisplay 11000) displayAddEventHandler [
			"KeyDown",
			{
				params ["_display", "_key", "_shift", "_ctrl", "_alt"];
				if (_key isEqualTo 1) then {
					closeDialog 2; 
					["close"] spawn ARES_fnc_garage;
					(findDisplay 11000) displayRemoveAllEventHandlers "KeyDown";
				} else {
					false
				};
			}
		];

	};

	case "list": {
		
		_ctrlList = (findDisplay 11000) displayCtrl 11001;
		_itemPrefab = call compile ("items_" + str (side player) + "_" + _type);

		localNamespace setVariable ["ARES_garage_prefab", _itemPrefab];

		lbClear _ctrlList;

		{
			_index = _ctrlList lbAdd getText (configFile >> "CfgVehicles" >> (_x select 0) >> "displayName");
			_ctrlList lbSetPicture [_index, getText (configFile >> "CfgVehicles" >> (_x select 0) >> "Icon")];
			_ctrlList lbSetPictureColor [_index, [1, 1, 1, 1]];
		} forEach _itemPrefab;

		_ctrlList ctrlAddEventHandler ["LBSelChanged", {
			params ["", "_selectedIndex"];

			if (!isNull (localNamespace getVariable ["ARES_garage_preview", objNull])) then {
				deleteVehicle (localNamespace getVariable "ARES_garage_preview");
			};

			_itemPrefab = localNamespace getVariable "ARES_garage_prefab";
			_location = localNamespace getVariable "ARES_garage_location";
			_class = ((_itemPrefab select _selectedIndex) select 0);

			_ctrlIcon = (findDisplay 11000) displayCtrl 11005;
			_ctrlName = (findDisplay 11000) displayCtrl 11006;
			_ctrlSpeed = (findDisplay 11000) displayCtrl 11007;
			_ctrlLoad = (findDisplay 11000) displayCtrl 11008;
			_ctrlButtonSpawn = (findDisplay 11000) displayCtrl 11009;

			_ctrlIcon ctrlSetText getText (configFile >> "CfgVehicles" >> _class >> "Picture");
			_ctrlName ctrlSetText getText (configFile >> "CfgVehicles" >> _class >> "displayName");
			_ctrlSpeed ctrlSetText format ["Speed: %1 km/h", getNumber (configFile >> "CfgVehicles" >> _class >> "maxSpeed")];
			_ctrlLoad ctrlSetText format ["Load: %1 lbs", getNumber (configFile >> "CfgVehicles" >> _class >> "maximumLoad")];
			
			_ctrlButtonSpawn ctrlEnable true; 

			_ctrlButtonSpawn buttonSetAction format ["['spawn', %1, '%2', '%3'] spawn ARES_fnc_garage;", _location, "", _class];

			_previewObject = createVehicleLocal [_class, _location, [], 0, "CAN_COLLIDE"];
			_previewObject enableSimulation false;

			localNamespace setVariable ["ARES_garage_preview", _previewObject];
			
		}];

	};

	case "close": {
		
		_camera = localNamespace getVariable "ARES_garage_camera";

		if (!isNull (localNamespace getVariable ["ARES_garage_preview", objNull])) then {
			deleteVehicle (localNamespace getVariable "ARES_garage_preview");
		};

		localNamespace setVariable ["ARES_garage_open", false];

		_camera cameraEffect ["Terminate", "BACK"];
		camDestroy _camera;

	};

	case "spawn": {
		
		closeDialog 2; 
		["close"] spawn ARES_fnc_garage;
		(findDisplay 11000) displayRemoveAllEventHandlers "KeyDown";

		waitUntil { isNull (localNamespace getVariable ["ARES_garage_preview", objNull]) };

		_previewObject = createVehicle [_class, _location, [], 0, "NONE"];

		playSound "FD_CP_Clear_F";

	};
};

/* 
[4016,4016,0]

["init", [4016,4016,0]] spawn ARES_fnc_garage;
Icon = "\a3\soft_f_gamma\Truck_01\Data\UI\map_Truck_01_mover_F_CA.paa";
displayName = "HEMTT";

list - 11001

Icon = ;

configFile >> "CfgVehicles" >> "B_Truck_01_mover_F" >> "maximumLoad"
maximumLoad = 3000;
configFile >> "CfgVehicles" >> "B_Truck_01_mover_F" >> "maxSpeed"
maxSpeed = 80;

*/

