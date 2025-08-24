#include "ARES_garageDialogClasses.hpp"
class ARES_garageDialog
{
	idd = 11000;
	movingEnable = false;
	
	class ControlsBackground
	{
		class staticVehicleList
		{
			type = 0;
			idc = -1;
			x = -0.32499992;
			y = -0.125;
			w = 0.42500001;
			h = 1.25;
			style = 2;
			text = "";
			colorBackground[] = {0.2,0.2,0.2,0.6825};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class staticVehicleListButtons
		{
			type = 0;
			idc = -1;
			x = -0.47499971;
			y = -0.09999985;
			w = 0.15000005;
			h = 0.42500007;
			style = 2;
			text = "";
			colorBackground[] = {0.3,0.3,0.3,0.6825};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class staticVehicleListOutline
		{
			type = 0;
			idc = -1;
			x = -0.32499992;
			y = -0.125;
			w = 0.42500001;
			h = 1.25;
			style = 64;
			text = "";
			colorBackground[] = {0.302,0.302,0.302,0.5};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class staticVehicleListOutlineButtons
		{
			type = 0;
			idc = -1;
			x = -0.47499991;
			y = -0.09999997;
			w = 0.15000002;
			h = 0.42500014;
			style = 64;
			text = "";
			colorBackground[] = {0.302,0.302,0.302,0.5};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class staticVehicleInfo
		{
			type = 0;
			idc = -1;
			x = 0.90000031;
			y = 0.65000017;
			w = 0.30000007;
			h = 0.47500009;
			style = 2;
			text = "";
			colorBackground[] = {0.3,0.3,0.3,0.6825};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class staticVehicleInfoOutline
		{
			type = 0;
			idc = -1;
			x = 0.90000026;
			y = 0.65000015;
			w = 0.30000003;
			h = 0.47500015;
			style = 64;
			text = "";
			colorBackground[] = {0.302,0.302,0.302,0.5};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		
	};
	class Controls
	{
		class vehicleList
		{
			type = 5;
			idc = 11001;
			x = -0.29999994;
			y = -0.09999999;
			w = 0.375;
			h = 1.20000007;
			style = 16;
			colorBackground[] = {0.4,0.4,0.4,0};
			colorDisabled[] = {0,0,0,1};
			colorSelect[] = {0.2,0.2,0.2,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			maxHistoryDelay = 0;
			rowHeight = 0.08;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1.0};
			class ListScrollBar
			{
				color[] = {1,1,1,1};
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
				
			};
			
		};
		class selectGround
		{
			type = 1;
			idc = 11002;
			x = -0.44999996;
			y = -0.07499999;
			w = 0.10000005;
			h = 0.07500004;
			style = 2+48;
			text = "";
			borderSize = 1;
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0.25};
			colorFocused[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaSemiBold";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			
		};
		class selectAir
		{
			type = 1;
			idc = 11003;
			x = -0.44999996;
			y = 0.02500003;
			w = 0.10000005;
			h = 0.07500004;
			style = 2+48;
			text = "";
			borderSize = 2;
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0.25};
			colorFocused[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaSemiBold";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			
		};
		class selectWater
		{
			type = 1;
			idc = 11004;
			x = -0.44999996;
			y = 0.12500003;
			w = 0.10000005;
			h = 0.07500004;
			style = 2+48;
			text = "";
			borderSize = 3;
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0.25};
			colorFocused[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaSemiBold";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			
		};
		class vehicleIcon
		{
			type = 0;
			idc = 11005;
			x = 0.97500022;
			y = 0.67500028;
			w = 0.15000002;
			h = 0.10500005;
			style = 2+48;
			text = "";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaSemiBold";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class vehicleName
		{
			type = 0;
			idc = 11006;
			x = 0.92500017;
			y = 0.80000026;
			w = 0.25000002;
			h = 0.07500004;
			style = 2;
			text = "";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaSemiBold";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class vehicleSpeed
		{
			type = 0;
			idc = 11007;
			x = 0.92500017;
			y = 0.87500027;
			w = 0.25000002;
			h = 0.05000004;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class vehicleLoad
		{
			type = 0;
			idc = 11008;
			x = 0.92500017;
			y = 0.93737375;
			w = 0.25;
			h = 0.05050506;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class vehicleSpawn
		{
			type = 1;
			idc = 11009;
			x = 0.97500014;
			y = 1.02500012;
			w = 0.15000003;
			h = 0.07500004;
			style = 0+2;
			text = "Spawn";
			borderSize = 0;
			colorBackground[] = {0.502,0.502,0.502,1};
			colorBackgroundActive[] = {0.4,0.4,0.4,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {1,1,1,1};
			colorFocused[] = {0.702,0.702,0.702,1};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaSemiBold";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			
		};
		class selectStatic
		{
			type = 1;
			idc = 11010;
			x = -0.44999996;
			y = 0.22500003;
			w = 0.10000005;
			h = 0.07500004;
			style = 2+48;
			text = "";
			borderSize = 3;
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0.25};
			colorFocused[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaSemiBold";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			
		};
		
	};
	
};
