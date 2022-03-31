/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzona <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 17:01:05 by hzona             #+#    #+#             */
/*   Updated: 2021/10/09 11:27:24 by hzona            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*res;
	size_t		i;

	if (!s)
		return ((void *)0);
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	i = 0;
	res = malloc(sizeof(char) * (len + 1));
	if (res == (void *)0)
		return ((void *)0);
	while (i < len)
	{
		if (s[start + i] != '\0' && start < ft_strlen(s))
			res[i] = s[start + i];
		else
			res[i] = '\0';
		i++;
	}
	res[i] = '\0';
	return (res);
}
