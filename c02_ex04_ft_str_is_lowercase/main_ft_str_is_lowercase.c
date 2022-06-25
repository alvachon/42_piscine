/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_str_is_lowercase.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:21:29 by alvachon          #+#    #+#             */
/*   Updated: 2022/02/28 14:30:53 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	string1[120] = "ahfgj";
	char	string2[120] = "Auy";
	char	string3[120] = "975fd";
	char	string4[120] = "*&?";

	printf("%d\n", ft_str_is_lowercase(string1));
	printf("%d\n", ft_str_is_lowercase(string2));
	printf("%d\n", ft_str_is_lowercase(string3));
	printf("%d\n", ft_str_is_lowercase(string4));
	return (0);
}
