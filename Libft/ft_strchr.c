/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzona <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 10:25:27 by hzona             #+#    #+#             */
/*   Updated: 2021/10/06 10:59:42 by hzona            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int ch)
{
	int		i;
	char	*tmp;

	tmp = (char *)str;
	i = 0;
	while (str[i])
	{
		if ((char)ch == str[i])
			return (&tmp[i]);
		i++;
	}
	if ((char)ch == '\0')
		return (&tmp[i]);
	return ((void *)0);
}
