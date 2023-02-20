/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:23:34 by ataboada          #+#    #+#             */
/*   Updated: 2023/02/08 12:25:25 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

void ft_swap(int *a, int *b);

int main(void)
{
	int x = 5;
	int y = 2;

	printf("%i %i\n", x, y);

	ft_swap(&x, &y);

	printf("%i %i\n", x, y);
}
*/

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
