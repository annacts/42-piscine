/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:54:55 by ataboada          #+#    #+#             */
/*   Updated: 2023/02/13 16:38:29 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

char *ft_strlowcase(char *str);
int ft_c_is_alphanum(char c);
char *ft_strcapitalize(char *str);

int main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(str);
	printf("%s\n", str);
}
*/

char	*ft_strlowcase(char *str)
{
	int	i;
	int	dif;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			dif = 'a' - 'A';
			str[i] += dif;
		}
		i++;
	}
	return (str);
}

int	ft_c_is_alphanum(char c)
{
	int	i;

	i = 0;
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= '0' && c <= '9')
	{
		return (2);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (ft_c_is_alphanum(str[i]) == 0 && ft_c_is_alphanum(str[i + 1]) == 1)
		{
			str[i + 1] -= 'a' - 'A';
		}
		if (ft_c_is_alphanum(str[i]) == 1 && i == 0)
		{
			str[i] -= 'a' - 'A';
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}
