/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarce <rarce@42.student.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 16:47:51 by rarce             #+#    #+#             */
/*   Updated: 2020/05/06 11:25:14 by rarce            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t			counter;

	ptr = malloc(nmemb * size);
	if (ptr == NULL || nmemb == 0 || size == 0)
		return (NULL);
	counter = 0;
	while (counter < size)
	{
		ptr[counter] = 0;
		counter++;
	}
	return (ptr);
}
