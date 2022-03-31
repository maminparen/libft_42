/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzona <hzona@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 21:36:50 by hzona             #+#    #+#             */
/*   Updated: 2021/10/08 10:47:33 by hzona            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (new != (void *)0)
	{
		temp = *lst;
		if (temp == (void *)0)
			*lst = new;
		else
		{
			while (temp->next != (void *)0)
				temp = temp->next;
			temp->next = new;
		}
	}
}
