/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzona <hzona@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 10:48:07 by hzona             #+#    #+#             */
/*   Updated: 2021/10/08 10:57:56 by hzona            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*begin;

	begin = lst;
	if (begin)
	{
		tmp = begin->next;
		if (begin->content)
			del(begin->content);
		free(begin);
		begin = tmp;
	}
}
