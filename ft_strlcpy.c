/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarce <rarce@42.student.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 15:28:33 by rarce             #+#    #+#             */
/*   Updated: 2020/04/27 17:34:04 by rarce            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lenght(char *s)
{
	int counter;

	counter = 0;
	while (s[counter])
		counter++;
	return (counter);
}

char	*ft_strlcpy(char *dest, const char *src, int size)
{
	int		counter;
	int		start;
	char	*p;

	p = dest;
	start = ft_lenght(dest);
	counter = 0;
	while (counter < size && src[counter] != '\0' && dest[counter] != '\0')
	{
		dest[start + counter] = src[counter];
		counter++;
	}
	dest[start + counter] = '\0';
	return (p);
}
