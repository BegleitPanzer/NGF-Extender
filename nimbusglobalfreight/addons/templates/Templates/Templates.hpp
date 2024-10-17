class Templates 
{
    class NimbusGF
    {
        basepath = QPATHTOFOLDER(Templates\NimbusGF);
        priority = 100;
        side = "Reb"; // Inv, Occ, Reb, Riv, Civ
        flagTexture = "\A3\Data_F\Flags\flag_FIA_CO.paa"; // Path to an icon to be displayed in the select menu.
        name = "Nimbus Global Freight"; // Name shown in the select menu.
        file = "NimbusGF_Reb"; // The template file name - .sqf, that gets appended automatically.
        //maps[] = {"blud_vidda"}; // If this template should be prioritized on any maps (case sensitive to worldName)
        climate[] = {"arctic", "temperate", "arid", "tropical"}; // climate that the template can be selected on.
        description = "PMC group operating a freighting company as cover"; // If this isn't included, no description will show (unless inherited from the base class.)
    };
};





/*
    Climates:
    {"arid", "arctic", "temperate", "tropical"}
*/