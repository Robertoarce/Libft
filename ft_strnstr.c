/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarce <rarce@42.student.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 11:11:36 by rarce             #+#    #+#             */
/*   Updated: 2020/05/07 15:04:12 by rarce            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *stack, const char *needle, size_t size)
{
	size_t counter;
	size_t start;

	counter = 0;
	if (needle[0] == '\0')
		return ((char *)stack);
	while (stack[counter] != '\0' && size > counter)
	{
		if (stack[counter] == needle[0])
		{
			start = 0;
			while (stack[counter + start] == needle[start]
					&& counter + start < size)
			{
				start++;
				if (needle[start] == '\0')
					return ((char *)&stack[counter]);
			}
		}
		counter++;
	}
	return (NULL);
}
