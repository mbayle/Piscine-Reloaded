/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabayle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 02:50:31 by mabayle           #+#    #+#             */
/*   Updated: 2018/04/06 03:05:58 by mabayle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*strdup;

	i = 0;
	while (src[i])
		i++;
	strdup = (char*)malloc(sizeof(*strdup) * i + 1);
	if (strdup == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		strdup[i] = src[i];
		i++;
	}
	strdup[i] = '\0';
	return (strdup);
}
