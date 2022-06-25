/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:26:35 by iamongeo          #+#    #+#             */
/*   Updated: 2022/03/01 15:30:08 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_putnbr_base(int nb, char *base);

int	main(int argc, char *argv[])
{
	int	nb;

	if (argc > 2)
	{
		nb = atoi(argv[1]);
		printf("print nb %d in base %s\n", nb, argv[2]);
		ft_putnbr_base(nb, argv[2]);
	}
	return (0);
}
