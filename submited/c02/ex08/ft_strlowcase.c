/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:52:30 by ataboada          #+#    #+#             */
/*   Updated: 2023/02/13 14:52:52 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

char *ft_strlowcase(char *str);

int main(void)
{
	char str[] = "hello 2 WORLD";
	ft_strlowcase(str);
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
