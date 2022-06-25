/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 11:42:36 by alvachon          #+#    #+#             */
/*   Updated: 2022/03/16 19:53:43 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	len;

	len = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[len] != '\0')
	{
		i = 0;
		while (str[len + i] == to_find[i])
		{
			if (to_find[i + 1] == '\0')
				return (str + len);
			i++;
		}
		len++;
	}
	return (0);
}
