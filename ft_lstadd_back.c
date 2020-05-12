/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarce <rarce@42.student.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 18:28:48 by rarce             #+#    #+#             */
/*   Updated: 2020/05/12 20:15:46 by rarce            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *element;

	if (new == NULL)
		return ;
	element = *lst;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	while (element && element->next)
	{
		element = element->next;
	}
	element->next = new;
}
