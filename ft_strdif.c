/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdif.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 12:09:15 by titorium          #+#    #+#             */
/*   Updated: 2020/09/29 12:13:09 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strdif(const char *s1, const char *s2, int n)
{
	int	counter;

	counter = 0;
	if (n == 0)
		return (0);
	if (n == -1)
		n = ft_strlen(s1);
	while (s1[counter] != '\0' && s2[counter] != '\0'
			&& s1[counter] == s2[counter]
			&& counter < n - 1)
		counter++;
	return ((unsigned char)s1[counter] - (unsigned char)s2[counter]);
}
