/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:04:11 by gozon             #+#    #+#             */
/*   Updated: 2024/05/24 15:02:27 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *_Nonnull dest, const void *_Nonnull src, size_t n)
{
	size_t				i;
	const unsigned char	*src_uc;
	unsigned char		*dest_uc;

	src_uc = src;
	dest_uc = dest;
	i = 0;
	while (i < n)
	{
		dest_uc[i] = src_uc[i];
		i++;
	}
	return (dest);
}
