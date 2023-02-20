/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:59:17 by ataboada          #+#    #+#             */
/*   Updated: 2023/02/08 13:22:26 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
	char *str = "Hello world!";
	char *stra = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int length = ft_strlen(str);
	int length_1 = ft_strlen(stra);

	printf("%i\n", length);
	printf("%i\n", length_1);
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
