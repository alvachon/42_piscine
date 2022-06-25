/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:24:13 by alvachon          #+#    #+#             */
/*   Updated: 2022/02/23 17:52:40 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int i, int j, int k)
{
	if ((i != j && i != k) && (j != k))
	{
		ft_putchar(i);
		ft_putchar(j);
		ft_putchar(k);
		if (!(i == '7' && j == '8' && k == '9'))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = '0';
	j = '1';
	k = '2';
	while (i < ('7' + 1))
	{
		while (j < ('8' + 1))
		{
			while (k < ('9' + 1))
			{
				ft_print(i, j, k);
				k++;
				if (i == '7' && j == '8' && k == '9')
				{
					break ;
				}
			}
			k = ++j + 1;
		}
		j = i++;
	}
}
