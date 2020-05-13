/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarce <rarce@42.student.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/10 15:50:33 by rarce             #+#    #+#             */
/*   Updated: 2020/05/13 17:29:10 by rarce            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		counter;
	int		i;
	char	*ptr;

	if (!s1 || !(ptr = (char *)malloc(sizeof(char *)
					* (ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	counter = 0;
	i = 0;
	while (s1[counter] != '\0')
	{
		ptr[i] = s1[counter++];
		i++;
	}
	counter = 0;
	while (s2[counter] != '\0')
	{
		ptr[i] = s2[counter++];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
