/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:00:26 by ataboada          #+#    #+#             */
/*   Updated: 2023/02/19 17:01:38 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	printf("%i\n", ft_iterative_factorial(20));
}


int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb <= 1)
	{
		return (1);
	}
	while (i > 1)
	{
		nb *= (i - 1);
		i--;
	}
	return (nb);
}
