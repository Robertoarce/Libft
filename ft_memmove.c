/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarce <rarce@42.student.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 11:56:15 by rarce             #+#    #+#             */
/*   Updated: 2020/05/06 13:38:31 by rarce            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			counter;

	if (dest == NULL || src == NULL)
		return (NULL);
	counter = 0;
	if (dest < src)
	{
		while (counter < n)
		{
			((unsigned char *)dest)[counter] = ((unsigned char *)src)[counter];
			counter++;
		}
	}
	else
	{
		while (n > 0)
		{
			((unsigned char *)dest)[n - 1] = ((unsigned char*)src)[n - 1];
			n--;
		}
	}
	return ((void *)dest);
}
