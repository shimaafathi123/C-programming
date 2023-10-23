#include <stdio.h>

int calculateHeatingTime(int temperature) {
    if (temperature >= 0 && temperature <= 30) {
        return 7;
    } else if (temperature > 30 && temperature <= 60) {
        return 5;
    } else if (temperature > 60 && temperature <= 90) {
        return 3;
    } else if (temperature > 90 && temperature <= 100) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int temperature;
    printf("Enter the water temperature: ");
    scanf("%d", &temperature);

    int heatingTime = calculateHeatingTime(temperature);

    if (heatingTime == 0) {
        printf("Invalid temperature input.\n");
    } else {
        printf("Required heating time: %d minutes\n", heatingTime);
    }

    return 0;
}
