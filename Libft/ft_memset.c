/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzona <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:27:20 by hzona             #+#    #+#             */
/*   Updated: 2021/10/07 16:36:18 by hzona            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *memptr, int val, size_t num)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)memptr;
	i = 0;
	while (i < num)
	{
		str[i] = (char)val;
		i++;
	}
	return (memptr);
}
