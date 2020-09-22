#include <stdio.h>

int addition()// Finding the sum
{
	printf("Finding the sum");
	float num1, num2;
	printf("\nEnter first number: ");
	scanf("%f", &num1);

	printf("\nEnter second number: ");
	scanf("%f", &num2);

	float sum = num1 + num2;
	printf("\nThe sum is = %f\n", sum);

	return 0;
}

int subtraction()// Finding the difference
{
	printf("\nFinding the difference");
	float num1, num2;
	printf("\nEnter first number: ");
	scanf("%f", &num1);

	printf("\nEnter second number: ");
	scanf("%f", &num2);

	float difference = num1 - num2;
	printf("\nThe difference is = %f\n", difference);

	return 0;
}

int multiplicaion()// Finding the product
{
	printf("\nFinding the product");
	float num1, num2;
	printf("\nEnter first number: ");
	scanf("%f", &num1);

	printf("\nEnter second number: ");
	scanf("%f", &num2);
	
	float product = num1 * num2;
	printf("\nThe product is = %f\n", product);

	return 0;
}

int division()// Finding the quotient
{
	printf("\nFinding the quotient");
	float num1, num2;
	printf("\nEnter first number: ");
	scanf("%f", &num1);

	printf("\nEnter second number: ");
	scanf("%f", &num2);

	float quotient = num1 / num2;
	printf("\nThe quotient is = %f\n", quotient);

	return 0;
}
int modulus()
{
	printf("\nFinding the modulus");
	int num1, num2;
	printf("\nEnter first number: ");
	scanf("%d", &num1);

	printf("\nEnter second number: ");
	scanf("%d", &num2);

	// Finding the modulus
	int modulus = num1 % num2;
	printf("\nThe modulus is = %d\n", modulus);

	return 0;
}

int main()
{
	addition();
	subtraction();
	multiplicaion();
	division();
	modulus();
	return 0;
}
