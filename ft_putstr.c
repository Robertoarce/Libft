/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 19:00:38 by titorium          #+#    #+#             */
/*   Updated: 2020/07/24 19:01:44 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putstr(char *s)
{
	int counter;

	counter = 0;
	while (s && s[counter] != '\0')
	{
		ft_putchar(s[counter]);
		counter++;
	}
}
