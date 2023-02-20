/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 13:11:44 by ataboada          #+#    #+#             */
/*   Updated: 2023/02/13 13:22:00 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
    int array[6] = {1, 20, 389, 4, 5};
    ft_rev_int_tab(array, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%i", array[i]);
    }
}
*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < (size / 2))
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tmp;
		i++;
	}
}
