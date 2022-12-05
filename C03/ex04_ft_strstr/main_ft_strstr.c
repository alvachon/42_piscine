/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 11:42:54 by alvachon          #+#    #+#             */
/*   Updated: 2022/03/07 13:39:05 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	*midstr;
	char	*smallstr;
	char	*largestr;

	midstr = "Henlo Wowie 098754321";
	smallstr = "Wowie";
	largestr = "Uwu owo henlo 0101010101010101010";
	printf("Value str1 : %s\n", midstr);
	printf("Value str2 : %s\n", smallstr);
	printf("Value str3 : %s\n", largestr);
	printf("ft_strstr (str1, str2) = %s\n", ft_strstr(midstr, smallstr));
	printf("ft_strstr (str3, str2) = %s\n", ft_strstr(largestr, smallstr));
	printf("ft_strstr (str1, str3) = %s\n", strstr(midstr, smallstr));
	printf("ft_strstr (str1, str3) = %s\n", strstr(largestr, smallstr));
	return (0);
}
