#include <stdio.h>

int main ()
{
    printf("Welcome to the Converter Program!!!");
    printf("Please choose the type of conversion you want to perform:\n");
    printf("1. Area Converter\n2. Length Converter\n3. Speed Converter\n4.Weight Converter\n5.Volume Converter\n6. Temperature Converter\n7. Time Converter");
    int choice;
    scanf("%c", &choice);
    switch (choice)
    {
        case 1:
        printf("You have chosen Area Converter!!!\n");
            int area_choice;
    float sqm, sqft, sqm_input, sqyd_result;
    float sqm_km, sqkm_result, sqm_miles, sqmi_result;
    float sqm_acres, acres_result, sqm_hectares, hectares_result;
    float sqft_input, sqm_result, sqft_sqyd, sqyd_result_sqft;
    float sqft_km, sqkm_result_sqft, sqft_miles, sqmi_result_sqft;
    float sqft_acres, acres_result_sqft, sqft_hectares, hectares_result_sqft;
    float sqyd_input, sqm_result_sqyd, sqyd_sqft, sqft_result_sqyd;
    float sqyd_km, sqkm_result_sqyd, sqyd_miles, sqmi_result_sqyd;
    float sqyd_acres, acres_result_sqyd, sqyd_hectares, hectares_result_sqyd;
    float sqkm_input, sqm_result_sqkm, sqkm_sqft, sqft_result_sqkm;
    float sqkm_sqyd, sqyd_result_sqkm, sqkm_miles, sqmi_result_sqkm;
    float sqkm_acres, acres_result_sqkm, sqkm_hectares, hectares_result_sqkm;
    float sqmi_input, sqm_result_sqmi, sqmi_sqft, sqft_result_sqmi;
    float sqmi_sqyd, sqyd_result_sqmi, sqmi_km, sqkm_result_sqmi;
    float sqmi_acres, acres_result_sqmi, sqmi_hectares, hectares_result_sqmi;
    float acres_input, sqm_result_acres, acres_sqft, sqft_result_acres;
    float acres_sqyd, sqyd_result_acres, acres_km, sqkm_result_acres;
    float acres_miles, sqmi_result_acres, acres_hectares, hectares_result_acres;
    float hectares_input, sqm_result_hectares, hectares_sqft, sqft_result_hectares;
    float hectares_sqyd, sqyd_result_hectares, hectares_km, sqkm_result_hectares;
    float hectares_miles, sqmi_result_hectares, hectares_acres, acres_result_hectares;
    printf("Welcome to the Area Converter!\n");
    printf("This program allows you to convert between different units of area.\n");
    printf("Please choose which conversion you want:\n");
    printf("1. Square Meters to Square Feet\n");
    printf("2. Square Meters to Square Yards\n");
    printf("3. Square Meters to Square Kilometers\n");
    printf("4. Square Meters to Square Miles\n");
    printf("5. Square Meters to Acres\n");
    printf("6. Square Meters to Hectares\n");
    printf("7. Square Feet to Square Meters\n");
    printf("8. Square Feet to Square Yards\n");
    printf("9. Square Feet to Square Kilometers\n");
    printf("10. Square Feet to Square Miles\n");
    printf("11. Square Feet to Acres\n");
    printf("12. Square Feet to Hectares\n");
    printf("13. Square Yards to Square Meters\n");
    printf("14. Square Yards to Square Feet\n");
    printf("15. Square Yards to Square Kilometers\n");
    printf("16. Square Yards to Square Miles\n");
    printf("17. Square Yards to Acres\n");
    printf("18. Square Yards to Hectares\n");
    printf("19. Square Kilometers to Square Meters\n");
    printf("20. Square Kilometers to Square Feet\n");
    printf("21. Square Kilometers to Square Yards\n");
    printf("22. Square Kilometers to Square Miles\n");
    printf("23. Square Kilometers to Acres\n");
    printf("24. Square Kilometers to Hectares\n");
    printf("25. Square Miles to Square Meters\n");
    printf("26. Square Miles to Square Feet\n");
    printf("27. Square Miles to Square Yards\n");
    printf("28. Square Miles to Square Kilometers\n");
    printf("29. Square Miles to Acres\n");
    printf("30. Square Miles to Hectares\n");
    printf("31. Acres to Square Meters\n");
    printf("32. Acres to Square Feet\n");
    printf("33. Acres to Square Yards\n");
    printf("34. Acres to Square Kilometers\n");
    printf("35. Acres to Square Miles\n");
    printf("36. Acres to Hectares\n");
    printf("37. Hectares to Square Meters\n");
    printf("38. Hectares to Square Feet\n");
    printf("39. Hectares to Square Yards\n");
    printf("40. Hectares to Square Kilometers\n");
    printf("41. Hectares to Square Miles\n");
    printf("42. Hectares to Acres\n");
    printf("43. Exit\n");
    printf("Enter your choice (1-43): ");
        scanf("%d", &area_choice);
        switch (area_choice)
        {
            case 1:
                printf("You chose Square Meters to Square Feet conversion.\n");
                printf("Please enter the value in square meters: ");
                scanf("%f", &sqm);
                sqft = sqm * 10.7639;
                printf("%f square meters is equal to %f square feet.\n", sqm, sqft);
                printf("Thank you for using Area Converter!!!\n");
                break;
            case 2:
                printf("You chose Square Meters to Square Yards conversion.\n");
                printf("Please enter the value in square meters: ");
                scanf("%f", &sqm_input);
                sqyd_result = sqm_input * 1.19599;
                printf("%f square meters is equal to %f square yards.\n", sqm_input, sqyd_result);
                printf("Thank you for using Area Converter!!!\n");
                break;
            case 3:
                printf("You chose Square Meters to Square Kilometers conversion.\n");
                printf("Please enter the value in square meters: ");
                scanf("%f", &sqm_km);
                sqkm_result = sqm_km / 1000000;
                printf("%f square meters is equal to %f square kilometers.\n", sqm_km, sqkm_result);
                printf("Thank you for using Area Converter!!!\n");
                break;
            case 4:
                printf("You chose Square Meters to Square Miles conversion.\n");
                printf("Please enter the value in square meters: ");
                scanf("%f", &sqm_miles);
                sqmi_result = sqm_miles / 2589988.11;
                printf("%f square meters is equal to %f square miles.\n", sqm_miles, sqmi_result);
                printf("Thank you for using Area Converter!!!\n");
                break;
            case 5:
                printf("You chose Square Meters to Acres conversion.\n");
                printf("Please enter the value in square meters: ");
                scanf("%f", &sqm_acres);
                acres_result = sqm_acres / 4046.86;
                printf("%f square meters is equal to %f acres.\n", sqm_acres, acres_result);
                printf("Thank you for using Area Converter!!!\n");
                break;
            case 6:
                printf("You chose Square Meters to Hectares conversion.\n");
                printf("Please enter the value in square meters: ");
                scanf("%f", &sqm_hectares);
                hectares_result = sqm_hectares / 10000;
                printf("%f square meters is equal to %f hectares.\n", sqm_hectares, hectares_result);
                printf("Thank you for using Area Converter!!!\n");
                break;
            case 7:
                printf("You chose Square Feet to Square Meters conversion.\n");
                printf("Please enter the value in square feet: ");
                scanf("%f", &sqft_input);
                sqm_result = sqft_input / 10.7639;
                printf("%f square feet is equal to %f square meters.\n", sqft_input, sqm_result);
                printf("Thank you for using Area Converter!!!\n");
                break;
            case 8:
                printf("You chose Square Feet to Square Yards conversion.\n");
                printf("Please enter the value in square feet: ");
                scanf("%f", &sqft_sqyd);
                sqyd_result_sqft = sqft_sqyd / 9;
                printf("%f square feet is equal to %f square yards.\n", sqft_sqyd, sqyd_result_sqft);
                printf("Thank you for using Area Converter!!!\n");
                break;
            case 9:
                printf("You chose Square Feet to Square Kilometers conversion.\n");
                printf("Please enter the value in square feet: ");
                scanf("%f", &sqft_km);
                sqkm_result_sqft = sqft_km / 10763910.4;
                printf("%f square feet is equal to %f square kilometers.\n", sqft_km, sqkm_result_sqft);
                printf("Thank you for using Area Converter!!!\n");
                break;
            case 10:
                printf("You chose Square Feet to Square Miles conversion.\n");
                printf("Please enter the value in square feet: ");
                scanf("%f", &sqft_miles);
                sqmi_result_sqft = sqft_miles / 27878400;
                printf("%f square feet is equal to %f square miles.\n", sqft_miles, sqmi_result_sqft);
                printf("Thank you for using Area Converter!!!\n");
                break;
            case 11:
                printf("You chose Square Feet to Acres conversion.\n");
                printf("Please enter the value in square feet: ");
                scanf("%f", &sqft_acres);
                acres_result_sqft = sqft_acres / 43560;
                printf("%f square feet is equal to %f acres.\n", sqft_acres, acres_result_sqft);
                printf("Thank you for using Area Converter!!!\n");
                break;
            case 12:
                printf("You chose Square Feet to Hectares conversion.\n");
                printf("Please enter the value in square feet: ");
                scanf("%f", &sqft_hectares);
                hectares_result_sqft = sqft_hectares / 107639.104;
                printf("%f square feet is equal to %f hectares.\n", sqft_hectares, hectares_result_sqft);
                printf("Thank you for using Area Converter!!!\n");
                break;
            case 13:
                printf("You chose Square Yards to Square Meters conversion.\n");
                printf("Please enter the value in square yards: ");
                scanf("%f", &sqyd_input);
                sqm_result_sqyd = sqyd_input / 1.19599;
                printf("%f square yards is equal to %f square meters.\n", sqyd_input, sqm_result_sqyd);
                printf("Thank you for using Area Converter!!!\n");
                break;
            case 14:
                printf("You chose Square Yards to Square Feet conversion.\n");
                printf("Please enter the value in square yards: ");
                scanf("%f", &sqyd_sqft);
                sqft_result_sqyd = sqyd_sqft * 9;
                printf("%f square yards is equal to %f square feet.\n", sqyd_sqft, sqft_result_sqyd);
                printf("Thank you for using Area Converter!!!\n");
                break;
            case 15:
                printf("You chose Square Yards to Square Kilometers conversion.\n");
                printf("Please enter the value in square yards: ");
                scanf("%f", &sqyd_km);
                sqkm_result_sqyd = sqyd_km / 1195990;
                printf("%f square yards is equal to %f square kilometers.\n", sqyd_km, sqkm_result_sqyd);
                printf("Thank you for using Area Converter!!!\n");
                break;
            case 16:
                printf("You chose Square Yards to Square Miles conversion.\n");
                printf("Please enter the value in square yards: ");
                scanf("%f", &sqyd_miles);
                sqmi_result_sqyd = sqyd_miles / 3097600;
                printf("%f square yards is equal to %f square miles.\n", sqyd_miles, sqmi_result_sqyd);
                printf("Thank you for using Area Converter!!!\n");
                break;
            case 17:
                printf("You chose Square Yards to Acres conversion.\n");
                printf("Please enter the value in square yards: ");
                scanf("%f", &sqyd_acres);
                acres_result_sqyd = sqyd_acres / 4840;
                printf("%f square yards is equal to %f acres.\n", sqyd_acres, acres_result_sqyd);
                printf("Thank you for using Area Converter!!!\n");
                break;
            case 18:
                printf("You chose Square Yards to Hectares conversion.\n");
                printf("Please enter the value in square yards: ");
                scanf("%f", &sqyd_hectares);
                hectares_result_sqyd = sqyd_hectares / 11959.9;
                printf("%f square yards is equal to %f hectares.\n", sqyd_hectares, hectares_result_sqyd);
                printf("Thank you for using Area Converter!!!\n");
                break;
            case 19:
                printf("You chose Square Kilometers to Square Meters conversion.\n");
                printf("Please enter the value in square kilometers: ");
                scanf("%f", &sqkm_input);
                sqm_result_sqkm = sqkm_input * 1000000;
                printf("%f square kilometers is equal to %f square meters.\n", sqkm_input, sqm_result_sqkm);
                printf("Thank you for using Area Converter!!!\n");
                break;
            case 20:
                printf("You chose Square Kilometers to Square Feet conversion.\n");
                printf("Please enter the value in square kilometers: ");
                scanf("%f", &sqkm_sqft);
                sqft_result_sqkm = sqkm_sqft * 10763910.4;
                printf("%f square kilometers is equal to %f square feet.\n", sqkm_sqft, sqft_result_sqkm);
                printf("Thank you for using Area Converter!!!\n");
                break;
            case 21:
                printf("You chose Square Kilometers to Square Yards conversion.\n");
                printf("Please enter the value in square kilometers: ");
                scanf("%f", &sqkm_sqyd);
                sqyd_result_sqkm = sqkm_sqyd * 1195990;
                printf("%f square kilometers is equal to %f square yards.\n", sqkm_sqyd, sqyd_result_sqkm);
                printf("Thank you for using Area Converter!!!\n");
                break;
            case 22:
                printf("You chose Square Kilometers to Square Miles conversion.\n");
                printf("Please enter the value in square kilometers: ");
                scanf("%f", &sqkm_miles);
                sqmi_result_sqkm = sqkm_miles / 2.58999;
                printf("%f square kilometers is equal to %f square miles.\n", sqkm_miles, sqmi_result_sqkm);
                printf("Thank you for using Area Converter!!!\n");
                break;
            case 23:
                printf("You chose Square Kilometers to Acres conversion.\n");
                printf("Please enter the value in square kilometers: ");
                scanf("%f", &sqkm_acres);
                acres_result_sqkm = sqkm_acres * 247.105;
                printf("%f square kilometers is equal to %f acres.\n", sqkm_acres, acres_result_sqkm);
                printf("Thank you for using Area Converter!!!\n");
                break;
            case 24:
                printf("You chose Square Kilometers to Hectares conversion.\n");
                printf("Please enter the value in square kilometers: ");
                scanf("%f", &sqkm_hectares);
                hectares_result_sqkm = sqkm_hectares * 100;
                printf("%f square kilometers is equal to %f hectares.\n", sqkm_hectares, hectares_result_sqkm);
                printf("Thank you for using Area Converter!!!\n");
                break;
            case 25:
                printf("You chose Square Miles to Square Meters conversion.\n");
                printf("Please enter the value in square miles: ");
                scanf("%f", &sqmi_input);
                sqm_result_sqmi = sqmi_input * 2589988.11;
                printf("%f square miles is equal to %f square meters.\n", sqmi_input, sqm_result_sqmi);
                printf("Thank you for using Area Converter!!!\n");
                break;
            case 26:
                printf("You chose Square Miles to Square Feet conversion.\n");
                printf("Please enter the value in square miles: ");
                scanf("%f", &sqmi_sqft);
                sqft_result_sqmi = sqmi_sqft * 27878400;
                printf("%f square miles is equal to %f square feet.\n", sqmi_sqft, sqft_result_sqmi);
                printf("Thank you for using Area Converter!!!\n");
                break;
            case 27:
                printf("You chose Square Miles to Square Yards conversion.\n");
                printf("Please enter the value in square miles: ");
                scanf("%f", &sqmi_sqyd);
                sqyd_result_sqmi = sqmi_sqyd * 3097600;
                printf("%f square miles is equal to %f square yards.\n", sqmi_sqyd, sqyd_result_sqmi);
                printf("Thank you for using Area Converter!!!\n");
                break;
            case 28:
                printf("You chose Square Miles to Square Kilometers conversion.\n");
                printf("Please enter the value in square miles: ");
                scanf("%f", &sqmi_km);
                sqkm_result_sqmi = sqmi_km * 2.58999;
                printf("%f square miles is equal to %f square kilometers.\n", sqmi_km, sqkm_result_sqmi);
                printf("Thank you for using Area Converter!!!\n");
                break;
            case 29:
                printf("You chose Square Miles to Acres conversion.\n");
                printf("Please enter the value in square miles: ");
                scanf("%f", &sqmi_acres);
                acres_result_sqmi = sqmi_acres * 640;
                printf("%f square miles is equal to %f acres.\n", sqmi_acres, acres_result_sqmi);
                printf("Thank you for using Area Converter!!!\n");
                break;
            case 30:
                printf("You chose Square Miles to Hectares conversion.\n");
                printf("Please enter the value in square miles: ");
                scanf("%f", &sqmi_hectares);
                hectares_result_sqmi = sqmi_hectares * 258.998;
                printf("%f square miles is equal to %f hectares.\n", sqmi_hectares, hectares_result_sqmi);
                printf("Thank you for using Area Converter!!!\n");
                break;
            case 31:
                printf("You chose Acres to Square Meters conversion.\n");
                printf("Please enter the value in acres: ");
                scanf("%f", &acres_input);
                sqm_result_acres = acres_input * 4046.86;
                printf("%f acres is equal to %f square meters.\n", acres_input, sqm_result_acres);
                printf("Thank you for using Area Converter!!!\n");
                break;
            case 32:
                printf("You chose Acres to Square Feet conversion.\n");
                printf("Please enter the value in acres: ");
                scanf("%f", &acres_sqft);
                sqft_result_acres = acres_sqft * 43560;
                printf("%f acres is equal to %f square feet.\n", acres_sqft, sqft_result_acres);
                printf("Thank you for using Area Converter!!!\n");
                break;
            case 33:
                printf("You chose Acres to Square Yards conversion.\n");
                printf("Please enter the value in acres: ");
                scanf("%f", &acres_sqyd);
                sqyd_result_acres = acres_sqyd * 4840;
                printf("%f acres is equal to %f square yards.\n", acres_sqyd, sqyd_result_acres);
                printf("Thank you for using Area Converter!!!\n");
                break;
            case 34:
                printf("You chose Acres to Square Kilometers conversion.\n");
                printf("Please enter the value in acres: ");
                scanf("%f", &acres_km);
                sqkm_result_acres = acres_km / 247.105;
                printf("%f acres is equal to %f square kilometers.\n", acres_km, sqkm_result_acres);
                printf("Thank you for using Area Converter!!!\n");
                break;
            case 35:
                printf("You chose Acres to Square Miles conversion.\n");
                printf("Please enter the value in acres: ");
                scanf("%f", &acres_miles);
                sqmi_result_acres = acres_miles / 640;
                printf("%f acres is equal to %f square miles.\n", acres_miles, sqmi_result_acres);
                printf("Thank you for using Area Converter!!!\n");
                break;
            case 36:
                printf("You chose Acres to Hectares conversion.\n");
                printf("Please enter the value in acres: ");
                scanf("%f", &acres_hectares);
                hectares_result_acres = acres_hectares / 2.47105;
                printf("%f acres is equal to %f hectares.\n", acres_hectares, hectares_result_acres);
                printf("Thank you for using Area Converter!!!\n");
                break;
            case 37:
                printf("You chose Hectares to Square Meters conversion.\n");
                printf("Please enter the value in hectares: ");
                scanf("%f", &hectares_input);
                sqm_result_hectares = hectares_input * 10000;
                printf("%f hectares is equal to %f square meters.\n", hectares_input, sqm_result_hectares);
                printf("Thank you for using Area Converter!!!\n");
                break;
            case 38:
                printf("You chose Hectares to Square Feet conversion.\n");
                printf("Please enter the value in hectares: ");
                scanf("%f", &hectares_sqft);
                sqft_result_hectares = hectares_sqft * 107639.104;
                printf("%f hectares is equal to %f square feet.\n", hectares_sqft, sqft_result_hectares);
                printf("Thank you for using Area Converter!!!\n");
                break;
            case 39:
                printf("You chose Hectares to Square Yards conversion.\n");
                printf("Please enter the value in hectares: ");
                scanf("%f", &hectares_sqyd);
                sqyd_result_hectares = hectares_sqyd * 11959.9;
                printf("%f hectares is equal to %f square yards.\n", hectares_sqyd, sqyd_result_hectares);
                printf("Thank you for using Area Converter!!!\n");
                break;
            case 40:
                printf("You chose Hectares to Square Kilometers conversion.\n");
                printf("Please enter the value in hectares: ");
                scanf("%f", &hectares_km);
                sqkm_result_hectares = hectares_km / 100;
                printf("%f hectares is equal to %f square kilometers.\n", hectares_km, sqkm_result_hectares);
                printf("Thank you for using Area Converter!!!\n");
                break;
            case 41:
                printf("You chose Hectares to Square Miles conversion.\n");
                printf("Please enter the value in hectares: ");
                scanf("%f", &hectares_miles);
                sqmi_result_hectares = hectares_miles / 258.998;
                printf("%f hectares is equal to %f square miles.\n", hectares_miles, sqmi_result_hectares);
                printf("Thank you for using Area Converter!!!\n");
                break;
            case 42:
                printf("You chose Hectares to Acres conversion.\n");
                printf("Please enter the value in hectares: ");
                scanf("%f", &hectares_acres);
                acres_result_hectares = hectares_acres * 2.47105;
                printf("%f hectares is equal to %f acres.\n", hectares_acres, acres_result_hectares);
                printf("Thank you for using Area Converter!!!\n");
                break;
            case 43:
                printf("Exiting Area Converter.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
        break;
        case 2:
        printf("You have chosen Length Converter!!!\n");
            int length_choice;
    float inches, centimeters, centimeters_input, inches_result;
    float feet, meters, meters_input, feet_result;
    float kilometers, miles, miles_input, kilometers_result;
    float yards, meters_yards, meters_yards_input, yards_result;
    printf("Welcome to the Length Converter!\n");
    printf("This program allows you to convert between different units of length.\n");
    printf("Please choose which convertion you want:\n");
    printf("1. Inches to Centimeters\n");   
    printf("2. Centimeters to Inches\n");
    printf("3. Feet to Meters\n");
    printf("4. Meters to Feet\n");
    printf("5. Kilometers to Miles\n");
    printf("6. Miles to Kilometers\n");
    printf("7. Yards to Meters\n");
    printf("8. Meters to Yards\n");
    printf("9. Exit\n");
    printf("Enter your choice (1-8): ");
        scanf("%d", &length_choice);
        switch (length_choice)
        {
            case 1:
                printf("You chose Inches to Centimeters conversion.\n");
                printf("Please enter the value in inches: ");
                float inches;
                scanf("%f", &inches);
                float centimeters = inches * 2.54;
                printf("%f inches is equal to %f centimeters.\n", inches, centimeters);
                printf("Thank you for using Length Converter!!!\n");
                break;
            case 2:
                printf("You chose Centimeters to Inches conversion.\n");
                printf("Please enter the value in centimeters: ");
                float centimeters_input;
                scanf("%f", &centimeters_input);
                float inches_result = centimeters_input / 2.54;
                printf("%f centimeters is equal to %f inches.\n", centimeters_input, inches_result);
                printf("Thank you for using Length Converter!!!\n");
                break;
            case 3:
                printf("You chose Feet to Meters conversion.\n");
                printf("Please enter the value in feet: ");
                float feet;
                scanf("%f", &feet);
                float meters = feet * 0.3048;
                printf("%f feet is equal to %f meters.\n", feet, meters);
                printf("Thank you for using Length Converter!!!\n");
                break;
            case 4:
                printf("You chose Meters to Feet conversion.\n");
                printf("Please enter the value in meters: ");
                float meters_input;
                scanf("%f", &meters_input);
                float feet_result = meters_input / 0.3048;
                printf("%f meters is equal to %f feet.\n", meters_input, feet_result);
                printf("Thank you for using Length Converter!!!\n");
                break;
            case 5:
                printf("You chose Kilometers to Miles conversion.\n");
                printf("Please enter the value in kilometers: ");
                float kilometers;
                scanf("%f", &kilometers);
                float miles = kilometers * 0.621371;
                printf("%f kilometers is equal to %f miles.\n", kilometers, miles);
                printf("Thank you for using Length Converter!!!\n");
                break;
            case 6:
                printf("You chose Miles to Kilometers conversion.\n");
                printf("Please enter the value in miles: ");
                float miles_input;
                scanf("%f", &miles_input);
                float kilometers_result = miles_input / 0.621371;
                printf("%f miles is equal to %f kilometers.\n", miles_input, kilometers_result);
                printf("Thank you for using Length Converter!!!\n");
                break;
            case 7:
                printf("You chose Yards to Meters conversion.\n");
                printf("Please enter the value in yards: ");
                float yards;
                scanf("%f", &yards);
                float meters_yards = yards * 0.9144;
                printf("%f yards is equal to %f meters.\n", yards, meters_yards);
                printf("Thank you for using Length Converter!!!\n");
                break;
            case 8:
                printf("You chose Meters to Yards conversion.\n");
                printf("Please enter the value in meters: ");
                float meters_yards_input;
                scanf("%f", &meters_yards_input);
                float yards_result = meters_yards_input / 0.9144;
                printf("%f meters is equal to %f yards.\n", meters_yards_input, yards_result);
                printf("Thank you for using Length Converter!!!\n");
                break;
            case 9:
                printf("Exiting Length Converter.\n");
                break;

                default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
        break;
        case 3:
        printf("You have chosen Speed Converter!!!\n");
    float kmph, mph, kmph_input, mps_result;
    float mph_input, kmph_result, mph_mps, mps_result_mph;
    float mps_input, kmph_result_mps, mps_mph, mph_result_mps;
    printf("Welcome to the Speed Converter!\n");
    printf("This program allows you to convert between different units of speed.\n");
    printf("Please choose which conversion you want:\n");
    printf("1. Kilometers per hour to Miles per hour\n");
    printf("2. Kilometers per hour to Meters per second\n");
    printf("3. Miles per hour to Kilometers per hour\n");
    printf("4. Miles per hour to Meters per second\n");
    printf("5. Meters per second to Kilometers per hour\n");
    printf("6. Meters per second to Miles per hour\n"); 
    printf("7. Exit\n");
    printf("Enter your choice (1-7): ");
        int speed_choice;
        scanf("%d", &speed_choice);
        switch (speed_choice)
        {
            case 1:
                printf("You chose Kilometers per hour to Miles per hour conversion.\n");
                printf("Please enter the value in kilometers per hour: ");
                float kmph;
                scanf("%f", &kmph);
                float mph = kmph * 0.621371;
                printf("%f kilometers per hour is equal to %f miles per hour.\n", kmph, mph);
                printf("Thank you for using Speed Converter!!!\n");
                break;
            case 2:
                printf("You chose Kilometers per hour to Meters per second conversion.\n");
                printf("Please enter the value in kilometers per hour: ");
                float kmph_input;
                scanf("%f", &kmph_input);
                float mps_result = kmph_input / 3.6;
                printf("%f kilometers per hour is equal to %f meters per second.\n", kmph_input, mps_result);
                printf("Thank you for using Speed Converter!!!\n");
                break;
            case 3:
                printf("You chose Miles per hour to Kilometers per hour conversion.\n");
                printf("Please enter the value in miles per hour: ");
                float mph_input;
                scanf("%f", &mph_input);
                float kmph_result = mph_input / 0.621371;
                printf("%f miles per hour is equal to %f kilometers per hour.\n", mph_input, kmph_result);
                printf("Thank you for using Speed Converter!!!\n");
                break;
            case 4:
                printf("You chose Miles per hour to Meters per second conversion.\n");
                printf("Please enter the value in miles per hour: ");
                float mph_mps;
                scanf("%f", &mph_mps);
                float mps_result_mph = mph_mps * 0.44704;
                printf("%f miles per hour is equal to %f meters per second.\n", mph_mps, mps_result_mph);
                printf("Thank you for using Speed Converter!!!\n");
                break;
            case 5:
                printf("You chose Meters per second to Kilometers per hour conversion.\n");
                printf("Please enter the value in meters per second: ");
                float mps_input;
                scanf("%f", &mps_input);
                float kmph_result_mps = mps_input * 3.6;
                printf("%f meters per second is equal to %f kilometers per hour.\n", mps_input, kmph_result_mps);
                printf("Thank you for using Speed Converter!!!\n");
                break;
                case 6:
                printf("You chose Meters per second to Miles per hour conversion.\n");
                printf("Please enter the value in meters per second: ");
                float mps_mph;
                scanf("%f", &mps_mph);
                float mph_result_mps = mps_mph * 2.23694;
                printf("%f meters per second is equal to %f miles per hour.\n", mps_mph, mph_result_mps);
                printf("Thank you for using Speed Converter!!!\n");
                break;
                case 7:
                printf("Exiting Speed Converter.\n");
                break;
                default:
                printf("Invalid choice. Please try again.\n");
                break;
        }

        break;
        case 4:
        printf("You have chosen Weight Converter!!!\n");
            int weight_choice;
    float kilograms, pounds, kilograms_input, ounces_result;
    float kilograms_grams, grams_result, kilograms_stones, stones_result;
    float kilograms_tons, tons_result, pounds_input, kilograms_result;
    float pounds_ounces, pounds_grams, grams_result_pounds, pounds_stones, stones_result_pounds;
    float pounds_tons, tons_result_pounds, ounces_input, kilograms_result_ounces;
    float ounces_pounds, pounds_result_ounces, ounces_grams, grams_result_ounces;
    float ounces_stones, stones_result_ounces, ounces_tons, tons_result_ounces;
    float grams_input, kilograms_result_grams, grams_pounds, pounds_result_grams;
    float grams_ounces, ounces_result_grams, grams_stones, stones_result_grams;
    float grams_tons, tons_result_grams, stones_input, kilograms_result_stones;
    float stones_pounds, pounds_result_stones, stones_ounces, ounces_result_stones;
    float stones_grams, grams_result_stones, stones_tons, tons_result_stones;
    float tons_input, kilograms_result_tons, tons_pounds, pounds_result_tons;
    float tons_ounces, ounces_result_tons, tons_grams, grams_result_tons;
    float tons_stones, stones_result_tons;

    printf("Welcome to the Weight Converter!\n");
    printf("This program allows you to convert between different units of weight.\n");
    printf("Please choose which conversion you want:\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Kilograms to Ounces\n");
    printf("3. Kilograms to Grams\n");
    printf("4. Kilograms to Stones\n");
    printf("5. Kilograms to Tons\n");
    printf("6. Pounds to Kilograms\n");
    printf("7. Pounds to Ounces\n");
    printf("8. Pounds to Grams\n");
    printf("9. Pounds to Stones\n");
    printf("10. Pounds to Tons\n");
    printf("11. Ounces to Kilograms\n");
    printf("12. Ounces to Pounds\n");
    printf("13. Ounces to Grams\n");
    printf("14. Ounces to Stones\n");
    printf("15. Ounces to Tons\n");
    printf("16. Grams to Kilograms\n");
    printf("17. Grams to Pounds\n");
    printf("18. Grams to Ounces\n");
    printf("19. Grams to Stones\n");
    printf("20. Grams to Tons\n");
    printf("21. Stones to Kilograms\n");
    printf("22. Stones to Pounds\n");
    printf("23. Stones to Ounces\n");
    printf("24. Stones to Grams\n");
    printf("25. Stones to Tons\n");
    printf("26. Tons to Kilograms\n");
    printf("27. Tons to Pounds\n");
    printf("28. Tons to Ounces\n");
    printf("29. Tons to Grams\n");
    printf("30. Tons to Stones\n");
    printf("31. Exit\n");
    printf("Enter your choice (1-31): ");
        scanf("%d", &weight_choice);
        switch (weight_choice)
        {
            case 1:
                printf("You chose Kilograms to Pounds conversion.\n");
                printf("Please enter the value in kilograms: ");
                float kilograms;
                scanf("%f", &kilograms);
                float pounds = kilograms * 2.20462;
                printf("%f kilograms is equal to %f pounds.\n", kilograms, pounds);
                printf("Thank you for using Weight Converter!!!\n");
                break;
            case 2:
                printf("You chose Kilograms to Ounces conversion.\n");
                printf("Please enter the value in kilograms: ");
                float kilograms_input;
                scanf("%f", &kilograms_input);
                float ounces_result = kilograms_input * 35.274;
                printf("%f kilograms is equal to %f ounces.\n", kilograms_input, ounces_result);
                printf("Thank you for using Weight Converter!!!\n");
                break;
            case 3:
                printf("You chose Kilograms to Grams conversion.\n");
                printf("Please enter the value in kilograms: ");
                float kilograms_grams;
                scanf("%f", &kilograms_grams);
                float grams_result = kilograms_grams * 1000;
                printf("%f kilograms is equal to %f grams.\n", kilograms_grams, grams_result);
                printf("Thank you for using Weight Converter!!!\n");
                break;
            case 4:
                printf("You chose Kilograms to Stones conversion.\n");
                printf("Please enter the value in kilograms: ");
                float kilograms_stones;
                scanf("%f", &kilograms_stones);
                float stones_result = kilograms_stones / 6.35029;
                printf("%f kilograms is equal to %f stones.\n", kilograms_stones, stones_result);
                printf("Thank you for using Weight Converter!!!\n");
                break;
            case 5:
                printf("You chose Kilograms to Tons conversion.\n");
                printf("Please enter the value in kilograms: ");
                float kilograms_tons;
                scanf("%f", &kilograms_tons);
                float tons_result = kilograms_tons / 907.185;
                printf("%f kilograms is equal to %f tons.\n", kilograms_tons, tons_result);
                printf("Thank you for using Weight Converter!!!\n");
                break;
            case 6:
                printf("You chose Pounds to Kilograms conversion.\n");
                printf("Please enter the value in pounds: ");
                float pounds_input;
                scanf("%f", &pounds_input);
                float kilograms_result = pounds_input / 2.20462;
                printf("%f pounds is equal to %f kilograms.\n", pounds_input, kilograms_result);
                printf("Thank you for using Weight Converter!!!\n");
                break;
                case 7:
                printf("You chose Pounds to Ounces conversion.\n");
                printf("Please enter the value in pounds: ");
                float pounds_ounces;
                scanf("%f", &pounds_ounces);
                ounces_result = pounds_ounces * 16;
                printf("%f pounds is equal to %f ounces.\n", pounds_ounces, ounces_result);
                printf("Thank you for using Weight Converter!!!\n");
                break;
            case 8:
                printf("You chose Pounds to Grams conversion.\n");
                printf("Please enter the value in pounds: ");
                float pounds_grams;
                scanf("%f", &pounds_grams);
                float grams_result_pounds = pounds_grams * 453.592;
                printf("%f pounds is equal to %f grams.\n", pounds_grams, grams_result_pounds);
                printf("Thank you for using Weight Converter!!!\n");
                break;
                case 9:
                printf("You chose Pounds to Stones conversion.\n");
                printf("Please enter the value in pounds: ");
                float pounds_stones;
                scanf("%f", &pounds_stones);
                float stones_result_pounds = pounds_stones / 14;
                printf("%f pounds is equal to %f stones.\n", pounds_stones, stones_result_pounds);
                printf("Thank you for using Weight Converter!!!\n");
                break;
            case 10:
                printf("You chose Pounds to Tons conversion.\n");
                printf("Please enter the value in pounds: ");
                float pounds_tons;
                scanf("%f", &pounds_tons);
                float tons_result_pounds = pounds_tons / 2204.62;
                printf("%f pounds is equal to %f tons.\n", pounds_tons, tons_result_pounds);
                printf("Thank you for using Weight Converter!!!\n");
                break;
                case 11:
                printf("You chose Ounces to Kilograms conversion.\n");
                printf("Please enter the value in ounces: ");
                float ounces_input;
                scanf("%f", &ounces_input);
                float kilograms_result_ounces = ounces_input / 35.274;
                printf("%f ounces is equal to %f kilograms.\n", ounces_input, kilograms_result_ounces);
                printf("Thank you for using Weight Converter!!!\n");
                break;
            case 12:
                printf("You chose Ounces to Pounds conversion.\n");
                printf("Please enter the value in ounces: ");
                float ounces_pounds;
                scanf("%f", &ounces_pounds);
                float pounds_result_ounces = ounces_pounds / 16;
                printf("%f ounces is equal to %f pounds.\n", ounces_pounds, pounds_result_ounces);
                printf("Thank you for using Weight Converter!!!\n");
                break;
                case 13:
                printf("You chose Ounces to Grams conversion.\n");
                printf("Please enter the value in ounces: ");
                float ounces_grams;
                scanf("%f", &ounces_grams);
                float grams_result_ounces = ounces_grams * 28.3495;
                printf("%f ounces is equal to %f grams.\n", ounces_grams, grams_result_ounces);
                printf("Thank you for using Weight Converter!!!\n");
                break;
                case 14:
                printf("You chose Ounces to Stones conversion.\n");
                printf("Please enter the value in ounces: ");
                float ounces_stones;
                scanf("%f", &ounces_stones);
                float stones_result_ounces = ounces_stones / 224;
                printf("%f ounces is equal to %f stones.\n", ounces_stones, stones_result_ounces);
                printf("Thank you for using Weight Converter!!!\n");
                break;
                case 15:
                printf("You chose Ounces to Tons conversion.\n");
                printf("Please enter the value in ounces: ");
                float ounces_tons;
                scanf("%f", &ounces_tons);
                float tons_result_ounces = ounces_tons / 35840;
                printf("%f ounces is equal to %f tons.\n", ounces_tons, tons_result_ounces);
                printf("Thank you for using Weight Converter!!!\n");
                break;
                case 16:
                printf("You chose Grams to Kilograms conversion.\n");
                printf("Please enter the value in grams: ");
                float grams_input;
                scanf("%f", &grams_input);
                float kilograms_result_grams = grams_input / 1000;
                printf("%f grams is equal to %f kilograms.\n", grams_input, kilograms_result_grams);
                printf("Thank you for using Weight Converter!!!\n");
                break;
                case 17:
                printf("You chose Grams to Pounds conversion.\n");
                printf("Please enter the value in grams: ");
                float grams_pounds;
                scanf("%f", &grams_pounds);
                float pounds_result_grams = grams_pounds / 453.592;
                printf("%f grams is equal to %f pounds.\n", grams_pounds, pounds_result_grams);
                printf("Thank you for using Weight Converter!!!\n");
                break;
                case 18:
                printf("You chose Grams to Ounces conversion.\n");
                printf("Please enter the value in grams: ");
                float grams_ounces;
                scanf("%f", &grams_ounces);
                float ounces_result_grams = grams_ounces / 28.3495;
                printf("%f grams is equal to %f ounces.\n", grams_ounces, ounces_result_grams);
                printf("Thank you for using Weight Converter!!!\n");
                break;
                case 19:
                printf("You chose Grams to Stones conversion.\n");
                printf("Please enter the value in grams: ");
                float grams_stones;
                scanf("%f", &grams_stones);
                float stones_result_grams = grams_stones / 6350.29;
                printf("%f grams is equal to %f stones.\n", grams_stones, stones_result_grams);
                printf("Thank you for using Weight Converter!!!\n");
                break;
                case 20:
                printf("You chose Grams to Tons conversion.\n");
                printf("Please enter the value in grams: ");
                float grams_tons;
                scanf("%f", &grams_tons);
                float tons_result_grams = grams_tons / 907185;
                printf("%f grams is equal to %f tons.\n", grams_tons, tons_result_grams);
                printf("Thank you for using Weight Converter!!!\n");
                break;
                case 21:
                printf("You chose Stones to Kilograms conversion.\n");
                printf("Please enter the value in stones: ");
                float stones_input;
                scanf("%f", &stones_input);
                float kilograms_result_stones = stones_input * 6.35029;
                printf("%f stones is equal to %f kilograms.\n", stones_input, kilograms_result_stones);
                printf("Thank you for using Weight Converter!!!\n");
                break;
                case 22:
                printf("You chose Stones to Pounds conversion.\n");
                printf("Please enter the value in stones: ");
                float stones_pounds;
                scanf("%f", &stones_pounds);
                float pounds_result_stones = stones_pounds * 14;
                printf("%f stones is equal to %f pounds.\n", stones_pounds, pounds_result_stones);
                printf("Thank you for using Weight Converter!!!\n");
                break;
                case 23:
                printf("You chose Stones to Ounces conversion.\n");
                printf("Please enter the value in stones: ");
                float stones_ounces;
                scanf("%f", &stones_ounces);
                float ounces_result_stones = stones_ounces * 224;
                printf("%f stones is equal to %f ounces.\n", stones_ounces, ounces_result_stones);
                printf("Thank you for using Weight Converter!!!\n");
                break;
                case 24:
                printf("You chose Stones to Grams conversion.\n");
                printf("Please enter the value in stones: ");
                float stones_grams;
                scanf("%f", &stones_grams);
                float grams_result_stones = stones_grams * 6350.29;
                printf("%f stones is equal to %f grams.\n", stones_grams, grams_result_stones);
                printf("Thank you for using Weight Converter!!!\n");
                break;
                case 25:
                printf("You chose Stones to Tons conversion.\n");
                printf("Please enter the value in stones: ");
                float stones_tons;
                scanf("%f", &stones_tons);
                float tons_result_stones = stones_tons / 157.473;
                printf("%f stones is equal to %f tons.\n", stones_tons, tons_result_stones);
                printf("Thank you for using Weight Converter!!!\n");
                break;
                case 26:
                printf("You chose Tons to Kilograms conversion.\n");
                printf("Please enter the value in tons: ");
                float tons_input;
                scanf("%f", &tons_input);
                float kilograms_result_tons = tons_input * 907.185;
                printf("%f tons is equal to %f kilograms.\n", tons_input, kilograms_result_tons);
                printf("Thank you for using Weight Converter!!!\n");
                break;
                case 27:
                printf("You chose Tons to Pounds conversion.\n");
                printf("Please enter the value in tons: ");
                float tons_pounds;
                scanf("%f", &tons_pounds);
                float pounds_result_tons = tons_pounds * 2204.62;
                printf("%f tons is equal to %f pounds.\n", tons_pounds, pounds_result_tons);
                printf("Thank you for using Weight Converter!!!\n");
                break;
                case 28:
                printf("You chose Tons to Ounces conversion.\n");
                printf("Please enter the value in tons: ");
                float tons_ounces;
                scanf("%f", &tons_ounces);
                float ounces_result_tons = tons_ounces * 35840;
                printf("%f tons is equal to %f ounces.\n", tons_ounces, ounces_result_tons);
                printf("Thank you for using Weight Converter!!!\n");
                break;
                case 29:
                printf("You chose Tons to Grams conversion.\n");
                printf("Please enter the value in tons: ");
                float tons_grams;
                scanf("%f", &tons_grams);
                float grams_result_tons = tons_grams * 907185;
                printf("%f tons is equal to %f grams.\n", tons_grams, grams_result_tons);
                printf("Thank you for using Weight Converter!!!\n");
                break;
                case 30:
                printf("You chose Tons to Stones conversion.\n");
                printf("Please enter the value in tons: ");
                float tons_stones;
                scanf("%f", &tons_stones);
                float stones_result_tons = tons_stones * 157.473;
                printf("%f tons is equal to %f stones.\n", tons_stones, stones_result_tons);
                printf("Thank you for using Weight Converter!!!\n");
                break;
                case 31:
                printf("Exiting Weight Converter.\n");
                break;

                default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
        break;
        case 5:
        printf("You have chosen Volume Converter!!!\n");
            float liters, gallons, liters_input, quarts_result;
    float liters_pints, pints_result, liters_cups, cups_result;
    float liters_fluid_ounces, fluid_ounces_result, liters_milliliters, milliliters_result;
    float liters_tablespoons, tablespoons_result, liters_teaspoons, teaspoons_result;
    float gallons_input, liters_result, gallons_quarts, quarts_result_gallons;
    float gallons_pints, pints_result_gallons, gallons_cups, cups_result_gallons;
    float gallons_fluid_ounces, fluid_ounces_result_gallons, gallons_milliliters, milliliters_result_gallons;
    float gallons_tablespoons, tablespoons_result_gallons, gallons_teaspoons, teaspoons_result_gallons;
    float quarts_input, liters_result_quarts, quarts_gallons, gallons_result_quarts;
    float quarts_pints, pints_result_quarts, quarts_cups, cups_result_quarts;
    float quarts_fluid_ounces, fluid_ounces_result_quarts, quarts_milliliters, milliliters_result_quarts;
    float quarts_tablespoons, tablespoons_result_quarts, quarts_teaspoons, teaspoons_result_quarts;
    float pints_input, liters_result_pints, pints_gallons, gallons_result_pints;
    float pints_quarts, quarts_result_pints, pints_cups, cups_result_pints;
    float pints_fluid_ounces, fluid_ounces_result_pints, pints_milliliters, milliliters_result_pints;
    float pints_tablespoons, tablespoons_result_pints, pints_teaspoons, teaspoons_result_pints;
    float cups_input, liters_result_cups, cups_gallons, gallons_result_cups;
    float cups_quarts, quarts_result_cups, cups_pints, pints_result_cups;
    float cups_fluid_ounces, fluid_ounces_result_cups, cups_milliliters, milliliters_result_cups;
    float cups_tablespoons, tablespoons_result_cups, cups_teaspoons, teaspoons_result_cups;
    float fluid_ounces_input, liters_result_fluid_ounces, fluid_ounces_gallons, gallons_result_fluid_ounces;
    float fluid_ounces_quarts, quarts_result_fluid_ounces, fluid_ounces_pints, pints_result_fluid_ounces;
    float fluid_ounces_cups, cups_result_fluid_ounces, fluid_ounces_milliliters, milliliters_result_fluid_ounces;
    float fluid_ounces_tablespoons, tablespoons_result_fluid_ounces, fluid_ounces_teaspoons, teaspoons_result_fluid_ounces;
    float milliliters_input, liters_result_milliliters, milliliters_gallons, gallons_result_milliliters;
    float milliliters_quarts, quarts_result_milliliters, milliliters_pints, pints_result_milliliters;
    float milliliters_cups, cups_result_milliliters, milliliters_fluid_ounces, fluid_ounces_result_milliliters;
    float milliliters_tablespoons, tablespoons_result_milliliters, milliliters_teaspoons, teaspoons_result_milliliters;
    float tablespoons_input, liters_result_tablespoons, tablespoons_gallons, gallons_result_tablespoons;
    float tablespoons_quarts, quarts_result_tablespoons, tablespoons_pints, pints_result_tablespoons;
    float tablespoons_cups, cups_result_tablespoons, tablespoons_fluid_ounces, fluid_ounces_result_tablespoons;
    float tablespoons_milliliters, milliliters_result_tablespoons, tablespoons_teaspoons, teaspoons_result_tablespoons;
    float teaspoons_input, liters_result_teaspoons, teaspoons_gallons, gallons_result_teaspoons;
    float teaspoons_quarts, quarts_result_teaspoons, teaspoons_pints, pints_result_teaspoons;
    float teaspoons_cups, cups_result_teaspoons, teaspoons_fluid_ounces, fluid_ounces_result_teaspoons;
    float teaspoons_milliliters, milliliters_result_teaspoons, teaspoons_tablespoons, tablespoons_result_teaspoons;

    printf("Welcome to the Volume Converter!\n");
    printf("This program allows you to convert between different units of volume.\n");
    printf("Please choose which conversion you want:\n");
    printf("1. Liters to Gallons\n");
    printf("2. Liters to Quarts\n");
    printf("3. Liters to Pints\n");
    printf("4. Liters to Cups\n");
    printf("5. Liters to Fluid Ounces\n");
    printf("6. Liters to Milliliters\n");
    printf("7. Liters to Tablespoons\n");
    printf("8. Liters to Teaspoons\n");
    printf("9. Gallons to Liters\n");
    printf("10. Gallons to Quarts\n");  
    printf("11. Gallons to Pints\n");
    printf("12. Gallons to Cups\n");
    printf("13. Gallons to Fluid Ounces\n");
    printf("14. Gallons to Milliliters\n");
    printf("15. Gallons to Tablespoons\n");
    printf("16. Gallons to Teaspoons\n");
    printf("17. Quarts to Liters\n");
    printf("18. Quarts to Gallons\n");
    printf("19. Quarts to Pints\n");
    printf("20. Quarts to Cups\n");
    printf("21. Quarts to Fluid Ounces\n");
    printf("22. Quarts to Milliliters\n");
    printf("23. Quarts to Tablespoons\n");
    printf("24. Quarts to Teaspoons\n");
    printf("25. Pints to Liters\n");
    printf("26. Pints to Gallons\n");
    printf("27. Pints to Quarts\n");
    printf("28. Pints to Cups\n");
    printf("29. Pints to Fluid Ounces\n");
    printf("30. Pints to Milliliters\n");
    printf("31. Pints to Tablespoons\n");
    printf("32. Pints to Teaspoons\n");
    printf("33. Cups to Liters\n");
    printf("34. Cups to Gallons\n");
    printf("35. Cups to Quarts\n");
    printf("36. Cups to Pints\n");
    printf("37. Cups to Fluid Ounces\n");
    printf("38. Cups to Milliliters\n");
    printf("39. Cups to Tablespoons\n");
    printf("40. Cups to Teaspoons\n");
    printf("41. Fluid Ounces to Liters\n");
    printf("42. Fluid Ounces to Gallons\n");
    printf("43. Fluid Ounces to Quarts\n");
    printf("44. Fluid Ounces to Pints\n");
    printf("45. Fluid Ounces to Cups\n");
    printf("46. Fluid Ounces to Milliliters\n");
    printf("47. Fluid Ounces to Tablespoons\n");
    printf("48. Fluid Ounces to Teaspoons\n");
    printf("49. Milliliters to Liters\n");
    printf("50. Milliliters to Gallons\n");
    printf("51. Milliliters to Quarts\n");
    printf("52. Milliliters to Pints\n");
    printf("53. Milliliters to Cups\n");
    printf("54. Milliliters to Fluid Ounces\n");
    printf("55. Milliliters to Tablespoons\n");
    printf("56. Milliliters to Teaspoons\n");
    printf("57. Tablespoons to Liters\n");
    printf("58. Tablespoons to Gallons\n");
    printf("59. Tablespoons to Quarts\n");
    printf("60. Tablespoons to Pints\n");
    printf("61. Tablespoons to Cups\n");
    printf("62. Tablespoons to Fluid Ounces\n");
    printf("63. Tablespoons to Milliliters\n");
    printf("64. Tablespoons to Teaspoons\n");
    printf("65. Teaspoons to Liters\n");
    printf("66. Teaspoons to Gallons\n");
    printf("67. Teaspoons to Quarts\n");
    printf("68. Teaspoons to Pints\n");
    printf("69. Teaspoons to Cups\n");
    printf("70. Teaspoons to Fluid Ounces\n");
    printf("71. Teaspoons to Milliliters\n");
    printf("72. Teaspoons to Tablespoons\n");
    printf("73. Exit\n");
    printf("Enter your choice (1-73): ");
        int volume_choice;
        scanf("%d", &volume_choice);
        switch (volume_choice)
        {
            case 1:
                printf("You chose Liters to Gallons conversion.\n");
                printf("Please enter the value in liters: ");
                float liters;
                scanf("%f", &liters);
                float gallons = liters * 0.264172;
                printf("%f liters is equal to %f gallons.\n", liters, gallons);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 2:
                printf("You chose Liters to Quarts conversion.\n");
                printf("Please enter the value in liters: ");
                float liters_input;
                scanf("%f", &liters_input);
                float quarts_result = liters_input * 1.05669;
                printf("%f liters is equal to %f quarts.\n", liters_input, quarts_result);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 3:
                printf("You chose Liters to Pints conversion.\n");
                printf("Please enter the value in liters: ");
                float liters_pints;
                scanf("%f", &liters_pints);
                float pints_result = liters_pints * 2.11338;
                printf("%f liters is equal to %f pints.\n", liters_pints, pints_result);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 4:
                printf("You chose Liters to Cups conversion.\n");
                printf("Please enter the value in liters: ");
                float liters_cups;
                scanf("%f", &liters_cups);
                float cups_result = liters_cups * 4.22675;
                printf("%f liters is equal to %f cups.\n", liters_cups, cups_result);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 5:
                printf("You chose Liters to Fluid Ounces conversion.\n");
                printf("Please enter the value in liters: ");
                float liters_fluid_ounces;
                scanf("%f", &liters_fluid_ounces);
                float fluid_ounces_result = liters_fluid_ounces * 33.814;
                printf("%f liters is equal to %f fluid ounces.\n", liters_fluid_ounces, fluid_ounces_result);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 6:
                printf("You chose Liters to Milliliters conversion.\n");
                printf("Please enter the value in liters: ");
                float liters_milliliters;
                scanf("%f", &liters_milliliters);
                float milliliters_result = liters_milliliters * 1000;
                printf("%f liters is equal to %f milliliters.\n", liters_milliliters, milliliters_result);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 7:
                printf("You chose Liters to Tablespoons conversion.\n");
                printf("Please enter the value in liters: ");
                float liters_tablespoons;
                scanf("%f", &liters_tablespoons);
                float tablespoons_result = liters_tablespoons * 67.628;
                printf("%f liters is equal to %f tablespoons.\n", liters_tablespoons, tablespoons_result);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 8:
                printf("You chose Liters to Teaspoons conversion.\n");
                printf("Please enter the value in liters: ");
                float liters_teaspoons;
                scanf("%f", &liters_teaspoons);
                float teaspoons_result = liters_teaspoons * 202.884;
                printf("%f liters is equal to %f teaspoons.\n", liters_teaspoons, teaspoons_result);
                printf("Thank you for using Volume Converter!!!\n");
                break;
             case 9:
                printf("You chose Gallons to Liters conversion.\n");
                printf("Please enter the value in gallons: ");
                float gallons_input;
                scanf("%f", &gallons_input);
                float liters_result = gallons_input / 0.264172;
                printf("%f gallons is equal to %f liters.\n", gallons_input, liters_result);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 10:
                printf("You chose Gallons to Quarts conversion.\n");
                printf("Please enter the value in gallons: ");
                float gallons_quarts;
                scanf("%f", &gallons_quarts);
                float quarts_result_gallons = gallons_quarts * 4;
                printf("%f gallons is equal to %f quarts.\n", gallons_quarts, quarts_result_gallons);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 11:
                printf("You chose Gallons to Pints conversion.\n");
                printf("Please enter the value in gallons: ");
                float gallons_pints;
                scanf("%f", &gallons_pints);
                float pints_result_gallons = gallons_pints * 8;
                printf("%f gallons is equal to %f pints.\n", gallons_pints, pints_result_gallons);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 12:
                printf("You chose Gallons to Cups conversion.\n");
                printf("Please enter the value in gallons: ");
                float gallons_cups;
                scanf("%f", &gallons_cups);
                float cups_result_gallons = gallons_cups * 16;
                printf("%f gallons is equal to %f cups.\n", gallons_cups, cups_result_gallons);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 13:
                printf("You chose Gallons to Fluid Ounces conversion.\n");
                printf("Please enter the value in gallons: ");
                float gallons_fluid_ounces;
                scanf("%f", &gallons_fluid_ounces);
                float fluid_ounces_result_gallons = gallons_fluid_ounces * 128;
                printf("%f gallons is equal to %f fluid ounces.\n", gallons_fluid_ounces, fluid_ounces_result_gallons);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 14:
                printf("You chose Gallons to Milliliters conversion.\n");
                printf("Please enter the value in gallons: ");
                float gallons_milliliters;
                scanf("%f", &gallons_milliliters);
                float milliliters_result_gallons = gallons_milliliters * 3785.41;
                printf("%f gallons is equal to %f milliliters.\n", gallons_milliliters, milliliters_result_gallons);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 15:
                printf("You chose Gallons to Tablespoons conversion.\n");
                printf("Please enter the value in gallons: ");
                float gallons_tablespoons;
                scanf("%f", &gallons_tablespoons);
                float tablespoons_result_gallons = gallons_tablespoons * 256;
                printf("%f gallons is equal to %f tablespoons.\n", gallons_tablespoons, tablespoons_result_gallons);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 16:
                printf("You chose Gallons to Teaspoons conversion.\n");
                printf("Please enter the value in gallons: ");
                float gallons_teaspoons;
                scanf("%f", &gallons_teaspoons);
                float teaspoons_result_gallons = gallons_teaspoons * 768;
                printf("%f gallons is equal to %f teaspoons.\n", gallons_teaspoons, teaspoons_result_gallons);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 17:
                printf("You chose Quarts to Liters conversion.\n");
                printf("Please enter the value in quarts: ");
                float quarts_input;
                scanf("%f", &quarts_input);
                float liters_result_quarts = quarts_input / 1.05669;
                printf("%f quarts is equal to %f liters.\n", quarts_input, liters_result_quarts);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 18:
                printf("You chose Quarts to Gallons conversion.\n");
                printf("Please enter the value in quarts: ");
                float quarts_gallons;
                scanf("%f", &quarts_gallons);
                float gallons_result_quarts = quarts_gallons / 4;
                printf("%f quarts is equal to %f gallons.\n", quarts_gallons, gallons_result_quarts);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 19:
                printf("You chose Quarts to Pints conversion.\n");
                printf("Please enter the value in quarts: ");
                float quarts_pints;
                scanf("%f", &quarts_pints);
                float pints_result_quarts = quarts_pints * 2;
                printf("%f quarts is equal to %f pints.\n", quarts_pints, pints_result_quarts);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 20:
                printf("You chose Quarts to Cups conversion.\n");
                printf("Please enter the value in quarts: ");
                float quarts_cups;
                scanf("%f", &quarts_cups);
                float cups_result_quarts = quarts_cups * 4;
                printf("%f quarts is equal to %f cups.\n", quarts_cups, cups_result_quarts);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 21:
                printf("You chose Quarts to Fluid Ounces conversion.\n");
                printf("Please enter the value in quarts: ");
                float quarts_fluid_ounces;
                scanf("%f", &quarts_fluid_ounces);
                float fluid_ounces_result_quarts = quarts_fluid_ounces * 32;
                printf("%f quarts is equal to %f fluid ounces.\n", quarts_fluid_ounces, fluid_ounces_result_quarts);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 22:
                printf("You chose Quarts to Milliliters conversion.\n");
                printf("Please enter the value in quarts: ");
                float quarts_milliliters;
                scanf("%f", &quarts_milliliters);
                float milliliters_result_quarts = quarts_milliliters * 946.353;
                printf("%f quarts is equal to %f milliliters.\n", quarts_milliliters, milliliters_result_quarts);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 23:
                printf("You chose Quarts to Tablespoons conversion.\n");
                printf("Please enter the value in quarts: ");
                float quarts_tablespoons;
                scanf("%f", &quarts_tablespoons);
                float tablespoons_result_quarts = quarts_tablespoons * 64;
                printf("%f quarts is equal to %f tablespoons.\n", quarts_tablespoons, tablespoons_result_quarts);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 24:
                printf("You chose Quarts to Teaspoons conversion.\n");
                printf("Please enter the value in quarts: ");
                float quarts_teaspoons;
                scanf("%f", &quarts_teaspoons);
                float teaspoons_result_quarts = quarts_teaspoons * 192;
                printf("%f quarts is equal to %f teaspoons.\n", quarts_teaspoons, teaspoons_result_quarts);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 25:
                printf("You chose Pints to Liters conversion.\n");
                printf("Please enter the value in pints: ");
                float pints_input;
                scanf("%f", &pints_input);
                float liters_result_pints = pints_input / 2.11338;
                printf("%f pints is equal to %f liters.\n", pints_input, liters_result_pints);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 26:
                printf("You chose Pints to Gallons conversion.\n");
                printf("Please enter the value in pints: ");
                float pints_gallons;
                scanf("%f", &pints_gallons);
                float gallons_result_pints = pints_gallons / 8;
                printf("%f pints is equal to %f gallons.\n", pints_gallons, gallons_result_pints);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 27:
                printf("You chose Pints to Quarts conversion.\n");
                printf("Please enter the value in pints: ");
                float pints_quarts;
                scanf("%f", &pints_quarts);
                float quarts_result_pints = pints_quarts / 2;
                printf("%f pints is equal to %f quarts.\n", pints_quarts, quarts_result_pints);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 28:
                printf("You chose Pints to Cups conversion.\n");
                printf("Please enter the value in pints: ");
                float pints_cups;
                scanf("%f", &pints_cups);
                float cups_result_pints = pints_cups * 2;
                printf("%f pints is equal to %f cups.\n", pints_cups, cups_result_pints);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 29:
                printf("You chose Pints to Fluid Ounces conversion.\n");
                printf("Please enter the value in pints: ");
                float pints_fluid_ounces;
                scanf("%f", &pints_fluid_ounces);
                float fluid_ounces_result_pints = pints_fluid_ounces * 16;
                printf("%f pints is equal to %f fluid ounces.\n", pints_fluid_ounces, fluid_ounces_result_pints);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 30:
                printf("You chose Pints to Milliliters conversion.\n");
                printf("Please enter the value in pints: ");
                float pints_milliliters;
                scanf("%f", &pints_milliliters);
                float milliliters_result_pints = pints_milliliters * 473.176;
                printf("%f pints is equal to %f milliliters.\n", pints_milliliters, milliliters_result_pints);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 31:
                printf("You chose Pints to Tablespoons conversion.\n");
                printf("Please enter the value in pints: ");
                float pints_tablespoons;
                scanf("%f", &pints_tablespoons);
                float tablespoons_result_pints = pints_tablespoons * 32;
                printf("%f pints is equal to %f tablespoons.\n", pints_tablespoons, tablespoons_result_pints);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 32:
                printf("You chose Pints to Teaspoons conversion.\n");
                printf("Please enter the value in pints: ");
                float pints_teaspoons;
                scanf("%f", &pints_teaspoons);
                float teaspoons_result_pints = pints_teaspoons * 96;
                printf("%f pints is equal to %f teaspoons.\n", pints_teaspoons, teaspoons_result_pints);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 33:
                printf("You chose Cups to Liters conversion.\n");
                printf("Please enter the value in cups: ");
                float cups_input;
                scanf("%f", &cups_input);
                float liters_result_cups = cups_input / 4.22675;
                printf("%f cups is equal to %f liters.\n", cups_input, liters_result_cups);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 34:  
                printf("You chose Cups to Gallons conversion.\n");
                printf("Please enter the value in cups: ");
                float cups_gallons;
                scanf("%f", &cups_gallons);
                float gallons_result_cups = cups_gallons / 16;
                printf("%f cups is equal to %f gallons.\n", cups_gallons, gallons_result_cups);
                printf("Thank you for using Volume Converter!!!\n");
                break;  
            case 35:
                printf("You chose Cups to Quarts conversion.\n");
                printf("Please enter the value in cups: ");
                float cups_quarts;
                scanf("%f", &cups_quarts);
                float quarts_result_cups = cups_quarts / 4;
                printf("%f cups is equal to %f quarts.\n", cups_quarts, quarts_result_cups);
                printf("Thank you for using Volume Converter!!!\n");
                break;  
            case 36:
                printf("You chose Cups to Pints conversion.\n");
                printf("Please enter the value in cups: ");
                float cups_pints;
                scanf("%f", &cups_pints);
                float pints_result_cups = cups_pints / 2;
                printf("%f cups is equal to %f pints.\n", cups_pints, pints_result_cups);
                printf("Thank you for using Volume Converter!!!\n");
                break;  
            case 37:
                printf("You chose Cups to Fluid Ounces conversion.\n");
                printf("Please enter the value in cups: ");
                float cups_fluid_ounces;
                scanf("%f", &cups_fluid_ounces);
                float fluid_ounces_result_cups = cups_fluid_ounces * 8;
                printf("%f cups is equal to %f fluid ounces.\n", cups_fluid_ounces, fluid_ounces_result_cups);
                printf("Thank you for using Volume Converter!!!\n");
                break;  
            case 38:
                printf("You chose Cups to Milliliters conversion.\n");
                printf("Please enter the value in cups: ");
                float cups_milliliters;
                scanf("%f", &cups_milliliters);
                float milliliters_result_cups = cups_milliliters * 236.588;
                printf("%f cups is equal to %f milliliters.\n", cups_milliliters, milliliters_result_cups);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 39:
                printf("You chose Cups to Tablespoons conversion.\n");
                printf("Please enter the value in cups: ");
                float cups_tablespoons;
                scanf("%f", &cups_tablespoons);
                float tablespoons_result_cups = cups_tablespoons * 16;
                printf("%f cups is equal to %f tablespoons.\n", cups_tablespoons, tablespoons_result_cups);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 40:
                printf("You chose Cups to Teaspoons conversion.\n");
                printf("Please enter the value in cups: ");
                float cups_teaspoons;
                scanf("%f", &cups_teaspoons);
                float teaspoons_result_cups = cups_teaspoons * 48;
                printf("%f cups is equal to %f teaspoons.\n", cups_teaspoons, teaspoons_result_cups);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 41:
                printf("You chose Fluid Ounces to Liters conversion.\n");
                printf("Please enter the value in fluid ounces: ");
                float fluid_ounces_input;
                scanf("%f", &fluid_ounces_input);
                float liters_result_fluid_ounces = fluid_ounces_input / 33.814;
                printf("%f fluid ounces is equal to %f liters.\n", fluid_ounces_input, liters_result_fluid_ounces);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 42:
                printf("You chose Fluid Ounces to Gallons conversion.\n");
                printf("Please enter the value in fluid ounces: ");
                float fluid_ounces_gallons;
                scanf("%f", &fluid_ounces_gallons);
                float gallons_result_fluid_ounces = fluid_ounces_gallons / 128;
                printf("%f fluid ounces is equal to %f gallons.\n", fluid_ounces_gallons, gallons_result_fluid_ounces);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 43:
                printf("You chose Fluid Ounces to Quarts conversion.\n");
                printf("Please enter the value in fluid ounces: ");
                float fluid_ounces_quarts;
                scanf("%f", &fluid_ounces_quarts);
                float quarts_result_fluid_ounces = fluid_ounces_quarts / 32;
                printf("%f fluid ounces is equal to %f quarts.\n", fluid_ounces_quarts, quarts_result_fluid_ounces);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 44:
                printf("You chose Fluid Ounces to Pints conversion.\n");
                printf("Please enter the value in fluid ounces: ");
                float fluid_ounces_pints;
                scanf("%f", &fluid_ounces_pints);
                float pints_result_fluid_ounces = fluid_ounces_pints / 16;
                printf("%f fluid ounces is equal to %f pints.\n", fluid_ounces_pints, pints_result_fluid_ounces);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 45:
                printf("You chose Fluid Ounces to Cups conversion.\n");
                printf("Please enter the value in fluid ounces: ");
                float fluid_ounces_cups;
                scanf("%f", &fluid_ounces_cups);
                float cups_result_fluid_ounces = fluid_ounces_cups / 8;
                printf("%f fluid ounces is equal to %f cups.\n", fluid_ounces_cups, cups_result_fluid_ounces);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 46:
                printf("You chose Fluid Ounces to Milliliters conversion.\n");
                printf("Please enter the value in fluid ounces: ");
                float fluid_ounces_milliliters;
                scanf("%f", &fluid_ounces_milliliters);
                float milliliters_result_fluid_ounces = fluid_ounces_milliliters * 29.5735;
                printf("%f fluid ounces is equal to %f milliliters.\n", fluid_ounces_milliliters, milliliters_result_fluid_ounces);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 47:
                printf("You chose Fluid Ounces to Tablespoons conversion.\n");
                printf("Please enter the value in fluid ounces: ");
                float fluid_ounces_tablespoons;
                scanf("%f", &fluid_ounces_tablespoons);
                float tablespoons_result_fluid_ounces = fluid_ounces_tablespoons * 2;
                printf("%f fluid ounces is equal to %f tablespoons.\n", fluid_ounces_tablespoons, tablespoons_result_fluid_ounces);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 48:
                printf("You chose Fluid Ounces to Teaspoons conversion.\n");
                printf("Please enter the value in fluid ounces: ");
                float fluid_ounces_teaspoons;
                scanf("%f", &fluid_ounces_teaspoons);
                float teaspoons_result_fluid_ounces = fluid_ounces_teaspoons * 6;
                printf("%f fluid ounces is equal to %f teaspoons.\n", fluid_ounces_teaspoons, teaspoons_result_fluid_ounces);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 49:
                printf("You chose Milliliters to Liters conversion.\n");
                printf("Please enter the value in milliliters: ");
                float milliliters_input;
                scanf("%f", &milliliters_input);
                float liters_result_milliliters = milliliters_input / 1000;
                printf("%f milliliters is equal to %f liters.\n", milliliters_input, liters_result_milliliters);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 50:
                printf("You chose Milliliters to Gallons conversion.\n");
                printf("Please enter the value in milliliters: ");
                float milliliters_gallons;
                scanf("%f", &milliliters_gallons);
                float gallons_result_milliliters = milliliters_gallons / 3785.41;
                printf("%f milliliters is equal to %f gallons.\n", milliliters_gallons, gallons_result_milliliters);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 51:
                printf("You chose Milliliters to Quarts conversion.\n");
                printf("Please enter the value in milliliters: ");
                float milliliters_quarts;
                scanf("%f", &milliliters_quarts);
                float quarts_result_milliliters = milliliters_quarts / 946.353;
                printf("%f milliliters is equal to %f quarts.\n", milliliters_quarts, quarts_result_milliliters);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 52:
                printf("You chose Milliliters to Pints conversion.\n");
                printf("Please enter the value in milliliters: ");
                float milliliters_pints;
                scanf("%f", &milliliters_pints);
                float pints_result_milliliters = milliliters_pints / 473.176;
                printf("%f milliliters is equal to %f pints.\n", milliliters_pints, pints_result_milliliters);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 53:
                printf("You chose Milliliters to Cups conversion.\n");
                printf("Please enter the value in milliliters: ");
                float milliliters_cups;
                scanf("%f", &milliliters_cups);
                float cups_result_milliliters = milliliters_cups / 236.588;
                printf("%f milliliters is equal to %f cups.\n", milliliters_cups, cups_result_milliliters);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 54:
                printf("You chose Milliliters to Fluid Ounces conversion.\n");
                printf("Please enter the value in milliliters: ");
                float milliliters_fluid_ounces;
                scanf("%f", &milliliters_fluid_ounces);
                float fluid_ounces_result_milliliters = milliliters_fluid_ounces / 29.5735;
                printf("%f milliliters is equal to %f fluid ounces.\n", milliliters_fluid_ounces, fluid_ounces_result_milliliters);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 55:
                printf("You chose Milliliters to Tablespoons conversion.\n");
                printf("Please enter the value in milliliters: ");
                float milliliters_tablespoons;
                scanf("%f", &milliliters_tablespoons);
                float tablespoons_result_milliliters = milliliters_tablespoons / 14.7868;
                printf("%f milliliters is equal to %f tablespoons.\n", milliliters_tablespoons, tablespoons_result_milliliters);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 56:
                printf("You chose Milliliters to Teaspoons conversion.\n");
                printf("Please enter the value in milliliters: ");
                float milliliters_teaspoons;
                scanf("%f", &milliliters_teaspoons);
                float teaspoons_result_milliliters = milliliters_teaspoons / 4.92892;
                printf("%f milliliters is equal to %f teaspoons.\n", milliliters_teaspoons, teaspoons_result_milliliters);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 57:
                printf("You chose Tablespoons to Liters conversion.\n");
                printf("Please enter the value in tablespoons: ");
                float tablespoons_input;
                scanf("%f", &tablespoons_input);
                float liters_result_tablespoons = tablespoons_input / 67.628;
                printf("%f tablespoons is equal to %f liters.\n", tablespoons_input, liters_result_tablespoons);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 58:
                printf("You chose Tablespoons to Gallons conversion.\n");
                printf("Please enter the value in tablespoons: ");
                float tablespoons_gallons;
                scanf("%f", &tablespoons_gallons);
                float gallons_result_tablespoons = tablespoons_gallons / 256;
                printf("%f tablespoons is equal to %f gallons.\n", tablespoons_gallons, gallons_result_tablespoons);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 59:
                printf("You chose Tablespoons to Quarts conversion.\n");
                printf("Please enter the value in tablespoons: ");
                float tablespoons_quarts;
                scanf("%f", &tablespoons_quarts);
                float quarts_result_tablespoons = tablespoons_quarts / 64;
                printf("%f tablespoons is equal to %f quarts.\n", tablespoons_quarts, quarts_result_tablespoons);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 60:
                printf("You chose Tablespoons to Pints conversion.\n");
                printf("Please enter the value in tablespoons: ");
                float tablespoons_pints;
                scanf("%f", &tablespoons_pints);
                float pints_result_tablespoons = tablespoons_pints / 32;
                printf("%f tablespoons is equal to %f pints.\n", tablespoons_pints, pints_result_tablespoons);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 61:
                printf("You chose Tablespoons to Cups conversion.\n");
                printf("Please enter the value in tablespoons: ");
                float tablespoons_cups;
                scanf("%f", &tablespoons_cups);
                float cups_result_tablespoons = tablespoons_cups / 16;
                printf("%f tablespoons is equal to %f cups.\n", tablespoons_cups, cups_result_tablespoons);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 62:
                printf("You chose Tablespoons to Fluid Ounces conversion.\n");
                printf("Please enter the value in tablespoons: ");
                float tablespoons_fluid_ounces;
                scanf("%f", &tablespoons_fluid_ounces);
                float fluid_ounces_result_tablespoons = tablespoons_fluid_ounces * 0.5;
                printf("%f tablespoons is equal to %f fluid ounces.\n", tablespoons_fluid_ounces, fluid_ounces_result_tablespoons);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 63:
                printf("You chose Tablespoons to Milliliters conversion.\n");
                printf("Please enter the value in tablespoons: ");
                float tablespoons_milliliters;
                scanf("%f", &tablespoons_milliliters);
                float milliliters_result_tablespoons = tablespoons_milliliters * 14.7868;
                printf("%f tablespoons is equal to %f milliliters.\n", tablespoons_milliliters, milliliters_result_tablespoons);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 64:
                printf("You chose Tablespoons to Teaspoons conversion.\n");
                printf("Please enter the value in tablespoons: ");
                float tablespoons_teaspoons;
                scanf("%f", &tablespoons_teaspoons);
                float teaspoons_result_tablespoons = tablespoons_teaspoons * 3;
                printf("%f tablespoons is equal to %f teaspoons.\n", tablespoons_teaspoons, teaspoons_result_tablespoons);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 65:
                printf("You chose Teaspoons to Liters conversion.\n");
                printf("Please enter the value in teaspoons: ");
                float teaspoons_input;
                scanf("%f", &teaspoons_input);
                float liters_result_teaspoons = teaspoons_input / 202.884;
                printf("%f teaspoons is equal to %f liters.\n", teaspoons_input, liters_result_teaspoons);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 66:
                printf("You chose Teaspoons to Gallons conversion.\n");
                printf("Please enter the value in teaspoons: ");
                float teaspoons_gallons;
                scanf("%f", &teaspoons_gallons);
                float gallons_result_teaspoons = teaspoons_gallons / 768;
                printf("%f teaspoons is equal to %f gallons.\n", teaspoons_gallons, gallons_result_teaspoons);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 67:
                printf("You chose Teaspoons to Quarts conversion.\n");
                printf("Please enter the value in teaspoons: ");
                float teaspoons_quarts;
                scanf("%f", &teaspoons_quarts);
                float quarts_result_teaspoons = teaspoons_quarts / 192;
                printf("%f teaspoons is equal to %f quarts.\n", teaspoons_quarts, quarts_result_teaspoons);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 68:
                printf("You chose Teaspoons to Pints conversion.\n");
                printf("Please enter the value in teaspoons: ");
                float teaspoons_pints;
                scanf("%f", &teaspoons_pints);
                float pints_result_teaspoons = teaspoons_pints / 96;
                printf("%f teaspoons is equal to %f pints.\n", teaspoons_pints, pints_result_teaspoons);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 69:
                printf("You chose Teaspoons to Cups conversion.\n");
                printf("Please enter the value in teaspoons: ");
                float teaspoons_cups;
                scanf("%f", &teaspoons_cups);
                float cups_result_teaspoons = teaspoons_cups / 48;
                printf("%f teaspoons is equal to %f cups.\n", teaspoons_cups, cups_result_teaspoons);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 70:
                printf("You chose Teaspoons to Fluid Ounces conversion.\n");
                printf("Please enter the value in teaspoons: ");
                float teaspoons_fluid_ounces;
                scanf("%f", &teaspoons_fluid_ounces);
                float fluid_ounces_result_teaspoons = teaspoons_fluid_ounces / 6;
                printf("%f teaspoons is equal to %f fluid ounces.\n", teaspoons_fluid_ounces, fluid_ounces_result_teaspoons);
                printf("Thank you for using Volume Converter!!!\n");
                break;
            case 71:
                printf("You chose Teaspoons to Milliliters conversion.\n");
                printf("Please enter the value in teaspoons: ");
                float teaspoons_milliliters;
                scanf("%f", &teaspoons_milliliters);
                float milliliters_result_teaspoons = teaspoons_milliliters * 4.92892;
                printf("%f teaspoons is equal to %f milliliters.\n", teaspoons_milliliters, milliliters_result_teaspoons);
                printf("Thank you for using Volume Converter!!!\n");
                break;
                case 72:
                printf("You chose Teaspoons to Tablespoons.\n");
                printf("Please enter the value in teaspoons: ");
                float teaspoons_tablespoons;
                scanf("%f", &teaspoons_tablespoons);
                float tablespoons_result_teaspoons = teaspoons_tablespoons / 3;
                printf("%f teaspoons is equal to %f tablespoons.\n", teaspoons_tablespoons, tablespoons_result_teaspoons);
                printf("Thank you for using Volume Converter!!!\n");
                break;
                case 73:
                printf("Exiting Volume Converter.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;  
        }
        break;
        case 6:
        printf("You have chosen Temperature Converter!!!\n");
    int temp_choice;
    float celsius, fahrenheit, kelvin;

    printf("Welcome to the Temperature Converter!\n");
    printf("This program allows you to convert between different units of temperature.\n");
    printf("Please choose which conversion you want:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Celsius to Kelvin\n");
    printf("3. Fahrenheit to Celsius\n");
    printf("4. Fahrenheit to Kelvin\n");
    printf("5. Kelvin to Celsius\n");
    printf("6. Kelvin to Fahrenheit\n");
    printf("7. Exit\n");

    printf("Enter your choice (1-7): ");
    scanf("%d", &temp_choice);

    switch (temp_choice) {
        case 1:
            printf("You chose Celsius to Fahrenheit conversion.\n");
            printf("Enter temperature in Celsius: ");
            scanf("%f", &celsius);
            fahrenheit = (celsius * 9 / 5) + 32;
            printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);
            break;

        case 2:
            printf("You chose Celsius to Kelvin conversion.\n");
            printf("Enter temperature in Celsius: ");
            scanf("%f", &celsius);
            kelvin = celsius + 273.15;
            printf("%.2f Celsius = %.2f Kelvin\n", celsius, kelvin);
            break;

        case 3:
            printf("You chose Fahrenheit to Celsius conversion.\n");
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &fahrenheit);
            celsius = (fahrenheit - 32) * 5 / 9;
            printf("%.2f Fahrenheit = %.2f Celsius\n", fahrenheit, celsius);
            break;

        case 4:
            printf("You chose Fahrenheit to Kelvin conversion.\n");
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &fahrenheit);
            kelvin = (fahrenheit - 32) * 5 / 9 + 273.15;
            printf("%.2f Fahrenheit = %.2f Kelvin\n", fahrenheit, kelvin);
            break;

        case 5:
            printf("You chose Kelvin to Celsius conversion.\n");
            printf("Enter temperature in Kelvin: ");
            scanf("%f", &kelvin);
            celsius = kelvin - 273.15;
            printf("%.2f Kelvin = %.2f Celsius\n", kelvin, celsius);
            break;

        case 6:
            printf("You chose Kelvin to Fahrenheit conversion.\n");
            printf("Enter temperature in Kelvin: ");
            scanf("%f", &kelvin);
            fahrenheit = (kelvin - 273.15) * 9 / 5 + 32;
            printf("%.2f Kelvin = %.2f Fahrenheit\n", kelvin, fahrenheit);
            break;

        case 7:
            printf("Exiting Temperature Converter.\n");
            return 0;

        default:
            printf("Invalid choice. Please enter a number between 1 and 7.\n");
            break;
    printf("Thank you for using Temperature Converter!\n");
    }
       
        break;
        case 7:
        printf("You have chosen Time Converter!!!\n");
            float seconds, minutes, seconds_input, hours_result;
    float seconds_days, days_result, seconds_weeks, weeks_result;
    float seconds_years, years_result, minutes_input, seconds_result;
    float minutes_hours, hours_result_minutes, minutes_days, days_result_minutes;
    float minutes_weeks, weeks_result_minutes, minutes_years, years_result_minutes;
    float hours_input, seconds_result_hours, hours_minutes, minutes_result_hours;
    float hours_days, days_result_hours, hours_weeks, weeks_result_hours;
    float hours_years, years_result_hours, days_input, seconds_result_days;
    float days_minutes, minutes_result_days, days_hours, hours_result_days;
    float days_weeks, weeks_result_days, days_years, years_result_days;
    float weeks_input, seconds_result_weeks, weeks_minutes, minutes_result_weeks;
    float weeks_hours, hours_result_weeks, weeks_days, days_result_weeks;
    float weeks_years, years_result_weeks, years_input, seconds_result_years;
    float years_minutes, minutes_result_years, years_hours, hours_result_years;
    float years_days, days_result_years, years_weeks, weeks_result_years;

    printf("Welcome to the TIme Converter!\n");
    printf("This program allows you to convert between different units of tIme.\n");
    printf("Please choose which conversion you want:\n");
    printf("1. Seconds to Minutes\n");
    printf("2. Seconds to Hours\n");
    printf("3. Seconds to Days\n");
    printf("4. Seconds to Weeks\n");
    printf("5. Seconds to Years\n");
    printf("6. Minutes to Seconds\n");
    printf("7. Minutes to Hours\n");
    printf("8. Minutes to Days\n");
    printf("9. Minutes to Weeks\n");
    printf("10. Minutes to Years\n");
    printf("11. Hours to Seconds\n");
    printf("12. Hours to Minutes\n");
    printf("13. Hours to Days\n");
    printf("14. Hours to Weeks\n");
    printf("15. Hours to Years\n");
    printf("16. Days to Seconds\n");
    printf("17. Days to Minutes\n");
    printf("18. Days to Hours\n");
    printf("19. Days to Weeks\n");
    printf("20. Days to Years\n");
    printf("21. Weeks to Seconds\n");
    printf("22. Weeks to Minutes\n");
    printf("23. Weeks to Hours\n");
    printf("24. Weeks to Days\n");
    printf("25. Weeks to Years\n");
    printf("26. Years to Seconds\n");
    printf("27. Years to Minutes\n");
    printf("28. Years to Hours\n");
    printf("29. Years to Days\n");
    printf("30. Years to Weeks\n");
    printf("31. Exit\n");
    printf("Enter your choice (1-31): ");
        int time_choice;
        scanf("%d", &time_choice);
        switch (time_choice)
        {
            case 1:
                printf("You chose Seconds to Minutes conversion.\n");
                printf("Please enter the value in seconds: ");
                float seconds;
                scanf("%f", &seconds);
                float minutes = seconds / 60;
                printf("%f seconds is equal to %f minutes.\n", seconds, minutes);
                printf("Thank you for using Time Converter!!!\n");
                break;
            case 2:
                printf("You chose Seconds to Hours conversion.\n");
                printf("Please enter the value in seconds: ");
                float seconds_input;
                scanf("%f", &seconds_input);
                float hours_result = seconds_input / 3600;
                printf("%f seconds is equal to %f hours.\n", seconds_input, hours_result);
                printf("Thank you for using Time Converter!!!\n");
                break;
            case 3:
                printf("You chose Seconds to Days conversion.\n");
                printf("Please enter the value in seconds: ");
                float seconds_days;
                scanf("%f", &seconds_days);
                float days_result = seconds_days / 86400;
                printf("%f seconds is equal to %f days.\n", seconds_days, days_result);
                printf("Thank you for using Time Converter!!!\n");
                break;
            case 4:
                printf("You chose Seconds to Weeks conversion.\n");
                printf("Please enter the value in seconds: ");
                float seconds_weeks;
                scanf("%f", &seconds_weeks);
                float weeks_result = seconds_weeks / 604800;
                printf("%f seconds is equal to %f weeks.\n", seconds_weeks, weeks_result);
                printf("Thank you for using Time Converter!!!\n");
                break;
            case 5:
                printf("You chose Seconds to Years conversion.\n");
                printf("Please enter the value in seconds: ");
                float seconds_years;
                scanf("%f", &seconds_years);
                float years_result = seconds_years / 31536000;
                printf("%f seconds is equal to %f years.\n", seconds_years, years_result);
                printf("Thank you for using Time Converter!!!\n");
                break;
                case 6:
                printf("You chose Minutes to Seconds conversion.\n");
                printf("Please enter the value in minutes: ");
                float minutes_input;
                scanf("%f", &minutes_input);
                float seconds_result = minutes_input * 60;
                printf("%f minutes is equal to %f seconds.\n", minutes_input, seconds_result);
                printf("Thank you for using Time Converter!!!\n");
                break;
                case 7:
                printf("You chose Minutes to Hours conversion.\n");
                printf("Please enter the value in minutes: ");
                float minutes_hours;
                scanf("%f", &minutes_hours);
                float hours_result_minutes = minutes_hours / 60;
                printf("%f minutes is equal to %f hours.\n", minutes_hours, hours_result_minutes);
                printf("Thank you for using Time Converter!!!\n");
                break;
                case 8:
                printf("You chose Minutes to Days conversion.\n");
                printf("Please enter the value in minutes: ");
                float minutes_days;
                scanf("%f", &minutes_days);
                float days_result_minutes = minutes_days / 1440;
                printf("%f minutes is equal to %f days.\n", minutes_days, days_result_minutes);
                printf("Thank you for using Time Converter!!!\n");
                break;
                case 9:
                printf("You chose Minutes to Weeks conversion.\n");
                printf("Please enter the value in minutes: ");
                float minutes_weeks;
                scanf("%f", &minutes_weeks);
                float weeks_result_minutes = minutes_weeks / 10080;
                printf("%f minutes is equal to %f weeks.\n", minutes_weeks, weeks_result_minutes);
                printf("Thank you for using Time Converter!!!\n");
                break;
                case 10:
                printf("You chose Minutes to Years conversion.\n");
                printf("Please enter the value in minutes: ");
                float minutes_years;
                scanf("%f", &minutes_years);
                float years_result_minutes = minutes_years / 525600;
                printf("%f minutes is equal to %f years.\n", minutes_years, years_result_minutes);
                printf("Thank you for using Time Converter!!!\n");
                break;
                case 11:
                printf("You chose Hours to Seconds conversion.\n");
                printf("Please enter the value in hours: ");
                float hours_input;
                scanf("%f", &hours_input);
                float seconds_result_hours = hours_input * 3600;
                printf("%f hours is equal to %f seconds.\n", hours_input, seconds_result_hours);
                printf("Thank you for using Time Converter!!!\n");
                break;
                case 12:
                printf("You chose Hours to Minutes conversion.\n");
                printf("Please enter the value in hours: ");
                float hours_minutes;
                scanf("%f", &hours_minutes);
                float minutes_result_hours = hours_minutes * 60;
                printf("%f hours is equal to %f minutes.\n", hours_minutes, minutes_result_hours);
                printf("Thank you for using Time Converter!!!\n");
                break;
                case 13:
                printf("You chose Hours to Days conversion.\n");
                printf("Please enter the value in hours: ");
                float hours_days;
                scanf("%f", &hours_days);
                float days_result_hours = hours_days / 24;
                printf("%f hours is equal to %f days.\n", hours_days, days_result_hours);
                printf("Thank you for using Time Converter!!!\n");
                break;
                case 14:
                printf("You chose Hours to Weeks conversion.\n");
                printf("Please enter the value in hours: ");
                float hours_weeks;
                scanf("%f", &hours_weeks);
                float weeks_result_hours = hours_weeks / 168;
                printf("%f hours is equal to %f weeks.\n", hours_weeks, weeks_result_hours);
                printf("Thank you for using Time Converter!!!\n");
                break;
                case 15:
                printf("You chose Hours to Years conversion.\n");
                printf("Please enter the value in hours: ");
                float hours_years;
                scanf("%f", &hours_years);
                float years_result_hours = hours_years / 8760;
                printf("%f hours is equal to %f years.\n", hours_years, years_result_hours);
                printf("Thank you for using Time Converter!!!\n");
                break;
                case 16:
                printf("You chose Days to Seconds conversion.\n");
                printf("Please enter the value in days: ");
                float days_input;
                scanf("%f", &days_input);
                float seconds_result_days = days_input * 86400;
                printf("%f days is equal to %f seconds.\n", days_input, seconds_result_days);
                printf("Thank you for using Time Converter!!!\n");
                break;
                case 17:
                printf("You chose Days to Minutes conversion.\n");
                printf("Please enter the value in days: ");
                float days_minutes;
                scanf("%f", &days_minutes);
                float minutes_result_days = days_minutes * 1440;
                printf("%f days is equal to %f minutes.\n", days_minutes, minutes_result_days);
                printf("Thank you for using Time Converter!!!\n");
                break;
                case 18:
                printf("You chose Days to Hours conversion.\n");
                printf("Please enter the value in days: ");
                float days_hours;
                scanf("%f", &days_hours);
                float hours_result_days = days_hours * 24;
                printf("%f days is equal to %f hours.\n", days_hours, hours_result_days);
                printf("Thank you for using Time Converter!!!\n");
                break;
                case 19:
                printf("You chose Days to Weeks conversion.\n");
                printf("Please enter the value in days: ");
                float days_weeks;
                scanf("%f", &days_weeks);
                float weeks_result_days = days_weeks / 7;
                printf("%f days is equal to %f weeks.\n", days_weeks, weeks_result_days);
                printf("Thank you for using Time Converter!!!\n");
                break;
                case 20:
                printf("You chose Days to Years conversion.\n");
                printf("Please enter the value in days: ");
                float days_years;
                scanf("%f", &days_years);
                float years_result_days = days_years / 365;
                printf("%f days is equal to %f years.\n", days_years, years_result_days);
                printf("Thank you for using Time Converter!!!\n");
                break;
                case 21:
                printf("You chose Weeks to Seconds conversion.\n");
                printf("Please enter the value in weeks: ");
                float weeks_input;
                scanf("%f", &weeks_input);
                float seconds_result_weeks = weeks_input * 604800;
                printf("%f weeks is equal to %f seconds.\n", weeks_input, seconds_result_weeks);
                printf("Thank you for using Time Converter!!!\n");
                break;
                case 22:
                printf("You chose Weeks to Minutes conversion.\n");
                printf("Please enter the value in weeks: ");
                float weeks_minutes;
                scanf("%f", &weeks_minutes);
                float minutes_result_weeks = weeks_minutes * 10080;
                printf("%f weeks is equal to %f minutes.\n", weeks_minutes, minutes_result_weeks);
                printf("Thank you for using Time Converter!!!\n");
                break;
                case 23:
                printf("You chose Weeks to Hours conversion.\n");
                printf("Please enter the value in weeks: ");
                float weeks_hours;
                scanf("%f", &weeks_hours);
                float hours_result_weeks = weeks_hours * 168;
                printf("%f weeks is equal to %f hours.\n", weeks_hours, hours_result_weeks);
                printf("Thank you for using Time Converter!!!\n");
                break;
                case 24:
                printf("You chose Weeks to Days conversion.\n");
                printf("Please enter the value in weeks: ");
                float weeks_days;
                scanf("%f", &weeks_days);
                float days_result_weeks = weeks_days * 7;
                printf("%f weeks is equal to %f days.\n", weeks_days, days_result_weeks);
                printf("Thank you for using Time Converter!!!\n");
                break;
                case 25:
                printf("You chose Weeks to Years conversion.\n");
                printf("Please enter the value in weeks: ");
                float weeks_years;
                scanf("%f", &weeks_years);
                float years_result_weeks = weeks_years / 52.1775;
                printf("%f weeks is equal to %f years.\n", weeks_years, years_result_weeks);
                printf("Thank you for using Time Converter!!!\n");
                break;
                case 26:
                printf("You chose Years to Seconds conversion.\n");
                printf("Please enter the value in years: ");
                float years_input;
                scanf("%f", &years_input);
                float seconds_result_years = years_input * 31536000;
                printf("%f years is equal to %f seconds.\n", years_input, seconds_result_years);
                printf("Thank you for using Time Converter!!!\n");
                break;
                case 27:
                printf("You chose Years to Minutes conversion.\n");
                printf("Please enter the value in years: ");
                float years_minutes;
                scanf("%f", &years_minutes);
                float minutes_result_years = years_minutes * 525600;
                printf("%f years is equal to %f minutes.\n", years_minutes, minutes_result_years);
                printf("Thank you for using Time Converter!!!\n");
                break;
                case 28:
                printf("You chose Years to Hours conversion.\n");
                printf("Please enter the value in years: ");
                float years_hours;
                scanf("%f", &years_hours);
                float hours_result_years = years_hours * 8760;
                printf("%f years is equal to %f hours.\n", years_hours, hours_result_years);
                printf("Thank you for using Time Converter!!!\n");
                break;
                case 29:
                printf("You chose Years to Days conversion.\n");
                printf("Please enter the value in years: ");
                float years_days;
                scanf("%f", &years_days);
                float days_result_years = years_days * 365;
                printf("%f years is equal to %f days.\n", years_days, days_result_years);
                printf("Thank you for using Time Converter!!!\n");
                break;
                case 30:
                printf("You chose Years to Weeks conversion.\n");
                printf("Please enter the value in years: ");
                float years_weeks;
                scanf("%f", &years_weeks);
                float weeks_result_years = years_weeks * 52.1775;
                printf("%f years is equal to %f weeks.\n", years_weeks, weeks_result_years);
                printf("Thank you for using Time Converter!!!\n");
                break;
                case 31:
                printf("Exiting Time Converter.\n");

                default:
                printf("Invalid choice. Please try again.\n");
                break;
        }

        break;
        default:
        printf("Invalid choice. Please try again.\n");
        break;


    }
    
}