/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedelmir <marvin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 16:57:39 by jedelmir          #+#    #+#             */
/*   Updated: 2020/05/20 00:48:16 by jedelmir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int				i;
	int				znak;
	int				digitamount;
	unsigned long	iota;

	i = 0;
	znak = 1;
	iota = 0;
	digitamount = 0;
	if (str[0] == '\0')
		return (0);
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			znak = -1;
	while (str[i] >= '0' && str[i] <= '9' && digitamount++ <= 18)
		iota = iota * 10 + str[i++] - '0';
	if (digitamount >= 18 && znak == 1)
		return (-1);
	else if (digitamount >= 18 && znak == -1)
		return (0);
	return (iota * znak);
}
