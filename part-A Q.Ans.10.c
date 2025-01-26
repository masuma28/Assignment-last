#include <stdio.h>

int main() {
    int n, i, mostExpensiveIndex = 0;
    printf("Enter the number of products: ");
    scanf("%d", &n);

    float price[n], weight[n], pricePerUnit[n];
    for (i = 0; i < n; i++) {
        printf("Enter price and weight for product %d: ", i + 1);
        scanf("%f %f", &price[i], &weight[i]);
        pricePerUnit[i] = price[i] / weight[i];
        if (pricePerUnit[i] > pricePerUnit[mostExpensiveIndex]) {
            mostExpensiveIndex = i;
        }
    }

    printf("The price per unit of the most expensive product is: %.2f\n", pricePerUnit[mostExpensiveIndex]);
    return 0;
}
