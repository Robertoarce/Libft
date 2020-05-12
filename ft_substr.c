/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarce <rarce@42.student.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/10 12:46:53 by rarce             #+#    #+#             */
/*   Updated: 2020/05/12 19:53:13 by rarce            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	unsigned int	counter;

	if (!s || start > (unsigned int)ft_strlen(s)
			|| start + len > (unsigned int)ft_strlen(s))
		return (NULL);
	if (!(ptr = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	counter = 0;
	while (len > 0)
	{
		ptr[counter] = s[start + counter];
		counter++;
		len--;
	}
	return (ptr);
}
