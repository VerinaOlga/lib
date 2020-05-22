/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedelmir <marvin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 23:59:29 by jedelmir          #+#    #+#             */
/*   Updated: 2020/05/18 21:45:29 by jedelmir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*negative(int n, int len, char *str)
{
	while (n)
	{
		str[len] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	return (str);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		nbr;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = (n < 0) ? 1 : 0;
	nbr = n;
	while (nbr)
	{
		nbr /= 10;
		len++;
	}
	if (!(str = ft_calloc(len + 1, sizeof(char))))
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = n * (-1);
	}
	len--;
	return (negative(n, len, str));
}
