/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarce <rarce@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/31 14:52:50 by rarce             #+#    #+#             */
/*   Updated: 2020/05/06 18:01:06 by rarce            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int counter;
	
	if (s == NULL)
		counter = 0;
	while (s[counter] != '\0')
	{
		if (s[counter] == c)
			return ((char*)&s[counter]);
		counter++;
	}
	return (NULL);
}
