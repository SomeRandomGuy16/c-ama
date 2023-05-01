#include <stdio.h>

int main(void)
{
    float totalLoan, annualInterest, monthlyInterest, monthlyPayment, firstMonth, secondMonth, thirdMonth;

    printf("Enter your total loan amount: ");
    scanf("%f", &totalLoan);
    printf("Enter your interest rate: ");
    scanf("%f", &annualInterest);
    printf("Enter your monthly payment: ");
    scanf("%f", &monthlyPayment);


    //not sure what the book is asking for in terms of interest rate so I'm just putting down whatever I think it means, if I get the formula wrong then whatever, as long as the code itself is fine then thats alright
    monthlyInterest = ((annualInterest / 100) / 12) + 1;

    firstMonth = (totalLoan - monthlyPayment) * monthlyInterest;

    secondMonth = (firstMonth - monthlyPayment) * monthlyInterest;

    thirdMonth = (secondMonth - monthlyPayment) * monthlyInterest;

    printf("Balance remaining after first month: £%.2f\nBalance remaining after second month: £%.2f\nBalance remaining after third month: £%.2f\n", firstMonth, secondMonth, thirdMonth);

    return 0;
}