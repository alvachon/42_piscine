/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_str_is_uppercase.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:36:44 by alvachon          #+#    #+#             */
/*   Updated: 2022/02/28 14:45:53 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	string1[120] = "ABCDF";
	char	string2[120] = "abfghs";
	char	string3[120] = "26757";
	char	string4[120] = "*&%?&%";

	printf("%d\n", ft_str_is_uppercase(string1));
	printf("%d\n", ft_str_is_uppercase(string2));
	printf("%d\n", ft_str_is_uppercase(string3));
	printf("%d\n", ft_str_is_uppercase(string4));
	return (0);
}
