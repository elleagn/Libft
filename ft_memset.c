/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 10:18:51 by gozon             #+#    #+#             */
/*   Updated: 2024/05/20 12:20:43 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char *p;

	p = s;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char) c;
		i++;
	}
	return (s);
}