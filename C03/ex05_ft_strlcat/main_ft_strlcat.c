/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 13:45:41 by alvachon          #+#    #+#             */
/*   Updated: 2022/03/07 14:10:26 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	str1[20] = "Hello";
	char	str2[20] = " World";

	printf("strlcat (str1, str2) %lu\n", strlcat(str1, str2, 3));
	printf("ft_strlcat(str1, str2) %u\n", ft_strlcat(str1, str2, 3));
	return (0);
}
