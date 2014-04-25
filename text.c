
#include <stdio.h>
int main()
{
	size_t a = 1;
int	b = 0;
	int i;
	int c;
	for (i = 0; i <= 100000; i++)
	{
		c = a + i;
		printf("%d\n", c);
	}

	return 0;

}