/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarce <rarce@42.student.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/10 12:46:53 by rarce             #+#    #+#             */
/*   Updated: 2020/05/05 19:26:19 by rarce            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	counter;
	unsigned int	i;
	char			*ptr;

	ptr = (char *)malloc(sizeof(char *) * (len + 1));
	if (ptr == NULL || !s)
		return (NULL);
	counter = 0;
	i = 0;
	while (s[counter] != '\0')
	{
		if ((unsigned int)s[counter] == start)
		{
			while (i < len && s[counter + i] != '\0')
			{
				ptr[i] = s[counter + i];
				i++;
			}
			ptr[i] = '\0';
			i = 0;
		}
		counter++;
	}
	return (ptr);
}
