/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarce <rarce@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/31 14:52:50 by rarce             #+#    #+#             */
/*   Updated: 2020/05/07 15:25:14 by rarce            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int counter;

	counter = ft_strlen(s);
	while (counter >= 0)
	{
		if (s[counter] == c)
			return ((char*)&s[counter]);
		counter--;
	}
	return (NULL);
}
