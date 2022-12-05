/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:13:22 by alvachon          #+#    #+#             */
/*   Updated: 2022/03/03 17:44:33 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	s1[120] = "salut";
	char	s2[120] = "bonjour";

	printf("s1 = %s \n", s1);
	printf("s2 = %s \n", s2);
	printf("n = %d \n", ft_strncmp(s1, s2, 3));
}
