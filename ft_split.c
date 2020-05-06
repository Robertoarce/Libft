/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarce <rarce@42.student.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 10:33:45 by rarce             #+#    #+#             */
/*   Updated: 2020/05/05 19:37:54 by rarce            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_substra(char const *s, int start, int end, char *tab)
{
	int counter;

	counter = 0;
	while (start != end && s[start] != '\0')
		tab[counter++] = s[start++];
	tab[counter] = '\0';
}

char		**ft_split(char const *s, char c)
{
	int		counterx;
	int		start;
	int		i;
	char	**ptr;

	ptr = (char **)malloc(sizeof(char *) * (ft_strlen(s) + 1));
	if (ptr == NULL)
		return (NULL);
	i = -1;
	counterx = 0;
	start = 0;
	while (i++ < ft_strlen(s))
	{
		if (s[i] == c || s[i] == '\0')
		{
			ptr[counterx] = (char *)malloc(sizeof(char) * ((i - start) + 1));
			ft_substra(s, start, i, ptr[counterx]);
			counterx++;
			start = i + 1;
		}
	}
	ptr[counterx] = (char *)malloc(sizeof(char) * 1);
	ptr[counterx][0] = '\0';
	return (ptr);
}
