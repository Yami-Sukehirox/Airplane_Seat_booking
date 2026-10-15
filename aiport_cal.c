#include <stdio.h>

int main () {
	
	char again;
	char travelClass;
	float baggageWeight;
	float baseFare;
	float excessBaggage = 0;
	float totalFare;
	float allowance;
	
	do {
	
	printf("Enter travel class (E-conomy / B-usiness): ");
	scanf(" %c", &travelClass);
		

	switch (travelClass) {
		case 'E':
		case 'e':
			baseFare = 2500.00;
			allowance = 20;
			break;
	
		case 'B':
		case 'b':
			baseFare = 6500.00;
			allowance = 40;
			break;
			
		default:
			printf("Invalid\n");
			return 0;		
	}
	
	do {
	printf ("Enter the Baggage Weight (kg): ");
	scanf ("%f", &baggageWeight);
	
	if (baggageWeight < 0 ) {
		printf("Invalid baggage Weight!\n");
	}
	
	} while (baggageWeight < 0);
	
	
	if (baggageWeight > allowance) {
		excessBaggage = (baggageWeight - allowance) * 150;
		
	}
	else {
		excessBaggage = 0;
	}
	
	totalFare = baseFare + excessBaggage;
	
	
	
	printf ("\n---------BOARDING SUMMARY----------\n");
	
	if (travelClass == 'E' || travelClass == 'e') {
		printf ("Travel Class: Economy\n");
	}
	else {
		printf("Travel Class: Business\n");
	}
	printf("Base Fare: PHP %.2f\n", baseFare);
	printf("Baggage Weight: %.1f kg (Allowance: %.0f kg)\n", baggageWeight, allowance);
	printf("Excess Baggage Fee: PHP %.2f\n", excessBaggage);
	printf("Total Fare: PHP %.2f\n", totalFare);
	
	printf("----------------------------------------\n");
	
	printf ("Do you want to calculate another passenger? (Y/N): ");
	scanf(" %c", &again);
	
	} while (again == 'Y' || again == 'y');
	
	return 0;
}
