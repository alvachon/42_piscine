/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strcat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 13:45:26 by alvachon          #+#    #+#             */
/*   Updated: 2022/03/05 12:49:21 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	str1[120] = "allo";
	char	str2[120] = " toi";

	printf("str1 = %s\n", str1);
	printf("str2 = %s\n", str2);
	printf("strcat = %s\n", ft_strcat(str1, str2));
	return (0);
}
