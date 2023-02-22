/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:25:19 by ataboada          #+#    #+#             */
/*   Updated: 2023/02/20 18:01:29 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
#include <stdio.h>
int	ft_strlen(char *str);
int     ft_check(char *base);
void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	int nbr = -2147483648;
	char *base = "poneyvif";
	ft_putnbr_base(nbr, base);
}
*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_check(char *base)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = ft_strlen(base);
	if (len < 2)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] == 127)
			return (0);
		j = i + 1;
		while (j < ft_strlen(base))
		{
			if (base[i] == base [j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	n;
	int		len;

	len = ft_strlen(base);
	n = nbr;
	if (ft_check(base) == 1)
	{
		if (n < 0)
		{
			write(1, "-", 1);
			n *= -1;
		}
		if (n < len)
			write(1, &base[n], 1);
		if (n >= len)
		{
			ft_putnbr_base(n / len, base);
			ft_putnbr_base(n % len, base);
		}
	}
}
