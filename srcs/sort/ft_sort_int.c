/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 09:23:09 by fraalmei          #+#    #+#             */
/*   Updated: 2023/02/15 15:46:01 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

	//llama al algoritmo determinado dependiendo del tamaño de la pila
	// call the algorithm dependind of the size of the stack
int	ft_sort_int(t_lst **list_a, t_lst **list_b)
{
	if (ft_lstsiz(*list_a) <= 3 && ft_sorted(list_a) == 0)
		ft_sort_3(list_a);
	else if (ft_lstsiz(*list_a) <= 5 && ft_sorted(list_a) == 0)
		ft_sort_5(list_a, list_b);
	else if (ft_lstsiz(*list_a) > 5 && ft_sorted(list_a) == 0)
		ft_sort_5mor(list_a, list_b, ft_lstsiz(*list_a));
	ft_print_mov ('\0', '\0', '\0');
	return (0);
}
