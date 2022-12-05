/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_div_mod.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 23:05:16 by alvachon          #+#    #+#             */
/*   Updated: 2022/02/24 23:21:54 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
    int div;
    int mod;
    
	printf("a = %d b = %d\n", 7, 10);
	ft_div_mod(7, 10, div, mod);
	printf("div = %d et mod = %d\n", div, mod);
	return (0);
}
