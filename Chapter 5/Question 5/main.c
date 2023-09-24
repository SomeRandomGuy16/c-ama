#include <stdio.h>

int main(void) {
    
	float income;
	float tax_due;
	float added_tax;

	printf("Please enter your annual income: ");
	scanf("%f", &income);
	
	if (income < 750.0f) {
		tax_due = income * 0.01f;
	} else if (income >= 750.0f && income < 2250.0f) {
		added_tax = (income - 750.0f) * 0.02f;
		tax_due = 7.5f + added_tax;
	} else if (income >= 2250.0f && income < 3750.0f) {
		added_tax = (income - 2250.0f) * 0.03f;
		tax_due = 37.5f + added_tax;
	} else if (income >= 3750.0f && income < 5250.0f) {
		added_tax = (income - 3750.0f) * 0.04f;
		tax_due = 82.5f + added_tax;
	} else if (income >= 5250.0f && income < 7000.0f) {
		added_tax = (income - 7000.0f) * 0.05f;
		tax_due = 142.5f + added_tax;
	} else {
		added_tax = (income - 7000.0f);
		tax_due = 230.0f + added_tax * 0.06f;
	}

	printf("Your tax due is %.2f\n", tax_due);

    return 0;
}
