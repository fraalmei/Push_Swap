/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 09:11:35 by fraalmei          #+#    #+#             */
/*   Updated: 2023/02/10 14:46:43 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

	//algoritmo radix para mas de 5 elementos
	//mira el primer bit de todos los elementos
	//si el bit es 1 se mueve a la otra pila y se devuelve
	//repitiendo por cada bit
int	ft_radix_sort(t_lst **list_a, t_lst **list_b)
{
	int			f;
	int			g;
	int			i;

	i = 0;
	g = ft_lstsiz(*list_a);
	while (ft_sorted(list_a) == 0)
	{
		f = g;
		while (f != 0)
		{
			if ((*list_a)->content >> i & 1)
				r(list_a, 'a');
			else
				p(list_b, list_a, 'b');
			f--;
		}
		f = (i++, ft_lstsiz(*list_a));
		while (f != g)
			(p(list_a, list_b, 'a'), f++);
		if (i == 16)
			return (0);
	}
	return (0);
}
