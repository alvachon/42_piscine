/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 09:13:13 by alvachon          #+#    #+#             */
/*   Updated: 2022/03/14 16:56:25 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;
	int	*ptr_range;

	i = 0;
	if (min < max)
	{
		len = max - min;
		ptr_range = malloc(sizeof(int) * (len + 1));
		while (len > 0)
		{
			ptr_range[i] = min + i;
			len--;
			i++;
		}
		*range = ptr_range;
	}
	else
		*range = NULL;
	return (i);
}
