#include <stdio.h>

int main() {
    double weightKg, heightMeters, bmi;
    
    printf("Enter your weight in kilograms: ");
    scanf("%lf", &weightKg);
    
    printf("Enter your height in meters: ");
    scanf("%lf", &heightMeters);
    
    bmi = weightKg / (heightMeters * heightMeters);
    
	printf("Answer: %lf", bmi);
    printf("Answer: %lf", bmi);
    printf("Answer: %lf", weightKg);
    
    return 0;
}
