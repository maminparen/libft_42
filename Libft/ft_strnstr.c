/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzona <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 12:54:50 by hzona             #+#    #+#             */
/*   Updated: 2021/10/07 16:34:40 by hzona            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		k;
	size_t		temp;
	char		*test;

	i = 0;
	test = (char *)big;
	if (little[i] == '\0')
		return (&test[i]);
	while (big[i] && i < len)
	{
		k = 0;
		temp = i;
		while (little[k] && big[temp] == little[k] && big[temp] && temp < len)
		{
			temp++;
			k++;
		}
		if (little[k] == '\0')
			return (&test[i]);
		i++;
	}
	return ((void *)0);
}
