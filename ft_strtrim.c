/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarce <rarce@42.student.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 08:43:40 by rarce             #+#    #+#             */
/*   Updated: 2020/05/05 19:27:23 by rarce            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_exists(char const *set, char c)
{
	int counter;

	counter = 0;
	while (set[counter] != '\0')
	{
		if (set[counter] == c)
			return (1);
		counter++;
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		counter;
	int		counter2;
	char	*ptr;

	ptr = (char *)malloc(sizeof(char *) * (ft_strlen(s1) + 1));
	if (ptr == NULL)
		return (NULL);
	counter = 0;
	counter2 = 0;
	while (s1[counter] != '\0')
	{
		if (!ft_exists(set, s1[counter]))
			ptr[counter2++] = s1[counter];
		counter++;
	}
	ptr[counter2] = '\0';
	return (ptr);
}
