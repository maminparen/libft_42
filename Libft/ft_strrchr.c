/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzona <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 11:01:00 by hzona             #+#    #+#             */
/*   Updated: 2021/10/06 11:12:36 by hzona            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int ch)
{
	int		i;
	char	*tmp;

	tmp = (char *)str;
	i = 0;
	while (tmp[i])
	{
		i++;
	}
	if ((char)ch == '\0')
		return (&tmp[i]);
	while (i >= 0)
	{
		if ((char)ch == tmp[i])
			return (&tmp[i]);
		i--;
	}
	return ((void *)0);
}
