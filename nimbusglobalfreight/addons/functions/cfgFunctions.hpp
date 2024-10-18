class CfgFunctions 
{
    //be careful when overwriting functions as version updates can break your extension
    class A3A 
    {
        class Missions 
        {
            class AS_Official 
            {
                file = QPATHTOFOLDER(Missions\fn_as_Official.sqf);
            };
        };

        class 
    };

    //your own functions should be kept here
    class ADDON
    {
		class warlevel {
			file = QPATHTOFOLDER(warlevel);
			class WarLevelUpgrades {};
		};
    };
};
