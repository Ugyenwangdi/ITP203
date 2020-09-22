#include <stdio.h>

int main()
{
	printf("Your Mathematics result\n");
	float CA, SE, aggregate;
	printf("Enter your CA: ");
	scanf("%f", &CA);
	printf("\nEnter SE mark: ");
	scanf("%f", &SE);

	aggregate = (CA + SE)/ 2;

	if (CA >= 20 || SE >=20)
	{
		if(aggregate >= 50)
		{
			printf("\nYou have passed in Mathematics and your final mark is: %f\n", aggregate);
		}
		else
		{
			printf("\nYou have failed in Mathematics and your final mark is: %f\n", aggregate);
		}
	}
	else
	{
		printf("You failed\n");
	}
}
