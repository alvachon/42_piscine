/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 22:12:36 by alvachon          #+#    #+#             */
/*   Updated: 2022/02/26 00:56:19 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

int	main(void)
{
	char	string1[120] = "bonjour";
	char	string2[120] = "allo";

	ft_putstr(string1);//1
	ft_putstr(string2);//1
	write(1, "\n", 1);
	ft_putstr(ft_strcpy(string1, string2));
	write(1, "\n", 1);
	ft_putstr(string1);//3
	write(1, "\n", 1);
	ft_putstr(string2);//4
	write(1, "\n", 1);
	return (0);
}
