/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarce <rarce@42.student.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 15:53:25 by rarce             #+#    #+#             */
/*   Updated: 2020/05/14 11:19:10 by rarce            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*a;
	char	*b;
	size_t	counter;

	a = (char *)s1;
	b = (char *)s2;
	counter = 0;
	while (n > counter)
	{
		if (a[counter] != b[counter])
			return ((unsigned char)a[counter] - (unsigned char)b[counter]);
		counter++;
	}
	return (0);
}
