/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_is_numeric.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:27:45 by alvachon          #+#    #+#             */
/*   Updated: 2022/02/28 13:04:43 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	string1[120] = "12345";
	char	string2[120] = "adg49875";
	char	string3[120] = "657836d";
	char	string4[120] = "&*?&*?";
	printf("%d\n", ft_str_is_numeric(string1));
	printf("%d\n", ft_str_is_numeric(string2));
	printf("%d\n", ft_str_is_numeric(string3));
	printf("%d\n", ft_str_is_numeric(string4));
	return (0);
}
