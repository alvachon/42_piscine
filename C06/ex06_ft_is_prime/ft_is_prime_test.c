/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 14:37:22 by iamongeo          #+#    #+#             */
/*   Updated: 2022/03/15 11:28:05 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_is_prime(int nb);

int	main(int argc, char *argv[])
{
	int	nb;
	if (argc > 1)
	{
		nb = atoi(argv[1]);
		printf(" 1 is prime, 0 is not (0 and 1 = 0): %d\n", ft_is_prime(nb));
	}
	return (0);
}
