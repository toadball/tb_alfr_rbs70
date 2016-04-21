class CfgPatches {
	class TB_ALFR_RBS70 {
		units[] = {"tb_alfr_rbs70"};
		weapons[] = {"tb_launcher_rbs70"};
		requiredVersion = 0.1;
		requiredAddons[] = {"Extended_Eventhandlers","tb_alfr_units"};
	};
};

#include "moves.hpp"
#include "CfgVehicles.hpp"
#include "CfgWAM.hpp"

class Extended_Init_Eventhandlers {
    class TB_alfr_Rbs70 {
        class TB_alfr_Rbs70_init {
            init = "tb_alfr_bolidePFH = compile preprocessFileLineNumbers '\tb_alfr_rbs70\BolidePFH.sqf'";
        };
    };
};

class Extended_FiredBIS_Eventhandlers {
    class TB_alfr_Rbs70 {
        class TB_alfr_Rbs70_firedEH {
            firedBIS = "_this call tb_alfr_bolidePFH";
        };
    };
};
