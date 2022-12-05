/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 20:15:30 by alvachon          #+#    #+#             */
/*   Updated: 2022/03/13 20:51:14 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_nbr_len(int nb, int base)
{
	int	i;

	i = 0;
	if (nb < 0)
		nb = nb * -1;
	while (nb > 0)
	{
		nb = nb / base;
		i++;
	}
	return (i);
}

char	*ft_strdup(char *str)
{
	int	i;
	int	len;
	char	*cpy;

	i = 0;
	len = 0;
	while (str[len] != '\0')
		len++;
	cpy = (char *)malloc(sizeof(char) * len);
	if (cpy == NULL)
		return (NULL);
	while(str[i] != '\0')
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	s;
	int	len;
	char	*radix;
	char	*result;

	i = 0;
	s = 0;
	len = 0;
	radix = "0123456789ABCDEF";
//	if (nbr == 0)
//		return (ft_strdup("0"));
//	if (base == 10 && nbr == -2147483648)
	//	return (ft_strdup("-2147483648"));
	len = ft_nbr_len(nbr, base);
//	if (base == 10 && nbr < 0)
		s = 1;
//	result = (char *)malloc(sizeof(char) * (len + s + 1));
//	if (result == NULL)
//		return (NULL);
	if (s == 1)
	{
	 	result[0] = '-';
		len++;
	}
	result[len] = '\0';
	if (nbr < 0)
		nbr *= -1;
	while (len > s)
	{
		result[len - 1] = radix[nbr % base];
		nbr = nbr / base;
		len--;
	}
//	return (result);
}
