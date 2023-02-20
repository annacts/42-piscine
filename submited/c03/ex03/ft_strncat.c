/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:07:59 by ataboada          #+#    #+#             */
/*   Updated: 2023/02/16 12:18:15 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int ft_strlen(char *str);
char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	char src[] = "There!";
	char dest[] = "Hello ";
	unsigned int n = 2;

	ft_strncat(dest, src, n);

	printf("%s\n", dest);
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	d;
	unsigned int	i;

	d = ft_strlen(dest);
	i = 0;
	while (i < nb && src[i] != '\0')
	{
		dest[d] = src[i];
		d++;
		i++;
	}
	dest[d] = '\0';
	return (dest);
}
