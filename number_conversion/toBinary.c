#include <stdio.h>

/**
  * toBinary - converts decimal to binary
  * @decimal: the decimal value to be converted
  * Return: nothing is returned
  */
void toBinary(int decimal)
{
	int remainders[32];
	int index = 0, bit;

	if (decimal == 0)
	{
		printf("\t0 in binary is 0\n");
		return;
	}
	while (decimal != 0)
	{
		remainders[index] = decimal % 2;
		index++;
		decimal = decimal / 2;
	}

	printf("\t%d in binary is ", decimal);
	for (bit = index - 1; bit >= 0; bit--)
	{
		printf("%d", remainders[bit]);
	}
	putchar('\n');
}
#include <string.h>

int main(void)
{
	int decimal;
	char action[3] = "c";

	while (strcmp(action, "q"))
	{
		if (strcmp(action, "c"))
		{
			printf("Invalid input!\n");
			return (-1);
		}
		printf("Convert from DECIMAL to BINARY.\n\tEnter decimal value: ");
		int valid = scanf("%d", &decimal);
		if (valid != 1)
		{
			printf("Enter valid decimal numbers only!!\n");
			return (-1);
		}
		toBinary(decimal);
		printf("Enter 'q' to quit or 'c' to continue: ");
		scanf("%s", action);
		putchar('\n');
	}
	return (0);
}
