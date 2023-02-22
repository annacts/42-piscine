/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:12:08 by ataboada          #+#    #+#             */
/*   Updated: 2023/02/21 17:19:11 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi_base(char *str, char *base);
int	ft_strlen(char *str);
int	check_base(char *base);

int	ft_length(long nb, int base_len)
{
	int	len;

	len = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / base_len;
		len++;
	}
	return (len);
}

void	convert_dec_to_base(long nb, char *base_to, char *final, int final_len)
{
	int	base_len;

	base_len = ft_strlen (base_to);
	final[final_len] = '\0';
	final_len--;
	if (nb == 0)
	{
		final[0] = base_to[0];
	}
	if (nb < 0)
	{
		final[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		final[final_len] = base_to[nb % base_len];
		nb = nb / base_len;
		final_len--;
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long		nb;
	int			final_len;
	int			base_len;
	char		*final;

	nb = ft_atoi_base(nbr, base_from);
	if (check_base(base_to) == 1 && check_base(base_from) == 1)
	{
		base_len = ft_strlen (base_to);
		final_len = ft_length(nb, base_len);
		final = malloc(sizeof(char) * final_len + 1);
		if (!final)
		{
			return (0);
		}
		convert_dec_to_base(nb, base_to, final, final_len);
		return (final);
	}
	return (0);
}

/*
int	main()
{
	char	nbr[] = "\t--+-12o01";
	char	base_from[] = "0123456789";
	char	base_to[] = "01";
	char	*final;

	final = ft_convert_base(nbr, base_from, base_to);
	printf("nbr: %s, base_from: %s", nbr, base_from);
	printf("final: %s, base_to: %s\n", final, base_to);
	return (0);
}
*/
