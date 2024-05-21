/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:29:12 by gozon             #+#    #+#             */
/*   Updated: 2024/05/21 15:03:07 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	k;

	i = 0;
	while (big[i] && i < len)
	{
		k = 0;
		while (big[i + k] == little[k] && big[i + k] && little[k]
			&& i + k < len)
			k++;
		if (!little[k])
			return ((char *) &big[i]);
		i++;
	}
	return (NULL);
}
