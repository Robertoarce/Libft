/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarce <rarce@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/31 14:52:50 by rarce             #+#    #+#             */
/*   Updated: 2020/04/27 17:28:41 by rarce            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int counter;

	counter = 0;
	while (s[counter] != '\0')
		counter++;
	while (s[counter] != c && counter >= 0)
		counter--;
	return ((char*)&s[counter]);
}
