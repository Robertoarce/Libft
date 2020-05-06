/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarce <rarce@42.student.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/10 15:50:33 by rarce             #+#    #+#             */
/*   Updated: 2020/04/27 18:28:49 by rarce            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		counter;
	int		i;
	char	*ptr;

	ptr = (char *)malloc(sizeof(char *) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (ptr == NULL)
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
