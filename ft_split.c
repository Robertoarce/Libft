/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarce <rarce@42.student.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 10:04:20 by rarce             #+#    #+#             */
/*   Updated: 2020/05/12 19:52:05 by rarce            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_len(const char *s, char c, int start)
{
	int counter;

	counter = 0;
	while (s[start + counter] != c && s[start + counter] != '\0')
		counter++;
	return (counter);
}

static int	count_words(char const *s, char c)
{
	int words;
	int counter;

	words = 0;
	counter = 0;
	if (c < 0)
		return (0);
	if (s[0] != c)
		words++;
	while (s[counter] && s[counter + 1])
	{
		if (s[counter] == c && s[counter + 1] != c)
			words++;
		counter++;
	}
	return (words);
}

char		**ft_split(char const *s, char c)
{
	char	**ptr;
	int		counter;
	int		start;

	if (!s)
		return (NULL);
	if (!(ptr = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1))))
		return (NULL);
	counter = 0;
	start = 0;
	while (s[counter])
	{
		if (s[counter] != c)
		{
			ptr[start] = ft_substr(s, counter, word_len(s, c, counter));
			counter = counter + word_len(s, c, counter);
			start++;
		}
		else
			counter++;
	}
	ptr[start] = NULL;
	return (ptr);
}
