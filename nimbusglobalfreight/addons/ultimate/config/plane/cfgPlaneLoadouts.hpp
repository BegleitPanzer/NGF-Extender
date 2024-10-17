/*
class planeLoadouts
{
    // It also has support for these parameters, though I haven't used them before.
    // mainGun
    // rocketLauncher[]
    // missileLauncher[]
    // bombRacks[]
    // diveParams[]
    class CASDIVE
    {
        class B_Plane_CAS_01_dynamicLoadout_F
        {
            loadout[] = {"","","","","PylonMissile_1Rnd_Bomb_04_F","PylonMissile_1Rnd_BombCluster_03_F","","","",""};
            mainGun = "Gatling_30mm_Plane_CAS_01_F";
            bombRacks[] = {"Bomb_04_Plane_CAS_01_F", "BombCluster_03_F"};
            diveParams[] = {1200, 600, 180, 55, 15, {0,0}};
        };
    };

    class CAS
    {
        class B_Plane_CAS_01_dynamicLoadout_F
        {
            loadout[] = {"PylonRack_7Rnd_Rocket_04_HE_F","PylonRack_7Rnd_Rocket_04_HE_F","PylonRack_7Rnd_Rocket_04_HE_F","PylonRack_3Rnd_LG_scalpel","PylonRack_3Rnd_LG_scalpel","PylonRack_3Rnd_LG_scalpel","PylonRack_3Rnd_LG_scalpel","PylonRack_7Rnd_Rocket_04_HE_F","PylonRack_7Rnd_Rocket_04_HE_F","PylonRack_7Rnd_Rocket_04_HE_F"};
            mainGun = "Gatling_30mm_Plane_CAS_01_F";
            rocketLauncher[] = {"Rocket_04_HE_Plane_CAS_01_F"};
            missileLauncher[] = {"Missile_AGM_02_Plane_CAS_01_F", "missiles_SCALPEL"};
        };
    };
   
    class AA
    {
        class AMF_RAFALE_C_01_F
        {
            loadout[] = {"PylonMissile_Missile_MICAEM_x1","PylonMissile_Missile_MICAEM_x1","PylonRack_3_Missile_MICAEM_x1","PylonRack_3_Missile_MICAEM_x1","PylonRack_Missile_MICAIR_x1","PylonRack_Missile_MICAIR_x1","PylonRack_Missile_TANK_02_x1_f","PylonRack_Missile_TANK_02_x1_f","PylonRack_Missile_METEOR_INT_x1","PylonRack_Missile_METEOR_INT_x1","PylonRack_Missile_TANK_01_x1_f"};
            mainGun = "weapon_30m791";
            missileLauncher[] = {"weapon_MICAIRLauncher","weapon_MICAEMLauncher","weapon_METEORLauncher"};
            diveParams[] = {1000, 600, 180, 55, 15, {0,0}};
        };
        class AMF_RAFALE_CRO_01_C : AMF_RAFALE_C_01_F {};
        class AMF_RAFALE_EGYPTIAN_01_C : AMF_RAFALE_C_01_F {};
        class AMF_RAFALE_ARABIAN_01_C : AMF_RAFALE_C_01_F {};
        class AMF_RAFALE_GREEK_01_C : AMF_RAFALE_C_01_F {};
        class AMF_RAFALE_INDIA_01_C : AMF_RAFALE_C_01_F {};
        class AMF_RAFALE_INDO_01_C : AMF_RAFALE_C_01_F {};
        class AMF_RAFALE_QATARIAN_01_C : AMF_RAFALE_C_01_F {};
        // Variants inherit from the main one
    };
};
*/

