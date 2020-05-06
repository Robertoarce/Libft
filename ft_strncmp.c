/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarce <rarce@42.student.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 12:04:39 by rarce             #+#    #+#             */
/*   Updated: 2020/05/05 19:06:34 by rarce            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	counter;

	counter = 0;
	if (n == 0)
		return (0);
	while (s1[counter] != '\0' && s2[counter] != '\0'
			&& s1[counter] == s2[counter]
			&& counter < n - 1)
		counter++;
	return (s1[counter] - s2[counter]);
}
