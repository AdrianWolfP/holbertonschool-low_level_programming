#include "3-calc.h"
/**
 *main - calculates math problems
 *@argc: command line count
 *@argv: argument vector
 *Return: Always 0
 */

int main(int argc, char **argv)
{
	int num1, num2;
	char *operator;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	op = get_op_func(operator);

	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp(operator, "/") == 0 || (strcmp(operator, "%")) == 0) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

		printf("%d\n", op(num1, num2));

		return (0);
}
