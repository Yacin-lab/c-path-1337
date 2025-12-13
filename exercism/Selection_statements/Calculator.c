#include <stdio.h>

float divide(float n1,float n2);
float multiply(float n1,float n2);
float subtract(float n1,float n2);
float add(float n1,float n2);

int main () {
	int valide = 1;
	char symbol;
	float num1, num2, result;

	printf("Calculator (format: number1 operator number2)\nEnter: ");
	scanf("%f %c %f", &num1, &symbol, &num2);
	
	
	switch (symbol) {
		case '/':
			if(num2 != 0)
				result = divide(num1, num2);
			else {
				printf("Error: division by zero is not allowed.\n");
				valide = 0; // error
			}

			break;
		case '*':
                        result = multiply(num1, num2);
			break;
		case '-':
                        result = subtract(num1, num2);
			break;
		case '+':
                        result = add(num1, num2);
			break;
		default:
			printf("Error: invalid operator '%c'\n", symbol);
			return 1; // error
	}

	if (valide)
		printf("%.2f %c %.2f = %.2f\n", num1, symbol, num2, result);

	return 0; // done

}

float divide(float n1, float n2) {
	return n1 / n2;
}

float multiply(float n1,float n2) {
	return n1 * n2;
}

float subtract(float n1,float n2) {
	return n1 - n2;
}

float add(float n1,float n2) {
	return n1 + n2;
}
