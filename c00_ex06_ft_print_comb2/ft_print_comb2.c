/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 18:35:31 by alvachon          #+#    #+#             */
/*   Updated: 2022/03/09 16:45:27 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	c = '0' + nb;
	write(1, &c, 1);
}

void	ft_print(int i, int j)
{
	ft_putnbr(i / 10);
	ft_putnbr(i % 10);
	write(1, " ", 1);
	ft_putnbr(j / 10);
	ft_putnbr(j % 10);
	if ((i + j) < (98 + 99))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = -1;
	while (++i < 99)
	{
		j = i;
		while (++j < 100)
		{
			ft_print(i, j);
		}
	}
}
