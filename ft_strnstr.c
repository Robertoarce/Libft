/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarce <rarce@42.student.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 11:11:36 by rarce             #+#    #+#             */
/*   Updated: 2020/04/27 17:40:19 by rarce            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lenght(const char *s)
{
	int counter;

	counter = 0;
	while (s[counter])
		counter++;
	return (counter);
}

char	*ft_strnstr(const char *stack, const char *needle, int size)
{
	int counter;
	int start;

	counter = 0;
	if (ft_lenght(needle) == 0 || size == 0)
		return ((char *)stack);
	while (stack[counter] != '\0')
	{
		if (stack[counter] == needle[0])
		{
			start = 0;
			while (stack[counter + start] == needle[start] && start < size)
				start++;
			if (start == size)
				return ((char *)&stack[counter]);
		}
		counter++;
	}
	return (NULL);
}
