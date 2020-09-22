#include <stdio.h>

int main()
{
	printf("\nChecking if the input is vowel or not");
	char alphabet;
	printf("\nEnter an alphabet: ");
	scanf("%c", &alphabet);

	if(alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u' || alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U')  
	{
		printf("\n %c is a vowel.\n", alphabet);
	}
    else 
    {
    	printf("\n %c is a consonant.\n", alphabet);
	}
    return 0;
}
