/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_print_combn.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 01:20:36 by alvachon          #+#    #+#             */
/*   Updated: 2022/03/13 18:37:09 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_combn(int n);

int	main(void)
{
	int	len;

	len = 11;
	ft_print_combn(len);
	return (0);
}
