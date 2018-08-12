    /*
    *
    *       Project :  
    *              Prison Rp
    *
    *       Team   :
    *               BriCodeur Team Dev'Arma 3 France / http://devarma3france.fr/
    *
    *       Author  :
    *               [DA3F] Aroun Le BriCodeur
    *
    *       File :
    *           BT_macros.sqf
    *
    *       DESCRIPTION :
    *               -------------
    *       ARGUMENTS :
    *               -------------
    *       EXEMPLES :
    *               -------------
    *
    */

    #define My_Ctrl(disp,ctrl) ((findDisplay ##disp) displayCtrl ##ctrl)
    #define Cfg_Veh_A3(TYPE,Class,SETTING) TYPE(ConfigFile >> "CfgVehicles" >> Class >> SETTING)
    #define Cfg_sub_a_A3(TYPE,CFG,Class,SETTING) TYPE(ConfigFile >> CFG >> Class >> SETTING)
    #define Cfg_sub_b_A3(TYPE,CFG,Class,SETTING,SUB) TYPE(ConfigFile >> CFG >> Class >> SETTING >> SUB)
    #define Cfg_prp(TYPE,CLASS,SETTING) TYPE(missionConfigFile >> "Prison_Rp" >> CLASS >> SETTING)