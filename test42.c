#include <stdio.h>

int main(void)
{

	int l1 = 0, l2 = 0;
	char *ptr = NULL;

	l1 = printf("This is a test\n");
	l2 = _printf("This is a test\n");
	printf("1 printf: %d _printf: %d \n",l1, l2);
	putchar('\n');

	l1 = printf("%s", ptr);
	putchar('\n');
	l2 = _printf("%s", ptr);
	putchar('\n');
	printf("3 printf: %d _printf: %d \n",l1, l2);
	putchar('\n');

	l1 = printf("%c", 'C');
	putchar('\n');
	l2 = _printf("%c", 'c');
	putchar('\n');
	printf("4 printf: %d _printf: %d \n",l1, l2);
	putchar('\n');

	l1 = printf("Hello: %c. Hi!\n", 'Z');
	l2 = _printf("Hello: %c. Hi!\n", 'Z');
	printf("5 printf: %d _printf: %d \n",l1, l2);
	putchar('\n');

	return (0);
}
