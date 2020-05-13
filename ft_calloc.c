/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarce <rarce@42.student.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 16:47:51 by rarce             #+#    #+#             */
/*   Updated: 2020/05/13 17:25:45 by rarce            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;

	ptr = NULL;
	if (!(ptr = malloc(nmemb * size)))
		return (0);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
