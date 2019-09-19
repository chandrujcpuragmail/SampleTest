#include <stdio.h>
void divide(int a, int b)
{
	printf ("devide: %d\n", a/b);
}

void add(int a, int b)
{
	printf ("add : %d\n", (a + b));
}
void subtract(int a, int b)
{
	printf ("sub: %d\n", (a - b));
	printf ("mul: %d\n", a*b);
	printf ("sub : %d\n", (a-b));
}


int main()
{
	add(2, 3);
	subtract(40,30);
	divide(40, 10);
	return 0;
}

