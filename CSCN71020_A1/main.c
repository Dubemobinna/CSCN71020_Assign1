#include <stdio.h>

void printWelcomeMenu();
void printOptions();
void add();
void subtract(); //subtract the second number from the first number


void main() {

	printWelcomeMenu();

	printOptions();

	int inputNum;

	printf("Enter operation number: ");
	scanf_s("%1o", &inputNum);

	switch (inputNum)
	{
	case 1:
		add();
	case 2:
		//option 2: subtract the two numbers the user enters
		subtract();
		break;
	}

}

void printWelcomeMenu() {
	printf(" **********************\n");
	printf("**   Welcome to the   **\n");
	printf("**   BCS Calculator   **\n");
	printf(" **********************\n");
}

void printOptions() {
	printf("1. Add\n");
	printf("2. Subtract\n");
}

void add() {
	double num1, num2, result;
	printf("Enter the first value:");
	scanf_s("%lf", &num1);
	printf("Enter the second value:");
	scanf_s("%lf", &num2);
	result = num1 + num2;
	printf("%lf + %lf = %lf\n", num1, num2, result);
}
/*
* subtract()
* Asks the user for two numbers, subtracts the second
* number from the first, and prints the result.
* Fix: replaces the old version that only printed "Wrong function".
*/
void subtract() {
	double num1, num2, result; // the two numbers entered and the answer

	printf("Enter the first number: ");
	scanf_s("%lf", &num1); // read the first value

	printf("Enter the second number: ");
	scanf_s("%lf", &num2); // read the second value

	result = num1 - num2; // subtract the second number from the first
	printf("%lf - %lf = %lf\n", num1, num2, result);
	// show the calculation
}
