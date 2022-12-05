/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_str_is_printable.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:46:56 by alvachon          #+#    #+#             */
/*   Updated: 2022/03/02 11:30:49 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	string1[120] = "(??HF47@";
	char	string2[120] = "    ";
	
	printf("%d\n", ft_str_is_printable(string1));
	printf("%d\n", ft_str_is_printable(string2));
	return (0);
}
