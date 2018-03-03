#include <stdio.h>

main()	{

	int calcMode;
	float weight;
	float height;
	float bmi; 
	
	printf("press 0 for pounds or 1 for kilograms: ");
	scanf("%d", &calcMode);
	
	printf("Enter your weight: ");
	scanf("%f", &weight);
	printf("Enter your height: ");
	scanf("%f", &height);
	
	bmi = (weight * 703)/(height*height);
	
	printf("\n");
	printf("your BMI is: %.2f\n", bmi);
	
	printf("BMI VALUES\n");
	printf("Underweigt: \tless than 18.5\n");
	printf("Normal: \tbetween 18.5 and 24.9\n");
	printf("Overweight: \tbetween 15 and 29.9\n");
	printf("Obese: \t30 or greater\n\n");
}
