/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 10:52:53 by gozon             #+#    #+#             */
/*   Updated: 2024/05/27 11:05:27 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	while ((*lst)->next)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		lst = next;
	}
	ft_lstdelone(*lst, del);
	(*lst) = NULL;
}
