/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarce <rarce@42.student.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 16:16:55 by rarce             #+#    #+#             */
/*   Updated: 2020/05/13 11:09:44 by rarce            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*source;
	size_t			counter;

	source = (unsigned char *)s;
	counter = 0;
	while (counter < n)
	{
		if (source[counter] == (unsigned char)c)
			return ((void *)(source + counter));
		counter++;
	}
	return (NULL);
}
