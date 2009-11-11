#include <stdio.h>

static inline int abs (int x)
{
	return x > 0 ? x : -x;
}

int main (void)
{
	int size, i, j;

	do
	{
		printf("Enter odd number: "); fflush(stdout);
		scanf("%d", &size);
	}
	while (!(size > 0 && size % 2 == 1));

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < abs(size / 2 - i); j++)
			putchar(' ');
		for (j = 0; j < size - abs(size / 2 - i) * 2; j++)
			putchar('*');
		putchar('\n');
	}
}

