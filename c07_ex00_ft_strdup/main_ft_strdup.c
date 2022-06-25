/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 18:45:40 by alvachon          #+#    #+#             */
/*   Updated: 2022/03/06 14:29:35 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
/*MALLOC = 
 *
 * Decl. pointer : char *copy;
 * Init pointer  : copy = (char*)malloc(sizeof(char) * len + 1)
 * (char*) = Pointer on char in dereference (need to be the same as decl)
 * (sizeof(char) = like an unsigned int of (char)
 * on fait * len + 1 pour chq charac. de la longueur ET + 1 pour le '\0' */

char	*ft_strdup(char *src);

int	main(void)
{
	char	str[120] = "allo";
	printf("%s", ft_strdup(str));
	return (0);
}
