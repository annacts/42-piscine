/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:43:03 by ataboada          #+#    #+#             */
/*   Updated: 2023/02/13 17:39:54 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	char src[] = "Hey there!";
	unsigned int n = 20;
	char dest[n];

	ft_strncpy(dest, src, n);
	printf("%s\n", dest);
}
*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	end;

	i = 0;
	end = 0;
	while (i < n)
	{
		if (src[i] == '\0')
		{
		end = 1;
		}
		if (end == 0)
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = '\0';
		}
		i++;
	}
	return (dest);
}
