/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarce <rarce@42.student.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 16:16:55 by rarce             #+#    #+#             */
/*   Updated: 2020/05/06 11:52:54 by rarce            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*source;
	size_t			counter;

	if (s == NULL || n == 0)
		return (NULL);
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
