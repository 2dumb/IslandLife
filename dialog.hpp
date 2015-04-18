class FSG_playerMenu
{
	idd = 1000;
	name= "FSG_playerMenu";
	movingEnable = true;

	class controls
	{
		class PlayerName: RscText
		{
			idc = 1001;
			text = "RHAPSUS"; //--- ToDo: Localize;
			x = 0.0633326 * safezoneW + safezoneX;
			y = 0.207612 * safezoneH + safezoneY;
			w = 0.701201 * safezoneW;
			h = 0.0679972 * safezoneH;
			sizeEx = (2 / 25);
		};
		class PlayerHealth: RscText
		{
			idc = 1002;
			text = "HEALTH"; //--- ToDo: Localize;
			x = 0.0633326 * safezoneW + safezoneX;
			y = 0.26541 * safezoneH + safezoneY;
			w = 0.0892438 * safezoneW;
			h = 0.0407983 * safezoneH;
			sizeEx = (1.4 / 25);
		};
		class PlayerConmution: RscText
		{
			idc = 1003;
			text = "WATER/FOOD"; //--- ToDo: Localize;
			x = 0.16691 * safezoneW + safezoneX;
			y = 0.26541 * safezoneH + safezoneY;
			w = 0.148208 * safezoneW;
			h = 0.0407983 * safezoneH;
			sizeEx = (1.4 / 25);
		};
		class PlayerReputation: RscText
		{
			idc = 1004;
			text = "REPUTATION"; //--- ToDo: Localize;
			x = 0.0633326 * safezoneW + safezoneX;
			y = 0.302808 * safezoneH + safezoneY;
			w = 0.135459 * safezoneW;
			h = 0.0339986 * safezoneH;
			sizeEx = (1.4 / 25);
		};
		class PlayerWantedLevel: RscText
		{
			idc = 1005;
			text = "* * * * *"; //--- ToDo: Localize;
			x = 0.208344 * safezoneW + safezoneX;
			y = 0.285809 * safezoneH + safezoneY;
			w = 0.108367 * safezoneW;
			h = 0.0849965 * safezoneH;
			colorText[] = {1,-1,-1,1};
			sizeEx = (1.4 / 25);
		};
		class PlayerWeight: RscText
		{
			idc = 1006;
			text = "INVETORY WEIGHT"; //--- ToDo: Localize;
			x = 0.069706 * safezoneW + safezoneX;
			y = 0.343606 * safezoneH + safezoneY;
			w = 0.247014 * safezoneW;
			h = 0.0339986 * safezoneH;
			colorBackground[] = {0.7,0.7,0.7,1};
		};
		class RscText_1006: RscText
		{
			idc = 1007;
			x = 0.069706 * safezoneW + safezoneX;
			y = 0.387805 * safezoneH + safezoneY;
			w = 0.247014 * safezoneW;
			h = 0.530379 * safezoneH;
			colorBackground[] = {0.7,0.7,0.7,1};
		};
		class RscText_1007: RscText
		{
			idc = 1008;
			text = "MONEY"; //--- ToDo: Localize;
			x = 0.0824518 * safezoneW + safezoneX;
			y = 0.394604 * safezoneH + safezoneY;
			w = 0.232671 * safezoneW;
			h = 0.0849965 * safezoneH;
			sizeEx = (2 / 25);
		};
		class RscText_1008: RscText
		{
			idc = 1009;
			text = "BANK"; //--- ToDo: Localize;
			x = 0.0824518 * safezoneW + safezoneX;
			y = 0.462602 * safezoneH + safezoneY;
			w = 0.232671 * safezoneW;
			h = 0.0849965 * safezoneH;
			sizeEx = (2 / 25);
		};
		class RscText_1009: RscText
		{
			idc = 1010;
			text = "PROPERTIES"; //--- ToDo: Localize;
			x = 0.0824518 * safezoneW + safezoneX;
			y = 0.530599 * safezoneH + safezoneY;
			w = 0.232671 * safezoneW;
			h = 0.0849965 * safezoneH;
			sizeEx = (2 / 25);
		};
		class RscText_1010: RscText
		{
			idc = 1011;
			text = "GANG NAME"; //--- ToDo: Localize;
			x = 0.0824518 * safezoneW + safezoneX;
			y = 0.656394 * safezoneH + safezoneY;
			w = 0.232671 * safezoneW;
			h = 0.0849965 * safezoneH;
			sizeEx = (2 / 25);
		};
		class RscText_1011: RscText
		{
			idc = 1012;
			text = "HOTKEYS"; //--- ToDo: Localize;
			x = 0.0824518 * safezoneW + safezoneX;
			y = 0.727791 * safezoneH + safezoneY;
			w = 0.232671 * safezoneW;
			h = 0.0849965 * safezoneH;
			sizeEx = (2 / 25);
		};
		class RscText_1012: RscText
		{
			idc = 1013;
			text = "HOTKEY 1"; //--- ToDo: Localize;
			x = 0.117507 * safezoneW + safezoneX;
			y = 0.809388 * safezoneH + safezoneY;
			w = 0.197611 * safezoneW;
			h = 0.0271989 * safezoneH;
		};
		class RscText_1013: RscText
		{
			idc = 1014;
			text = "HOTKEY 2"; //--- ToDo: Localize;
			x = 0.117507 * safezoneW + safezoneX;
			y = 0.843387 * safezoneH + safezoneY;
			w = 0.197611 * safezoneW;
			h = 0.0271989 * safezoneH;
		};
		class RscText_1014: RscText
		{
			idc = 1015;
			text = "HOTKEY 3"; //--- ToDo: Localize;
			x = 0.117507 * safezoneW + safezoneX;
			y = 0.880786 * safezoneH + safezoneY;
			w = 0.197611 * safezoneW;
			h = 0.0271989 * safezoneH;
		};
		class RscText_1015: RscText
		{
			idc = 1016;
			x = 0.32468 * safezoneW + safezoneX;
			y = 0.221211 * safezoneH + safezoneY;
			w = 0.345826 * safezoneW;
			h = 0.693575 * safezoneH;
			colorBackground[] = {0.7,0.7,0.7,1};
		};
		class RscListbox_1500: RscListbox
		{
			idc = 1017;
			x = 0.34221 * safezoneW + safezoneX;
			y = 0.282406 * safezoneH + safezoneY;
			w = 0.19285 * safezoneW;
			h = 0.173396 * safezoneH;
		};
		class RscListbox_1501: RscListbox
		{
			idc = 1018;
			x = 0.34221 * safezoneW + safezoneX;
			y = 0.510192 * safezoneH + safezoneY;
			w = 0.19285 * safezoneW;
			h = 0.237996 * safezoneH;
		};
		class RscText_1016: RscText
		{
			idc = 1019;
			text = "LICENSES"; //--- ToDo: Localize;
			x = 0.32946 * safezoneW + safezoneX;
			y = 0.234808 * safezoneH + safezoneY;
			w = 0.162565 * safezoneW;
			h = 0.0407983 * safezoneH;
			sizeEx = (1.5 / 25);
		};
		class RscText_1017: RscText
		{
			idc = 1020;
			text = "VIRTUAL ITEMS"; //--- ToDo: Localize;
			x = 0.32946 * safezoneW + safezoneX;
			y = 0.465999 * safezoneH + safezoneY;
			w = 0.162565 * safezoneW;
			h = 0.0407983 * safezoneH;
			sizeEx = (1.5 / 25);
		};
		class RscCombo_2100: RscCombo
		{
			idc = 1021;
			text = "Select Player"; //--- ToDo: Localize;
			x = 0.342208 * safezoneW + safezoneX;
			y = 0.799186 * safezoneH + safezoneY;
			w = 0.19285 * safezoneW;
			h = 0.0373979 * safezoneH;
		};
		class RscEdit_1400: RscEdit
		{
			idc = 1022;
			text = "0"; //--- ToDo: Localize;
			x = 0.34221 * safezoneW + safezoneX;
			y = 0.761789 * safezoneH + safezoneY;
			w = 0.194444 * safezoneW;
			h = 0.0271982 * safezoneH;
		};
		class RscButton_1600: RscButton
		{
			idc = 1023;
			text = "GANG"; //--- ToDo: Localize;
			x = 0.543009 * safezoneW + safezoneX;
			y = 0.313009 * safezoneH + safezoneY;
			w = 0.122714 * safezoneW;
			h = 0.0611972 * safezoneH;
		};
		class RscButton_1601: RscButton
		{
			idc = 1024;
			text = "KEYS"; //--- ToDo: Localize;
			x = 0.543009 * safezoneW + safezoneX;
			y = 0.381006 * safezoneH + safezoneY;
			w = 0.122714 * safezoneW;
			h = 0.0611972 * safezoneH;
		};
		class RscButton_1602: RscButton
		{
			idc = 1025;
			text = "GARAGE"; //--- ToDo: Localize;
			x = 0.543009 * safezoneW + safezoneX;
			y = 0.449004 * safezoneH + safezoneY;
			w = 0.122714 * safezoneW;
			h = 0.0611972 * safezoneH;
		};
		class RscButton_1603: RscButton
		{
			idc = 1026;
			text = "WANTED"; //--- ToDo: Localize;
			x = 0.543009 * safezoneW + safezoneX;
			y = 0.517001 * safezoneH + safezoneY;
			w = 0.122714 * safezoneW;
			h = 0.0611972 * safezoneH;
		};
		class RscButton_1604: RscButton
		{
			idc = 1027;
			text = "NEWS"; //--- ToDo: Localize;
			x = 0.543009 * safezoneW + safezoneX;
			y = 0.584998 * safezoneH + safezoneY;
			w = 0.122714 * safezoneW;
			h = 0.0611972 * safezoneH;
		};
		class RscButton_1605: RscButton
		{
			idc = 1028;
			text = "REP LIST"; //--- ToDo: Localize;
			x = 0.543009 * safezoneW + safezoneX;
			y = 0.652995 * safezoneH + safezoneY;
			w = 0.122714 * safezoneW;
			h = 0.0611972 * safezoneH;
		};
		class RscButton_1606: RscButton
		{
			idc = 1029;
			text = "GIVE MONEY"; //--- ToDo: Localize;
			x = 0.339022 * safezoneW + safezoneX;
			y = 0.853586 * safezoneH + safezoneY;
			w = 0.0956172 * safezoneW;
			h = 0.0407978 * safezoneH;
		};
		class RscButton_1607: RscButton
		{
			idc = 1030;
			text = "GIVE ITEMS"; //--- ToDo: Localize;
			x = 0.445797 * safezoneW + safezoneX;
			y = 0.853585 * safezoneH + safezoneY;
			w = 0.0956172 * safezoneW;
			h = 0.0407978 * safezoneH;
		};
		class RscButton_1608: RscButton
		{
			idc = 1031;
			text = "CLOSE"; //--- ToDo: Localize;
			x = 0.547791 * safezoneW + safezoneX;
			y = 0.771989 * safezoneH + safezoneY;
			w = 0.111556 * safezoneW;
			h = 0.0407978 * safezoneH;
		};
		class RscPicture_1200: RscText
		{
			idc = 1032;
			text = "";
			x = 0.678469 * safezoneW + safezoneX;
			y = 0.221211 * safezoneH + safezoneY;
			w = 0.250234 * safezoneW;
			h = 0.693596 * safezoneH;
		};
	};
};
