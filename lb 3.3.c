#include <stdio.h>
#include <math.h>

#define PI 3.1416
#define WHEEL_RADIUS 35
#define KMH_TO_MPH 0.621371

int main() {
    int rotations;
    float distance, speed;

    printf("Enter the number of wheel rotations: ");
    scanf("%d", &rotations);

    distance = 2 * PI * WHEEL_RADIUS * rotations;
    //speed = distance / 1000 / (60 * 60);
    speed = (distance*3600);

    printf("Distance traveled in meters: %.2f\n", distance/100);
    printf("Distance traveled in kilometers: %.2f\n", distance / 1000);
    printf("Distance traveled in miles: %.2f\n", distance / 1609.34);
    printf("Speed in kilometers per hour: %.2f\n", speed / 1000);
    printf("Speed in miles per hour: %.2f\n", speed * KMH_TO_MPH);

    return 0;
}
