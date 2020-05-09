/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarce <rarce@42.student.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 08:43:40 by rarce             #+#    #+#             */
/*   Updated: 2020/05/08 15:55:03 by rarce            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static int		is_in_set(char c, const char *set)
{
		while (*set)
				{
							if (c == *set)
											return (1);
									set++;
										}
			return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
		char	*str;
			size_t	start;
				size_t	end;
					size_t	len;

						start = 0;
							if (!s1 || !set)
										return (NULL);
								while (s1[start] != '\0' && is_in_set(s1[start], set))
											start++;
									if ((end = ft_strlen(s1) - 1) > 1)
											{
														while (is_in_set(s1[end], set) && end > 1)
																		end--;
															}
										if (start > end)
													len = start - end + 1;
											else
														len = end - start + 1;
												if (!(str = malloc(sizeof(char) * len + 1)))
															return (NULL);
													str = ft_substr((char *)s1, start, len);
														return (str);
}


/*
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
	
	if (!s1 || !set || !(ptr = (char *)malloc(sizeof(char *) * (ft_strlen(s1) + 1))))
		return (NULL);
	counter = 0;
	counter2 = 0;
	while (s1[counter] != '\0')
	{
		ptr[counter2] = s1[counter];
		counter2++;
		if (ft_exists(set, s1[counter]))
			counter2--;
		counter++;
	}
	ptr[counter2] = '\0';
	return (ptr);
}

*/
