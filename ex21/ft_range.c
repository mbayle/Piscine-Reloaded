#include <stdlib.h>
#include <stdio.h>

int   *ft_range(int min, int max)
{
	int *range;
	int i;
	int size;

	i = 0;
	size = max - min;
	range = (int *)malloc(sizeof(min) * size);

	if(min >= max)
		return (NULL);
	while (i < size)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}

int   main(void)
{
int* res;
int i;

res = ft_range(5, 10);

for (i = 0; i < 5; i++)
  printf("%d,", res[i]);
printf("\n");

res = ft_range(-20, -15);
for (i = 0; i < 5; i++)
  printf("%d,", res[i]);
printf("\n");

res = ft_range(-2147483648, -2147483646);
for (i = 0; i < 1; i++)
	printf("%d,", res[i]);
printf("\n");
}
