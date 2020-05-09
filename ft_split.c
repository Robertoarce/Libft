/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarce <rarce@42.student.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 10:33:45 by rarce             #+#    #+#             */
/*   Updated: 2020/05/08 14:41:23 by rarce            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	words_count(char const *s, char c)
{
	size_t words;
	size_t i;
	
	words = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			words++;
		i++;
	}
	return (words);
}

static void	ft_substract(char const *s, size_t start, size_t end, char *tab)
{
	int counter;

	counter = 0;
	while (start < end && s[start] != '\0')
	{
		tab[counter] = s[start + counter];
		counter++;
	}
	tab[counter] = '\0';
}

char		**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	counter_word;
	size_t	start;
	size_t	i;

	if (!(ptr = (char **)malloc(sizeof(char *) * (ft_strlen(s) + words_count(s,c) + 1))))
		return (NULL);
	i = -1;
	counter_word = 0;
	start = 0;
	while (i++ < (size_t)ft_strlen(s))
	{
		if (s[i] == c || s[i] == '\0')
		{
			if(!(ptr[counter_word] = (char *)malloc(sizeof(char) * ((i - start) + 1))))
				return (NULL);
			ft_substract(s, start, i, ptr[counter_word]);
			counter_word++;
			start = i + 1;
		}
	}
	ptr[counter_word] = (char *)malloc(sizeof(char) * 1);
	ptr[counter_word][0] = '\0';
	return (ptr);
}
