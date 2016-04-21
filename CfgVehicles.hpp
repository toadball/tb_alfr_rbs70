class Optics_Armored;
class Optics_Commander_01 : Optics_Armored {
	class Wide;
	class Medium;
	class Narrow;
};

class CfgVehicles {
	class LandVehicle;
	class StaticWeapon: LandVehicle	{
		class Turrets;
		class MainTurret;
	};
	class StaticAAWeapon:StaticWeapon {};
	
	class TB_alfr_Rbs70: StaticAAWeapon {
		author = "ToadBall";
		gunnercansee = "2+4+8+32";
		scope = 2;
		model = "\tb_alfr_rbs70\RBS70.p3d";		
		displayName = "RBS-70";
		mapsize = 2.8;
		class Library { };
		picture = "\tb_alfr_rbs70\data\picture_rbs70_CA.paa";
		icon = "\tb_alfr_rbs70\data\icon_rbs70_CA.paa";
		side = 2;
		faction = "tb_alfr_1bn";
		crew = "tb_alfr1bn_soldier_csw";
		typicalCargo[] = {"tb_alfr1bn_soldier_csw"};

		class Turrets: Turrets {
			class MainTurret: MainTurret {
				minTurn=-360;
				maxTurn=360;
				gunneraction = "TB_RBS70";
				gunnergetInAction = "";
				gunnergetOutAction = "";
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;				
				maxelev = 40;
				memorypointsgetingunner = "pos_gunner";
				memorypointsgetingunnerdir = "pos_gunner_dir";
				minelev = -10;			
				gunnerOpticsModel = "\tb_alfr_rbs70\2D_optics.p3d";
				gunnerOpticsEffect[] = {
					"TankCommanderOptics1",
					"BWTV"				
				};
				weapons[] = {"tb_launcher_rbs70"};
				magazines[] = {
					"tb_missile_BOLIDE","tb_missile_BOLIDE",
					"tb_missile_BOLIDE","tb_missile_BOLIDE",
					"tb_missile_BOLIDE","tb_missile_BOLIDE",					
					"tb_missile_BOLIDE","tb_missile_BOLIDE"
				};
				class ViewOptics {
					initanglex = 0;
					initangley = 0;
					initfov = 0.155;
					maxanglex = 30;
					maxangley = 100;
					maxfov = 0.155;
					minanglex = -30;
					minangley = -100;
					minfov = 0.047;
					visionMode[] = {"Normal","Ti"};
					thermalMode[] = {0,1};	
				};	
				class OpticsIn : Optics_Commander_01 {
					class Wide : Wide {
						initFov = 0.155;
						minFov = 0.155;
						maxFov = 0.155;	
						visionMode[] = {"Normal","Ti"};
						thermalMode[] = {0,1};	
						gunnerOpticsModel = "\tb_alfr_rbs70\2D_optics.p3d";						
					};
					class Medium : Medium {
						initFov = 0.101;
						minFov = 0.101;
						maxFov = 0.101;
						visionMode[] = {"Normal","Ti"};
						thermalMode[] = {0,1};	
						gunnerOpticsModel = "\tb_alfr_rbs70\2D_optics.p3d";												
					};
					class Narrow : Narrow {
						initFov = 0.047;
						minFov = 0.047;
						maxFov = 0.047;
						visionMode[] = {"Normal","Ti"};
						thermalMode[] = {0,1};	
						gunnerOpticsModel = "\tb_alfr_rbs70\2D_optics.p3d";												
					};
				};
			};
		};
		class AssembleInfo {
		    primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {
				"tb_alfr_rbs70_cluBag",
				"tb_alfr_rbs70_standBag"
			};
			displayName = "";
		};	
	};
	class Bag_Base;
	class Weapon_Bag_Base : Bag_Base {
		class assembleInfo;
	};
	class tb_alfr_rbs70_cluBag : Weapon_Bag_Base {
		author = "Toadball";
		scope = 2;
		displayName = "RBS70 CLU Bag";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		hiddenSelectionsTextures[] = {
			"\A3\weapons_f\ammoboxes\bags\data\backpack_tortila_oli_co.paa"
		};
		picture = "\A3\weapons_f_beta\ammoboxes\bags\data\ui\icon_B_Tortila_oli_ca.paa";
		faction = "tb_alfr_1bn";
		mass = 180;
		class assembleInfo : assembleInfo {
			displayName = "RBS70";
			assembleTo = "tb_alfr_rbs70";
			base[] = {
				"tb_alfr_rbs70_standBag"
			};
		};
	};	
	class tb_alfr_rbs70_standBag: Bag_Base {
		author = "Toadball";
		scope = 2;
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		hiddenSelectionsTextures[] = {
			"\A3\weapons_f\ammoboxes\bags\data\backpack_tortila_oli_co.paa"
		};
		picture = "\A3\weapons_f_beta\ammoboxes\bags\data\ui\icon_B_Tortila_oli_ca.paa";
		displayName = "RBS70 Stand Bag";
		maximumLoad = 0;
		mass = 180;
		faction = "tb_alfr_1bn";
		class assembleInfo {
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = { };
			displayName = "";
		};
	};		
};