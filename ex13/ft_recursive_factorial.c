/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabayle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 12:52:45 by mabayle           #+#    #+#             */
/*   Updated: 2018/04/04 12:55:39 by mabayle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int result;

	result = 1;
	if (nb < 0 || nb >= 13)
		return (0);
	if (nb > 1)
		result = (nb * ft_recursive_factorial(nb - 1));
	return (result);
}
