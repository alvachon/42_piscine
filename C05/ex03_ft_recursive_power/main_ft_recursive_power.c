/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_recursive_power.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 16:57:46 by alvachon          #+#    #+#             */
/*   Updated: 2022/03/05 17:10:41 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	int	nb = 5;
	int	power = 3;

	printf("%d^%d = %d", nb, power, ft_recursive_power(nb, power));
	return (0);
}
