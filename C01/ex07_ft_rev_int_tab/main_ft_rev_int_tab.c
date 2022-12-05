/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_rev_int_tab.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 18:46:40 by alvachon          #+#    #+#             */
/*   Updated: 2022/03/09 19:03:26 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_rev_int_tab(int *tab, int size);

void	print_tab(int *tab, int size)
{
	int	i;

	i = 0;
	printf("[ ");
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	printf("]\n");
}

int	main(int ac, char **av)
{
	int	tab[32];
	int	i;

	i = 0;
	while (i < ac)
	{
		tab[i - 1] = atoi(av[i]);
		i++;
	}
	printf("Original: ");
	print_tab(tab, ac - 1);
	printf("Reverted: ");
	ft_rev_int_tab(tab, ac - 1);
	print_tab(tab, ac - 1);
	return (0);
}
