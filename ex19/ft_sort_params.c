/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabayle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 04:33:34 by mabayle           #+#    #+#             */
/*   Updated: 2018/04/06 04:34:05 by mabayle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		ft_strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while (s1[a] != '\0' && s1[a] == s2[a])
		a++;
	return ((unsigned char)s1[a] - (unsigned char)s2[a]);
}

int		main(int argc, char **argv)
{
	int		b;
	int		find;
	char	*temp;

	find = 1;
	while (find > 0)
	{
		find = 0;
		b = 0;
		while (++b < argc - 1)
			if (ft_strcmp(argv[b], argv[b + 1]) > 0)
			{
				temp = argv[b];
				argv[b] = argv[b + 1];
				argv[b + 1] = temp;
				find = 1;
			}
		b++;
	}
	b = 0;
	while (++b < argc)
		ft_putstr(argv[b]);
	return (0);
}
