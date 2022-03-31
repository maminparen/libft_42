/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzona <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:02:58 by hzona             #+#    #+#             */
/*   Updated: 2021/10/07 17:07:59 by hzona            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destptr, const void *srcptr, size_t num)
{
	unsigned char	*dest;
	unsigned char	*src;
	size_t			i;

	if (!destptr && !srcptr)
		return (destptr);
	i = 0;
	dest = (unsigned char *)destptr;
	src = (unsigned char *)srcptr;
	while (i < num)
	{
		dest[i] = src[i];
		i++;
	}
	return (destptr);
}
