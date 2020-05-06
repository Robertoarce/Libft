/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarce <rarce@42.student.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 16:26:09 by rarce             #+#    #+#             */
/*   Updated: 2020/05/05 18:28:43 by rarce            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	counter;
	char	*p;

	p = (char *)str;
	counter = 0;
	while (counter < n)
	{
		p[counter] = c;
		counter++;
	}
	return (str);
}
