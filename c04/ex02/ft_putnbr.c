/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:27:34 by ataboada          #+#    #+#             */
/*   Updated: 2023/02/17 12:08:38 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
void	ft_putnbr(int nb);

int	main(void)
{
	int a = 2147483647;
	int b = -10;
	int c = 10;
	int d = -2147483648;
	ft_putnbr(a);
	ft_putnbr(b);
	ft_putnbr(c);
	ft_putnbr(d);
}
*/

void	ft_putnbr(int nb)
{
	char	nbr;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		nbr = nb + '0';
		write(1, &nbr, 1);
	}
}
