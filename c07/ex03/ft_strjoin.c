/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:06:48 by ataboada          #+#    #+#             */
/*   Updated: 2023/02/21 13:29:04 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
#include <stdio.h>

int	ft_strlen(char *str);
int	ft_finalsize(int size, char **strs, char *sep);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	int	    size;
	char	*sep;
	char	**strs;
	char	*str;

	strs = (char**)malloc(sizeof(strs) * 5);
	strs[0] = "Chopin";
	strs[1] = "000";
	strs[2] = "Mahler";
	strs[3] = "2323";
	strs[4] = "Beethoven";
	sep = "+-+";
	size = 0;
	while (size < 6)
	{
		str = ft_strjoin(size, strs, sep);
		printf("%d: %s\n", size, str);
		free(str);
		size++;
	}
	free(strs);
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

int	ft_finalsize(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	i = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		len = len + ft_strlen(sep);
		i++;
	}
	len = len - ft_strlen(sep);
	return (len);
}

char	*ft_strcpy(char *dst, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*final;
	char	*tmp;
	int		i;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	final = (char *)malloc(sizeof(char) * (ft_finalsize(size, strs, sep) + 1));
	if (final == NULL)
		return (0);
	i = 0;
	tmp = final;
	while (i < size)
	{
		ft_strcpy(tmp, strs[i]);
		tmp = tmp + ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(tmp, sep);
			tmp = tmp + ft_strlen(sep);
		}
		i++;
	}
	*tmp = '\0';
	return (final);
}
