/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzona <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 09:53:49 by hzona             #+#    #+#             */
/*   Updated: 2021/10/07 21:03:28 by hzona            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	k;

	if (!s1)
		return ((void *)0);
	i = 0;
	if (s1 == set)
		return ((void *)0);
	while (s1[i] && ft_strchr(set, s1[i]))
	{
		i++;
	}
	k = ft_strlen(s1);
	while (k >= i && ft_strchr(set, s1[k]))
	{
		k--;
	}
	return (ft_substr(s1, i, k - i + 1));
}
