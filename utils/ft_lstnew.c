/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soluna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 01:25:40 by soluna            #+#    #+#             */
/*   Updated: 2025/04/24 01:26:33 by soluna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_lstnew(int nbr)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->nbr = nbr;
	new->index = -1;
	new->cost = 0;
	new->median = false;
	new->cheap = false;
	new->target_node = NULL;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}
