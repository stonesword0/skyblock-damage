#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int weaponDMG;
    int strength;
    int sharpnessLevel;
    if(sharpnessLevel > 6) {
        printf("\nInvalid Sharpness Level. Maximum is 6. Please try again.\n");
        return 0;
    }
    int smiteLevel;
    if(smiteLevel > 7) {
        printf("\nInvalid Smite Level. Maximum is 7. Please try again.\n");
        return 0;
    }
    int baneOfArthropodsLevel;
    if(baneOfArthropodsLevel > 6) {
        printf("\nInvalid Bane of Arthropods Level. Maximum is 6. Please try again.\n");
        return 0;
    }
    int giantKillerLevel;
    if(giantKillerLevel > 6) {
        printf("\nInvalid Giant Killer Level. Maximum is 6. Please try again.\n");
        return 0;
    }
    int enderSlayerLevel;
    if(enderSlayerLevel > 5) {
        printf("\nInvalid Ender Slayer Level. Maximum is 5. Please try again.\n");
        return 0;
    }
    int executeLevel;
    int cubismLevel;
    int firstStrikeLevel;
    int impalingLevel;
    int combatLevel;
    int finalDamage;
    printf("\nEnter your Sword's Sharpness Level:\n");\
    scanf("%i", &sharpnessLevel);
    return 0;
}
