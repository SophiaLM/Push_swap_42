/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soluna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 01:14:20 by soluna            #+#    #+#             */
/*   Updated: 2025/04/24 01:14:22 by soluna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_three(t_list **lst)
{
	t_list	*max;

	max = find_max(*lst);
	if (max == *lst)
		ra(lst, false);
	else if ((*lst)->next == max)
		rra(lst, false);
	if ((*lst)->nbr > (*lst)->next->nbr)
		sa(lst, false);
}
