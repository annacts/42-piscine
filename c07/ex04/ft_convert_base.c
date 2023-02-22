/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:09:20 by ataboada          #+#    #+#             */
/*   Updated: 2023/02/21 17:11:38 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == 45 || base[i] == 43 || base[i] <= 32 || base[i] == 127)
			return (0);
		j = i - 1;
		while (j >= 0)
		{
			if (base[i] == base[j])
				return (0);
			j--;
		}
		i++;
	}
	return (1);
}

int	check_strbase(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	convert_to_dec(char *str, char *base, int size)
{
	int	i;
	int	n;
	int	power;
	int	val;

	n = 0;
	power = 1;
	while (size >= 0)
	{
		i = 0;
		while (base[i] != '\0')
		{
			if (base[i] == str[size])
			{
				val = i;
			}
			i++;
		}
		n += val * power;
		power = power * ft_strlen(base);
		size--;
	}
	return (n);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	if (check_base(base) == 0)
		return (0);
	if (str)
	{
		while (str[0] == 32 || (str[0] >= 9 && str[0] <= 13))
			str++;
		while (str[0] == 45 || str[0] == 43)
		{
			if (str[0] == 45)
				sign = sign * -1;
			str++;
		}
		while (str[i] != '\0' && check_strbase(str[i], base) == 1)
			i++;
		return (sign * convert_to_dec(str, base, i - 1));
	}
	return (0);
}
