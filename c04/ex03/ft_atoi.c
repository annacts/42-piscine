/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:55:58 by ataboada          #+#    #+#             */
/*   Updated: 2023/02/20 17:06:43 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_get_sign(char *str, int *ptr_i)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while (str[i] && (str[i] <= 13 || str[i] == 32))
	{
		++i;
	}
	while (str[i] && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
		{
			sign *= -1;
		}
		++i;
	}
	*ptr_i = i;
	return (sign);
}

int	ft_atoi(char *str)
{
	int	i;
	int	atoi;
	int	sign;

	atoi = 0;
	sign = ft_get_sign(str, &i);
	while (str[i] && (str[i] >= 48 && str[i] <= 57))
	{
		atoi *= 10;
		atoi += str[i] - 48;
		++i;
	}
	atoi *= sign;
	return (atoi);
}
/*
int	main(void)
{
	char	str[] = "  ---+- -+123478ab567";
	
	printf("%d", ft_atoi(str));
	return (0);
}
*/
