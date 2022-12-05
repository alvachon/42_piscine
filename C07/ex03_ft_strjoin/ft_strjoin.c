/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:36:49 by alvachon          #+#    #+#             */
/*   Updated: 2022/03/15 19:40:08 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		n;
	int		d;
	int		b;
	int		count;

	n = 0;
	d = 0;
	b = 0;
	count = 1;
	while (d < size)
		count = count + ft_strlen(strs[d++]) + ft_strlen(sep);
	tab = malloc(sizeof(char *) * count);
	d = -1;
	while (++d < size)
	{
		while (strs[d][b])
			tab[n++] = strs[d][b++];
		b = 0;
		while (sep[b] && d < size - 1)
			tab[n++] = sep[b++];
		b = 0;
	}
	tab[n] = '\0';
	return (tab);
}
