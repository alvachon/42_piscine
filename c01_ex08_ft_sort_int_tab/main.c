/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 21:43:23 by iamongeo          #+#    #+#             */
/*   Updated: 2022/03/09 21:39:26 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_sort_int_tab(int *tab, int size);

void	print_tab(int tab[], int size)
{
	int	i;

	i = -1;
	printf("[ ");
	while (++i < size)
		printf("%d, ", tab[i]);
	printf("]\n");
}

int	main(int argc, char *argv[])
{
	int	tab[32];
	int	i;

	i = 0;
	while (++i < argc)
		tab[i-1] = atoi(argv[i]);

	printf("Original list : ");
	print_tab(tab, argc - 1);
	printf("Sorted list : ");
	ft_sort_int_tab(tab, argc - 1);
	print_tab(tab, argc - 1);
	return (0);
}
