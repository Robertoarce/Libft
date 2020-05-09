/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarce <rarce@42.student.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 11:11:36 by rarce             #+#    #+#             */
/*   Updated: 2020/05/07 19:04:12 by rarce            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t counter;
	size_t start;

	counter = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[counter] != '\0' && len > counter)
	{
		if (big[counter] == little[0])
		{
			start = 0;
			while (big[counter + start] == little[start]
					&& counter + start < len)
			{
				start++;
				if (little[start] == '\0')
					return ((char *)&big[counter]);
			}
		}
		counter++;
	}
	return (NULL);
}
