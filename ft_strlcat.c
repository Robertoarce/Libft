/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarce <rarce@42.student.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 13:28:59 by rarce             #+#    #+#             */
/*   Updated: 2020/05/06 17:40:28 by rarce            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	counter;
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);

	if (dest_len == 0)
		return (src_len);
	if (dest_len >= size)
		return (size + src_len);
	counter = 0;
	while ((size > (1 + counter + dest_len)) && src[counter] != '\0')
	{
		dest[dest_len + counter] = src[counter];
		counter++;
	}
	dest[dest_len + counter] = '\0';
	return (size + dest_len);
}
