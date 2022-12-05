/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_ultimate_div_mod.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 23:25:02 by alvachon          #+#    #+#             */
/*   Updated: 2022/02/24 23:33:52 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 7;
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	ft_ultimate_div_mod( &a, &b);
	printf("*a = %d\n", a);
	printf("*b = %d\n", b);
}
