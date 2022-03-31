/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzona <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 10:05:17 by hzona             #+#    #+#             */
/*   Updated: 2021/10/07 19:07:47 by hzona            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	k;

	i = 0;
	while (dst[i] && i < size)
		i++;
	k = i;
	while (src[i - k] && i + 1 < size)
	{
		dst[i] = src[i - k];
		i ++;
	}
	if (k < size)
		dst[i] = '\0';
	return (k + ft_strlen(src));
}
