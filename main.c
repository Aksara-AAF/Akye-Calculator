#include <stdio.h>

float division(float n1, float n2);

float addition(float n1, float n2);

float Mult(float n1, float n2);

float subtract(float n1, float n2);
// tes

int main()
{
	int choice, choice2;
	float output, n1, n2;

	printf("What would you like to do?\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
	scanf("%d", &choice);

	printf("Enter first number = ");
	scanf("%f", &n1);

	printf("Enter second number = ");
	scanf("%f", &n2);

	switch (choice)
	{
	case 1:
		printf("Adding...\n");

		output = addition(n1, n2);
		printf("%.2f", output);

		break;

	case 2:
		printf("Which number should be first? (1 or 2): ");
		scanf("%d", &choice2);
		if (choice2 == 1)
		{
			printf("Subtracting...\n");
			output = subtract(n1, n2);
			printf("%.2f", output);
			break;
		}
		else if (choice2 != 1 && choice2 != 2)
		{
			printf("Invalid, try again.");
			break;
		}
		printf("Subtracting...\n");

		output = subtract(n2, n1);
		printf("%.2f", output);

		break;

	case 3:
		printf("Multiplying...\n");

		output = Mult(n1, n2);
		printf("%.2f", output);

		break;

    case 4:
	    printf("Which number should be first? (1 or 2): ");
	    scanf("%d", &choice2);

	    if (choice2 == 1)
	    {
		    printf("Dividing...\n");
		    output = division(n1, n2);
		    printf("%.2f", output);
	    }
	    else if (choice2 == 2)
	    {
		    printf("Dividing...\n");
		    output = division(n2, n1);
		    printf("%.2f", output);
	    }
	    else
	    {
		    printf("Invalid, try again.");
	    }
	    break;


	default:
		printf("Invalid choice, try again.");
		break;
	}
}

float addition(float n1, float n2)
{
	return n1 + n2;
}

float Mult(float n1, float n2)
{
	return n1 * n2;
}

float division(float n1, float n2)
{
	return n1 / n2;
}

float subtract(float n1, float n2)
{
	return n1 - n2;
}
