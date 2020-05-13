/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarce <rarce@42.student.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 14:58:47 by rarce             #+#    #+#             */
/*   Updated: 2020/05/13 11:04:04 by rarce            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	counter;

	d = (char *)dest;
	s = (char *)src;
	counter = 0;
	if (!dest && !src)
		return (NULL);
	while (counter < n)
	{
		d[counter] = s[counter];
		counter++;
	}
	return (d);
}
