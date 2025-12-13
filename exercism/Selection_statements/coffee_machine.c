#include <stdio.h>

/* start
 * Ask user for drink number (1-4) (use switch) or default "Invalid choice" and return
 * if number valide ask user to enter amount
 * if amount exatly equal drink price print "Payment accepted. Preparing your drink..."
 * else if amount is higher (calculate and print change amount)
 * else if amount is less (calculate and print "Not enough money. You need" X "MAD more.")
*/

int main () {

        int choice;
        float price, amount, remainder;
	char *drink;
	int valide = 1;

	printf("Enter drink: ");
        scanf("%d", &choice);

	switch (choice) {
		case 1:
			price = 10; drink = "Espresso";
			break;
		case 2:
                        price = 15; drink = "Cappuccino";
			break;
		case 3:
                        price = 17; drink = "Latte";
			break;
		case 4:
                        price = 7; drink = "Tea";
			break;
	
		default:
			printf("Invalid choice.\n");
			return 1;
	}

	printf("Enter money: ");
        scanf("%f", &amount);

	if (amount == price)
	{
		printf("Payment accepted.\n");
	}
	else if (amount > price) {

		remainder = amount - price;
                printf("Here is your change: %.1f MAD\n", remainder);

	} else if (amount < price) {

                remainder = price - amount;
                printf("Not enough money. You need %.1f MAD more.\n", remainder);
		valide = 0;
	}

	if (valide)
		printf("Preparing %s...\n", drink);
	
	return 0;
}
