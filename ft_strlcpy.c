/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarce <rarce@42.student.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 13:29:42 by rarce             #+#    #+#             */
/*   Updated: 2020/05/07 17:24:35 by rarce            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len(const char *s)
{
	size_t	counter;

	counter = 0;
	while (s[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

size_t			ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	counter;
	size_t	src_len;

	if (!dst || !src)
		return (0);
	src_len = (ft_len(src));
	if (size == 0)
		return (src_len);
	counter = 0;
	while (counter + 1 < size && src[counter] != '\0')
	{
		dst[counter] = src[counter];
		counter++;
	}
	dst[counter] = '\0';
	return (src_len);
}
