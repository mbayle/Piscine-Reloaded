/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabayle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 13:34:56 by mabayle           #+#    #+#             */
/*   Updated: 2018/04/04 13:42:18 by mabayle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *range;
	int i;
	int size;

	i = 0;
	size = max - min;
	range = (int *)malloc(sizeof(min) * size);
	if (min >= max)
		return (NULL);
	while (i < size)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
