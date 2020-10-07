#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/cdefs.h>

int main() {
    int weaponDMG;
    int strength;
    int critDMG;
    int sharpnessLevel;
    int smiteLevel;
    int baneOfArthropodsLevel;
    int giantKillerLevel;
    int enderSlayerLevel;
    int executeLevel;
    int cubismLevel;
    int firstStrikeLevel;
    int impalingLevel;
    int combatLevel;
    int finalDamage;


    printf("\nEnter your Sword's Weapon Damage:\n");\
    scanf("%i", &weaponDMG);
    printf("\nEnter your Strength:\n");\
    scanf("%i", &strength);
    printf("\nEnter your Crit Damage Percent:\n");\
    scanf("%i", &critDMG);
    printf("\nEnter your Sword's Sharpness Level:\n");\
    scanf("%i", &sharpnessLevel);
    printf("\nEnter your Sword's Smite Level:\n");\
    scanf("%i", &smiteLevel);
    printf("\nEnter your Sword's Bane Of Arthropods Level:\n");\
    scanf("%i", &baneOfArthropodsLevel);
    printf("\nEnter your Sword's Giant Killer Level:\n");\
    scanf("%i", &giantKillerLevel);
    printf("\nEnter your Sword's Ender Slayer Level:\n");\
    scanf("%i", &enderSlayerLevel);
    printf("\nEnter your Sword's Execute Level:\n");\
    scanf("%i", &executeLevel);
    printf("\nEnter your Sword's Cubism Level:\n");\
    scanf("%i", &cubismLevel);
    printf("\nEnter your Sword's First Strike Level:\n");\
    scanf("%i", &firstStrikeLevel);
    printf("\nEnter your Sword's Impaling Level:\n");\
    scanf("%i", &impalingLevel);
    printf("\nEnter your Combat Level:\n");\
    scanf("%i", &combatLevel);

    if(sharpnessLevel > 6) {
        printf("\nInvalid Sharpness Level. Maximum is 6. Please try again.\n");
        return 0;
    }
    if(smiteLevel > 7) {
        printf("\nInvalid Smite Level. Maximum is 7. Please try again.\n");
        return 0;
    }
    if(baneOfArthropodsLevel > 6) {
        printf("\nInvalid Bane of Arthropods Level. Maximum is 6. Please try again.\n");
        return 0;
    }
    if(giantKillerLevel > 6) {
        printf("\nInvalid Giant Killer Level. Maximum is 6. Please try again.\n");
        return 0;
    }
    if(enderSlayerLevel > 5) {
        printf("\nInvalid Ender Slayer Level. Maximum is 5. Please try again.\n");
        return 0;
    }
    if(executeLevel > 5) {
        printf("\nInvalid Execute Level. Maximum is 5. Please try again.\n");
        return 0;
    }
    if(cubismLevel > 5) {
        printf("\nInvalid Cubism Level. Maximum is 5. Please try again.\n");
        return 0;
    }
    if(firstStrikeLevel > 4) {
        printf("\nInvalid First Strike Level. Maximum is 4. Please try again.\n");
        return 0;
    }
    if(impalingLevel > 3) {
        printf("\nInvalid Impaling Level. Maximum is 5. Please try again.\n");
        return 0;
    }

    /* Base Damage Calculation */
    finalDamage = (5 + weaponDMG + (strength / 5)) * (1 + (strength / 100));

    /* Enchants Multipier(s) Calculation */
    if (sharpnessLevel > 0) {
        int multiplier;
        multiplier = sharpnessLevel * 0.05;
        finalDamage = finalDamage * multiplier;
    }

    printf("%d", finalDamage);

    return 0;
}
