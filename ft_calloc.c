/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarce <rarce@42.student.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 16:47:51 by rarce             #+#    #+#             */
/*   Updated: 2020/05/07 17:47:44 by rarce            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;

	ptr = NULL;
	if (nmemb != 0 && size != 0)
	{
		if ((ptr = malloc(nmemb * (size + 1))) != NULL)
			ft_bzero(ptr, size);
	}
	return (ptr);
}
