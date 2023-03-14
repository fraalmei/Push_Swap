/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 15:13:09 by fraalmei          #+#    #+#             */
/*   Updated: 2023/02/13 09:59:48 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

	// sa (swap a) - swap the first 2 elements at the top of stack a

int	s(t_lst **lst, char c)
{
	t_lst		*swap1;
	t_lst		*swap2;

	if (!lst || ft_lstsiz(*lst) <= 1)
		return (0);
	swap1 = *lst;
	swap2 = swap1->next;
	swap1->next = swap2->next;
	swap2->next = swap1;
	*lst = swap2;
	ft_print_mov ('s', c, '\0');
	return (1);
}

	// pa (push a) - take the first element at the top b and put it at the top a
int	p(t_lst **lst_a, t_lst **lst_b, char c)
{
	t_lst	*swap1;
	t_lst	*swap2;

	swap1 = *lst_a;
	swap2 = *lst_b;
	if (lst_b == NULL)
		return (0);
	if (swap2->next)
		*lst_b = swap2->next;
	else
		*lst_b = NULL;
	swap2->next = swap1;
	*lst_a = swap2;
	ft_print_mov ('p', c, '\0');
	return (1);
}

	// ra (rotate a) - shift up all elements of stack a by 1
int	r(t_lst **lst, char c)
{
	t_lst	*swap;

	if (ft_lstsiz(*lst) == 1)
		return (0);
	swap = *lst;
	*lst = swap->next;
	swap->next = NULL;
	ft_lstadd_bck(lst, swap);
	ft_print_mov ('r', c, '\0');
	return (1);
}

	// rra (reverse rotate a) - shift down all the elements of stack a by 1
int	rr(t_lst **lst_a, char c)
{
	t_lst	*swap;
	int		i;

	i = ft_lstsiz(*lst_a);
	if (i == 1)
		return (0);
	swap = ft_lstlst(*lst_a);
	ft_lstadd_frnt(lst_a, swap);
	while (--i)
		swap = swap->next;
	swap->next = NULL;
	ft_print_mov ('r', 'r', c);
	return (1);
}
