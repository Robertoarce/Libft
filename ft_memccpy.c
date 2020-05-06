/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarce <rarce@42.student.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 15:49:18 by rarce             #+#    #+#             */
/*   Updated: 2020/05/05 19:45:29 by rarce            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			counter;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	counter = 0;
	while (counter < n)
	{
		d[counter] = s[counter];
		if (d[counter] == (unsigned char)c)
			return ((void *)(d + counter + 1));
		counter++;
	}
	return (NULL);
}
