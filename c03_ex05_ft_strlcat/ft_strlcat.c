/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 13:44:03 by alvachon          #+#    #+#             */
/*   Updated: 2022/03/13 18:20:32 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	id;
	unsigned int	is;
	unsigned int	i;

	id = 0;
	is = 0;
	i = 0;
	while (dest[id] != '\0')
	{
		id++;
	}
	while (src[is] != '\0')
	{
		is++;
	}	
	if (size <= id)
		return (is + size);
	while (src[i] != '\0' && id + i < size - 1)
	{
		dest[id + i] = src[i];
		i++;
	}
	dest[id + i] = '\0';
	return (is + id);
}
