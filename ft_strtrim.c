/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarce <rarce@42.student.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 08:43:40 by rarce             #+#    #+#             */
/*   Updated: 2020/05/12 18:33:56 by rarce            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_char_in_set(char const c, char const *set)
{
	while (*set)
	{
		if (c == *set && ft_isascii(c))
			return (1);
		set++;
	}
	return (0);
}

static size_t	ft_count_letters(char const *s, char const *set)
{
	int	counter;
	int	letters;

	letters = 0;
	counter = 0;
	while (s[counter] != '\0' && ft_char_in_set(s[counter], set))
	{
		counter++;
		letters++;
	}
	if (counter < ft_strlen(s))
	{
		counter = ft_strlen(s) - 1;
		while (counter >= 0 && ft_char_in_set(s[counter], set))
		{
			counter--;
			letters++;
		}
	}
	return (letters);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	counter;
	size_t	start;
	size_t	size;

	counter = 0;
	start = 0;
	if (!s1 || !set)
		return (NULL);
	size = ft_strlen(s1) - ft_count_letters(s1, set);
	if (!(ptr = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (s1[counter] != '\0' && ft_char_in_set(s1[counter], set))
		counter++;
	while (start < size)
	{
		ptr[start] = s1[counter];
		start++;
		counter++;
	}
	ptr[start] = '\0';
	return (ptr);
}
