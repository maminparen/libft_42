/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzona <hzona@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 11:01:44 by hzona             #+#    #+#             */
/*   Updated: 2021/10/11 14:48:12 by hzona            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				i;
	int				minus;
	unsigned long	num;

	i = 0;
	num = 0;
	while (ft_isspace(str[i]))
		i++;
	minus = 1;
	if (str[i] == '-')
		minus = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		if ((num > __LONG_MAX__ || (num == __LONG_MAX__ && (str[i] - '0') > 7))
			&& minus == 1)
			return (-1);
		else if ((num > __LONG_MAX__ || (num == __LONG_MAX__
					&& (str[i] - '0') > 8)) && minus == -1)
			return (0);
		num = num * 10 + (str[i++] - '0');
	}
	return (minus * (int)num);
}
