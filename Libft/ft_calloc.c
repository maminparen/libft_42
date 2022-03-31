/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzona <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:42:37 by hzona             #+#    #+#             */
/*   Updated: 2021/10/06 17:16:40 by hzona            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	char	*arr;

	arr = malloc(number * size);
	if (arr == (void *)0)
		return ((void *)0);
	ft_bzero(arr, number * size);
	return (arr);
}
