/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:56:28 by ataboada          #+#    #+#             */
/*   Updated: 2023/02/16 12:26:07 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int ft_strlen(char *str);
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int	main()
{
	char src[] = "a potentially long string";
	char dest[] = "This is ";
	unsigned int size = 6;
	unsigned int result;

	result = ft_strlcat(dest, src, size);
	printf("dest = %s\nresult = %d\n", dest, result);
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	d;
	unsigned int	s;

	i = 0;
	d = ft_strlen(dest);
	s = ft_strlen(src);
	if (size <= d)
	{
		return (size + s);
	}
	while (src[i] != '\0' && (d + 1 < size))
	{
		dest[d] = src[i];
		d++;
		i++;
	}
	dest[d] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[i]));
}
