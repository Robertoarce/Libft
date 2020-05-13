/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarce <rarce@42.student.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 15:53:25 by rarce             #+#    #+#             */
/*   Updated: 2020/05/13 13:05:58 by rarce            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			dif;
	size_t			counter;
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	dif = 0;
	counter = 0;
	if (n <= 0)
		return (0);
	while (n-- > 0 )
	{
		dif = dif + (unsigned char)a[counter] - (unsigned char)b[counter];
		counter++;
	}
	return (dif);
}
