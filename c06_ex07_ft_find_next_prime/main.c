/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 21:15:06 by alvachon          #+#    #+#             */
/*   Updated: 2022/03/16 21:17:19 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_find_next_prime(int nb);

int main(void)
{;
	int	test;

	test = 24;
	printf("\nListe des 25 nb premiers: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97\n\nInput: %d\nOutput: %d\n", test, ft_find_next_prime(test));
	return (0);
}
