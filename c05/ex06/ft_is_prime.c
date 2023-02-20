/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:28:34 by ataboada          #+#    #+#             */
/*   Updated: 2023/02/18 17:02:02 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	printf("%i\n", ft_is_prime(-30));
	printf("%i\n", ft_is_prime(4));
	printf("%i\n", ft_is_prime(7));
	printf("%i\n", ft_is_prime(90));
	printf("%i\n", ft_is_prime(0));
}
*/

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (i <= nb / i)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
