/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 17:16:53 by alvachon          #+#    #+#             */
/*   Updated: 2022/03/02 17:38:25 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	s1[120] = "salut";
	char	s2[120] = "bonjour";

	printf("s1 = %s, %s\n", s1, s2);
	printf("s2 = %s \n", s2);
	ft_strcmp(s1, s2);
	printf("s1 - s2 = %d \n", ft_strcmp(s1, s2));
}
