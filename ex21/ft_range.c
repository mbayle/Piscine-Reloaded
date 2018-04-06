/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabayle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 04:34:45 by mabayle           #+#    #+#             */
/*   Updated: 2018/04/06 04:34:54 by mabayle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	signed int	s_nb;
	int			*str;
	int			i;

	i = 0;
	s_nb = max - min;
	if (min >= max)
		return (NULL);
	str = (int *)malloc(sizeof(*str) * s_nb + 1);
	while (min < max)
	{
		str[i] = min;
		i++;
		min++;
	}
	str[i] = 0;
	return (str);
}
