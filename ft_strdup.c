/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarce <rarce@42.student.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 17:59:24 by rarce             #+#    #+#             */
/*   Updated: 2020/05/05 19:15:56 by rarce            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s)
{
	char	*ptr;
	int		counter;

	ptr = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (ptr == NULL)
		return (NULL);
	counter = 0;
	while (s[counter] != '\0')
	{
		ptr[counter] = s[counter];
		counter++;
	}
	ptr[counter] = '\0';
	return (ptr);
}
