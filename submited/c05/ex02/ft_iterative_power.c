/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:11:56 by ataboada          #+#    #+#             */
/*   Updated: 2023/02/19 14:06:37 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int ft_iterative_power(int nb, int power);

int main(void)
{
	printf("%i\n", ft_iterative_power(4, 0));
	printf("%i\n", ft_iterative_power(4, 1));
	printf("%i\n", ft_iterative_power(4, -2));
	printf("%i\n", ft_iterative_power(0, 0));
	printf("%i\n", ft_iterative_power(-4, 3));
}
*/

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power != 0)
	{
		res *= nb;
		power--;
	}
	return (res);
}
