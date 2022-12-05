/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strncat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 14:38:16 by alvachon          #+#    #+#             */
/*   Updated: 2022/03/05 13:17:29 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	str1[120] = "Alex";
	char	str2[120] = "Roxanne";

	printf("Mine : %s\n", ft_strncat(str1, str2, 2));
	printf("Truth = %s\n", strncat(str1, str2, 2));
	return (0);
}
