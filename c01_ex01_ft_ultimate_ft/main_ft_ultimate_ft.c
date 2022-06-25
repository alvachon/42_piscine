/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_ultimate_ft.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:19:54 by alvachon          #+#    #+#             */
/*   Updated: 2022/02/24 15:38:49 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
    int	i;
    int	*i1;
    int	**i2;
	int	***i3;
	int	****i4;
	int	*****i5;
	int	******i6;
	int	*******i7;
	int	********i8;
	int	*********i9;
    
	i1 = &i;
	i2 = &i1;
	i3 = &i2;
	i4 = &i3;
	i5 = &i4;
	i6 = &i5;
	i7 = &i6;
	i8 = &i7;
	i9 = &i8;
	ft_ultimate_ft(i9);
	printf("Supposé 42 à la variable en argument du 9e pointeur; %d", i);
}
