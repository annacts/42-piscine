/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:13:02 by ataboada          #+#    #+#             */
/*   Updated: 2023/02/16 15:01:21 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void    ft_findhex(unsigned char c);
void	ft_putstr_non_printable(char *str);

int main(void)
{
	char str[] = "Cou\tco\0u\ntu vais bie\rn";
	ft_putstr_non_printable(str);
}


void	ft_findhex(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &hex[c / 16], 1);
	write(1, &hex[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] != 127)
		{
			write(1, &str[i], 1);
		}
		else
		{
			ft_findhex(str[i]);
		}
		i++;
	}
}
