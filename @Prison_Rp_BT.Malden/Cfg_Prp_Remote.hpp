	/*
    *
    *       Project :  
    *              °Opérations°
    *
    *       Team   :
    *               BriCodeur Team Dev'Arma 3 France / http://devarma3france.fr/
    *
    *       Author  :
    *               [DA3F] Aroun Le BriCodeur
    *
    *       File :
    *           CfgRemoteExec.hpp
    *
	*/

	#define F(NAME,TARGET) class NAME { \
	    allowedTargets = TARGET; \
	};

	#define JIP(NAME,TARGET) class NAME { \
	    allowedTargets = TARGET; \
	    jip = 1; \
	};

	#define ANYONE 0
	#define CLIENT 1
	#define SERVER 2
	// #define HC HC_DA3F // On en est pas la.

	class CfgRemoteExec {
	        class Functions {
	            mode = 1;
	            jip = 0;
	        /* DA3F Mission °Opération° */
	            // F(DA3F_fnc_Addaction,ANYONE)
	            // F(DA3F_fnc_Create_Veh,ANYONE)
	            // F(DA3F_fnc_add_Xp,CLIENT)
	            // F(DA3F_fnc_TargetDischarge,CLIENT)
	            // F(DA3F_fnc_loadInfoVeh,ANYONE)
	            // F(DA3F_fnc_UpdateChat,ANYONE)
	            // F(DA3F_fnc_Create_Marker,ANYONE)
	            // F(DA3F_fnc_Spawn_hostile,SERVER)
	            // F(DA3F_fnc_Create_Unit,SERVER)
	            // F(DA3F_fnc_GetSet_Msg,ANYONE)
	            // F(DA3F_fnc_VarAndCodeAllClient,ANYONE)
	            // F(DA3F_fnc_valide_Escape,CLIENT)
	            // F(DA3F_fnc_unit_in_area,ANYONE)
	        /* fnc BIS */
	            F(bis_fnc_reviveinitaddplayer,ANYONE)
	            F(bis_fnc_execvm,ANYONE)
	            F(bis_fnc_call,ANYONE)
	            F(bis_fnc_earthquake,ANYONE)
	        };

	    class Commands {
	        mode = 1;
	        jip = 0;

	        F(hint,ANYONE)
	        F(systemChat,ANYONE)
	        F(selectLeader,ANYONE)
	        F(addHandgunItem,ANYONE)
	        F(addMagazine,ANYONE)
	        F(addPrimaryWeaponItem,ANYONE)
	        F(addWeapon,ANYONE)
	        F(addAction,ANYONE)
	        F(setFuel,ANYONE)
	        F(setFuelCargo,ANYONE)
	        F(failMission,ANYONE)
	        F(disableCollisionWith,ANYONE)
	    };
	};
