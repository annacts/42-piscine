/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:21:18 by ataboada          #+#    #+#             */
/*   Updated: 2023/02/19 14:29:01 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	printf("%i\n", ft_fibonacci(0));
	printf("%i\n", ft_fibonacci(1));
	printf("%i\n", ft_fibonacci(2));
	printf("%i\n", ft_fibonacci(3));
	printf("%i\n", ft_fibonacci(4));
	printf("%i\n", ft_fibonacci(5));
	printf("%i\n", ft_fibonacci(6));
	printf("%i\n", ft_fibonacci(7));
	printf("%i\n", ft_fibonacci(8));
	printf("%i\n", ft_fibonacci(-2));
}
*/

int	ft_fibonacci(int index)
{
	int	n;

	if (index < 0)
	{
		return (-1);
	}
	else if (index == 0)
	{
		return (0);
	}
	else if (index == 1)
	{
		return (1);
	}
	n = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (n);
}
