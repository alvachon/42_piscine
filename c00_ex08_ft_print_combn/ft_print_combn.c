/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 00:53:56 by alvachon          #+#    #+#             */
/*   Updated: 2022/03/09 14:33:45 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	c = '0' + nb;
	write(1, &c, 1);
}

void	ft_print(int *array, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putnbr(array[i]);
		i++;
	}
	if (array[0] != 10 - n)
		write(1, ", ", 2);
}

void	ft_recursive(int *array, int n, int i)
{
	if (i == 0)
		array[i] = 0;
	else
		array[i] = array[i - 1] + 1;
	while (array[i] < 11 - n + i)
	{
		if (i == n - 1)
			ft_print(array, n);
		else
			ft_recursive(array, n, i + 1);
		array[i] = array[i] + 1;
	}
}

void	ft_print_combn(int n)
{
	int	array[10];

	ft_recursive(array, n, 0);
}
