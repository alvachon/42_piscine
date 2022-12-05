/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_recursive_factorial.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 15:54:04 by alvachon          #+#    #+#             */
/*   Updated: 2022/03/08 16:11:32 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	int	x;

	x = 5;
	printf("%d! = %d\n", x, ft_recursive_factorial(x));
	return (0);
}
