/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 19:08:59 by alvachon          #+#    #+#             */
/*   Updated: 2022/03/02 15:07:51 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;
	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	string1[120] = "12345";
	char	string2[120] = "abcefg";
	unsigned	int n = 3;

	ft_putstr(string1);
	write(1, "\n", 1);
	ft_putstr(string2);
	write(1, "\n", 1);
	ft_putstr(ft_strncpy(string2, string1, n));
	write(1, "\n", 1);
	ft_putstr(string1);
	write(1, "\n", 1);
	ft_putstr(string2);
	write(1, "\n", 1);
	return (0);
}
