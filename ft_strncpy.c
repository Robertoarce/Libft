/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 11:37:17 by titorium          #+#    #+#             */
/*   Updated: 2020/07/20 11:38:08 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, char *src, int size)
{
	int counter;
	int start;

	if (size == -1)
		size = ft_strlen(src);
	counter = 0;
	start = 0;
	while (dst[start] != '\0')
		start++;
	while (size-- && src[counter] != '\0')
	{
		dst[start + counter] = src[counter];
		counter++;
	}
	dst[start + counter] = '\0';
	return (dst);
}
