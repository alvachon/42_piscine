/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 21:59:14 by alvachon          #+#    #+#             */
/*   Updated: 2022/03/14 22:10:54 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printhex(char a)
{
	char	h;
	char	temp;

	temp = a;
	temp = temp / 16;
	if (temp < 10)
	{
		h = '0' + temp;
	}
	else
	{
		h = 'a' + temp - 10;
	}
	write(1, &h, 1);
	temp = a;
	temp = temp % 16;
	if (temp < 10)
	{
		h = '0' + temp;
	}
	else
	{
		h = 'a' + temp - 10;
	}
	write(1, &h, 1);
}

void	ft_putstr_non_printable(char *str)
{
	long int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] <= 31) || (str[i] >= 127))
		{
			ft_putchar(92);
			ft_printhex(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
