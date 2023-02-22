/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 19:25:22 by ataboada          #+#    #+#             */
/*   Updated: 2023/02/21 15:51:45 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int min = 5;
	int max = 2;
	int *range = ft_range(min, max);
	for(int i = 0; i < max - min; i++)
	{
		printf("%i, ", range[i]);
	}
}
*/

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	range = (int *)malloc(sizeof(int) * (max - min));
	if (range == NULL)
	{
		return (0);
	}
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
