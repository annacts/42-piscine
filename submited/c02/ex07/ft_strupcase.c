/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:51:36 by ataboada          #+#    #+#             */
/*   Updated: 2023/02/13 16:35:15 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

char *ft_strupcase(char *str);

int main(void)
{
	char str[] = "hello 2 WORLD";
	ft_strupcase(str);
	printf("%s\n", str);
}
*/

char	*ft_strupcase(char *str)
{
	int	i;
	int	dif;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			dif = 'a' - 'A';
			str[i] -= dif;
		}
		i++;
	}
	return (str);
}
