#include <stdio.h>

int main () {
	int income;
	float tax_rate, tax;

	printf("Enter your income: ");
	scanf("%d", &income);

	if (income <= 10000)
		tax_rate = 0;
	else if (income <= 30000)
		tax_rate = 0.1;
	else if (income <= 60000)
		tax_rate = 0.2;
	else
		tax_rate = 0.3;
	
	tax = income * tax_rate;

	printf("Tax = %.2f\n", tax);
	printf("Tax Rate Applied: %.0f%%\n", tax_rate * 100);

	return 0;
}
