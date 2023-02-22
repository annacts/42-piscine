/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 19:26:00 by ataboada          #+#    #+#             */
/*   Updated: 2023/02/21 16:03:16 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int main(void)
{
	int min = 0;
	int max = 25;

	int **range2;
	int *range1;
	range2 = &range1;

	printf("%i\n", ft_ultimate_range(range2, min, max));

	int i = 0;
	while (i < max - min)
	{
		printf("%i ", range1[i]);
		i++;
	}
	free (range1);
}
*/

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tmp;
	int	i;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	tmp = (int *)malloc(sizeof(int) * (max - min));
	if (tmp == NULL)
	{
		tmp = 0;
		return (-1);
	}
	while (min < max)
	{
		tmp[i] = min;
		min++;
		i++;
	}
	*range = tmp;
	return (i);
}
