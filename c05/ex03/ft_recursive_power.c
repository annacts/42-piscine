/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:15:38 by ataboada          #+#    #+#             */
/*   Updated: 2023/02/19 14:12:29 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int ft_recursive_power(int nb, int power);

int main(void)
{
	printf("%i\n", ft_recursive_power(4, 0));
	printf("%i\n", ft_recursive_power(0, 0));
	printf("%i\n", ft_recursive_power(4, -5));
	printf("%i\n", ft_recursive_power(1, 8));
	printf("%i\n", ft_recursive_power(-4, 3));
}
*/

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}
