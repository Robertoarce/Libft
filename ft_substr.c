/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarce <rarce@42.student.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/10 12:46:53 by rarce             #+#    #+#             */
/*   Updated: 2020/08/26 15:37:59 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	unsigned int	counter;

	if (!s)
		return (NULL);
	if (start > (unsigned int)ft_strlen(s))
		len = 0;
	if (!(ptr = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	counter = 0;
	while (len > 0 && s[start + counter])
	{
		ptr[counter] = s[start + counter];
		counter++;
		len--;
	}
	ptr[counter] = '\0';
	return (ptr);
}
