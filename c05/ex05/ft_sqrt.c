/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:23:29 by ataboada          #+#    #+#             */
/*   Updated: 2023/02/18 13:27:30 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <limits.h>

int	ft_sqrt(int nb);

int	main(void)
{
	printf("4: %i\n", ft_sqrt(16));
	printf("0: %i\n", ft_sqrt(-1));
	printf("0: %i\n", ft_sqrt(0));
	printf("1: %i\n", ft_sqrt(1));
	printf("0: %i\n", ft_sqrt(13));
	printf("0: %i\n", ft_sqrt(INT_MAX));
	printf("64: %i\n", ft_sqrt(64));
}
*/

int	ft_sqrt(int nb)
{
	unsigned int	i;

	i = 0;
	if (nb <= 0)
	{
		return (0);
	}
	while ((i * i) < (unsigned int)nb)
	{
		i++;
	}
	if ((i * i) == (unsigned int)nb)
	{
		return (i);
	}
	else
	{
		return (0);
	}
}
