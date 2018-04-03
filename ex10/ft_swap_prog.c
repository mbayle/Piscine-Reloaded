#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_swap(int *a, int *b)
{
	int tmp;
	
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(void)
{
	int a = 'A';
	int b = 'B';
	ft_swap(&a, &b);
	ft_putchar(a);
	ft_putchar(b);
	return(0);
}
