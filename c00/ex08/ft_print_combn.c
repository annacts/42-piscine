/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 10:06:49 by ataboada          #+#    #+#             */
/*   Updated: 2023/02/07 12:22:29 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_print_array(char *a, int n, int max);
void	ft_increments(char *f, char *l, int n);
void	ft_print_combn(int n);

/*
int	main(void)
{
	ft_print_combn(10);
}
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_array(char *a, int n, int max)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(a[i++]);
	}
	if (a[0] == max)
	{
		return ;
	}
	else
	{
		write(1, ", ", 2);
	}
}

void	ft_increments(char *f, char *l, int n)
{
	int	index;
	int	value;

	while (f[0] != l[0])
	{
		index = n - 1;
		while (f[index] == l[index])
		{
			index -= 1;
		}
		value = ++(f[index]);
		while (index < n)
		{
			f[++index] = ++value;
		}
		ft_print_array(f, n, l[0]);
	}
}

void	ft_print_combn(int n)
{
	char	f[10];
	char	l[10];
	int		i;

	i = 0;
	if (n < 1 || n > 9)
	{
		write(1, "Number must be between 1 and 9\n", 31);
		return ;
	}
	while (i < n)
	{
		f[i] = i + '0';
		l[i] = (10 - n) + i + '0';
		i++;
	}
	ft_print_array(f, n, l[0]);
	ft_increments(f, l, n);
}
