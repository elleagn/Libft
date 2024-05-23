/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 08:18:16 by gozon             #+#    #+#             */
/*   Updated: 2024/05/23 09:16:21 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_powten(long int nbr)
{
	int	pow;

	pow = 1;
	if (nbr < 0)
		nbr = nbr * -1;
	while (nbr / pow > 9)
		pow = pow * 10;
	return (pow);
}

char	*ft_initres(size_t *i, long int *nbr, int powten)
{
	char	*res;

	if (*nbr < 0)
	{
		res = malloc((powten + 2) * sizeof(char));
		if (res == NULL)
			return (NULL);
		res[0] = '-';
		*nbr = *nbr * -1;
		*i = *i + 1;
	}
	else
	{
		res = malloc((powten + 1) * sizeof(char));
		if (res == NULL)
			return (NULL);
	}
	return (res);
}

char	*ft_itoa(int n)
{
	char		*res;
	int			powten;
	long int	nbr;
	size_t		i;

	nbr = n;
	powten = ft_powten(nbr);
	i = 0;
	res = ft_initres(&i, &nbr, powten);
	while (powten)
	{
		res[i] = (nbr / powten) + '0';
		nbr = nbr % powten;
		powten = powten / 10;
		i++;
	}
	res[i] = '\0';
	return (res);
}
