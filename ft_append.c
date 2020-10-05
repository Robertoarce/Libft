/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_append.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 15:55:08 by titorium          #+#    #+#             */
/*   Updated: 2020/10/05 14:59:20 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_append(char **tab, char *ptr)
{
	int		counter;
	int		start;
	char	**aux;

	counter = 0;
	while (tab[counter] != NULL)
		counter++;
	aux = ft_strnew2(counter + 1);
	start = 0;
	while (counter > start && tab[start] != NULL)
	{
		aux[start] = ft_strdup(tab[start]);
		start++;
	}
	aux[start] = ft_strdup(ptr);
	aux[start + 1] = NULL;
	ft_strfree(tab);
	return (&*aux);
}
