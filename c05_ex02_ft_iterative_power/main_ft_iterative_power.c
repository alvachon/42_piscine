/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_iterative_power.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 16:08:25 by alvachon          #+#    #+#             */
/*   Updated: 2022/03/05 16:55:28 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	int	nb = 5;
	int power = 2;
	printf("%d^%d = %d", nb, power, ft_iterative_power(nb, power));
	return (0);
}
