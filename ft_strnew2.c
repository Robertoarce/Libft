/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 15:40:27 by titorium          #+#    #+#             */
/*   Updated: 2020/10/05 14:17:59 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strnew2(int size)
{
	char	**ptr;
	int		counter;

	counter = 0;
	if (!(ptr = (char **)malloc(sizeof(char*) * (size + 1))))
		return (NULL);
	ptr[0] = NULL;
	return (ptr);
}