class planeLoadouts
{
    // It also has support for these parameters, though I haven't used them before.
    // mainGun
    // rocketLauncher[]
    // missileLauncher[]
    // bombRacks[]
    // diveParams[]
    class CASDIVE
    {
        class FIR_F15SE
        {
            loadout[] = {"FIR_Empty_P_1rnd_M","FIR_Empty_P_1rnd_M","FIR_Empty_P_1rnd_M","FIR_Empty_P_1rnd_M","FIR_AIM9X_P_1rnd_M","FIR_AIM9X_P_1rnd_M","FIR_AIM9X_P_1rnd_M","FIR_AIM9X_P_1rnd_M","FIR_GBU38_P_1rnd_M","FIR_Mk82_GP_prox_P_1rnd_M","FIR_GBU38_P_1rnd_M","FIR_GBU38_P_1rnd_M","FIR_Mk82_GP_prox_P_1rnd_M","FIR_GBU38_P_1rnd_M","FIR_GBU38_P_1rnd_M","FIR_Mk82_GP_prox_P_1rnd_M","FIR_GBU38_P_1rnd_M","FIR_GBU38_P_1rnd_M","FIR_Mk82_GP_prox_P_1rnd_M","FIR_GBU38_P_1rnd_M","FIR_GBU56_P_1rnd_M","FIR_GBU56_P_1rnd_M","FIR_Mk82_GP_prox_P_1rnd_M","FIR_AGM65G_P_1rnd_M","FIR_AGM65G_P_1rnd_M","FIR_F15SE_CFT_P_1rnd_M"};
            mainGun = "FIR_M61A2";
            bombRacks[] = {"FIR_Mk84_AIR_P_1rnd_M", "FIR_Mk82_GP_prox_P_1rnd_M", "FIR_Mk82_GP_P_3rnd_M"};
            diveParams[] = {1200, 600, 180, 55, 15, {0,0}};
        };
    };

    class CAS
    {
        class FIR_F15SE
        {
            loadout[] = {"FIR_Empty_P_1rnd_M","FIR_Empty_P_1rnd_M","FIR_Empty_P_1rnd_M","FIR_Empty_P_1rnd_M","FIR_AIM9X_P_1rnd_M","FIR_AIM9X_P_1rnd_M","FIR_AIM9X_P_1rnd_M","FIR_AIM9X_P_1rnd_M","FIR_GBU38_P_1rnd_M","FIR_Mk82_GP_prox_P_1rnd_M","FIR_GBU38_P_1rnd_M","FIR_GBU38_P_1rnd_M","FIR_Mk82_GP_prox_P_1rnd_M","FIR_GBU38_P_1rnd_M","FIR_GBU38_P_1rnd_M","FIR_Mk82_GP_prox_P_1rnd_M","FIR_GBU38_P_1rnd_M","FIR_GBU38_P_1rnd_M","FIR_Mk82_GP_prox_P_1rnd_M","FIR_GBU38_P_1rnd_M","FIR_GBU56_P_1rnd_M","FIR_GBU56_P_1rnd_M","FIR_Mk82_GP_prox_P_1rnd_M","FIR_AGM65G_P_1rnd_M","FIR_AGM65G_P_1rnd_M","FIR_F15SE_CFT_P_1rnd_M"};
            mainGun = "FIR_M61A2";
            rocketLauncher[] = {"FIR_Hydra_M229_P_19rnd_M"};
            missileLauncher[] = {"FIR_AGM65G_P_1rnd_M", "FIR_AGM154C_P_1rnd_Mc", "FIR_AGM158B_P_1rnd_M"};
        };
    };
   
    class AA
    {
        class AMF_RAFALE_C_01_F
        {
            loadout[] = {"PylonMissile_Missile_MICAEM_x1","PylonMissile_Missile_MICAEM_x1","PylonRack_3_Missile_MICAEM_x1","PylonRack_3_Missile_MICAEM_x1","PylonRack_Missile_MICAIR_x1","PylonRack_Missile_MICAIR_x1","PylonRack_Missile_TANK_02_x1_f","PylonRack_Missile_TANK_02_x1_f","PylonRack_Missile_METEOR_INT_x1","PylonRack_Missile_METEOR_INT_x1","PylonRack_Missile_TANK_01_x1_f"};
            mainGun = "weapon_30m791";
            missileLauncher[] = {"weapon_MICAIRLauncher","weapon_MICAEMLauncher","weapon_METEORLauncher"};
            diveParams[] = {1000, 600, 180, 55, 15, {0,0}};
        };
        class AMF_RAFALE_CRO_01_C : AMF_RAFALE_C_01_F {};
        class AMF_RAFALE_EGYPTIAN_01_C : AMF_RAFALE_C_01_F {};
        class AMF_RAFALE_ARABIAN_01_C : AMF_RAFALE_C_01_F {};
        class AMF_RAFALE_GREEK_01_C : AMF_RAFALE_C_01_F {};
        class AMF_RAFALE_INDIA_01_C : AMF_RAFALE_C_01_F {};
        class AMF_RAFALE_INDO_01_C : AMF_RAFALE_C_01_F {};
        class AMF_RAFALE_QATARIAN_01_C : AMF_RAFALE_C_01_F {};
        // Variants inherit from the main one
    };
};
