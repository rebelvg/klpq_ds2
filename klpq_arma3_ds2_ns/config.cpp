class CfgPatches {
    class klpq_arma3_ds2_ns {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1;
        requiredAddons[] = {
            "DynaSound_DS_sys"
        };

        addonRootClass = "A3_Characters_F";
    };
};

class Extended_PreInit_EventHandlers {
    delete DynaSound_DS_sys;
};

class Extended_PostInit_EventHandlers {
    delete DynaSound_DS_sys;
};

class Extended_FiredBIS_EventHandlers {
    class All {
        delete DynaSound_DS_sys;
    };
};
