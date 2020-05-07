/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarce <rarce@42.student.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 13:28:59 by rarce             #+#    #+#             */
/*   Updated: 2020/05/07 13:06:07 by rarce            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	counter;
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	counter = 0;
	if (size < 1)
		return (src_len);
	if (dst_len > size)
		return (src_len + size);
	while (src[counter] != '\0' && (counter + dst_len + 1) < size)
	{
		dst[counter + dst_len] = src[counter];
		counter++;
	}
	dst[counter + dst_len] = '\0';
	return (dst_len + src_len);
}
