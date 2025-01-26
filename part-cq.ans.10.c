#include <stdio.h>

int main() {
    int calories[4][7], weeklyTotal[4] = {0}, maxCalories = 0, maxIndividual = 0;

    // Input daily calorie intake
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 7; j++) {
            scanf("%d", &calories[i][j]);
            weeklyTotal[i] += calories[i][j];
        }
        if (weeklyTotal[i] > maxCalories) {
            maxCalories = weeklyTotal[i];
            maxIndividual = i;
        }
    }

    // Output the result
    printf("Individual %d consumed the most: %d calories\n", maxIndividual + 1, maxCalories);

    return 0;
}
