/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 23:47:16 by alvachon          #+#    #+#             */
/*   Updated: 2022/03/06 14:20:39 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
    char	*str;

	str = "patate";
	printf("longueur de la string patate : %d\n", ft_strlen(str));
	return (0);
}
