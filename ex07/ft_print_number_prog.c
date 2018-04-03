#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(void)
{
	char i;

	i = '0';
	while(i <= '9')
	{
		ft_putchar(i);
		i++;
	}
}

int	main(void)
{
	ft_print_number();
	return(0);
}
