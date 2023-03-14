/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 09:43:21 by fraalmei          #+#    #+#             */
/*   Updated: 2023/03/14 10:39:00 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

	// exit function
	// if it take a 0 print "Error" in the stderr
int	exerr(int i)
{
	if (i == 0)
		printf ("Error\n");
	exit (0);
}
	//system ("leaks push_swap");

/* void leaks()
{
	system ("leaks -q push_swap");
}
atexit(leaks); */

int	main(int argc, char *argv[])
{
	t_lst	*list_a;
	t_lst	*list_b;
	int		i;

	if (argc == 1)
		return (exerr(1));
	i = ft_getargs(&list_a, argv);
	if (ft_lstduplicates(list_a) || i == 0)
		return (exerr(0));
	list_b = NULL;
	ft_sort_int(&list_a, &list_b);
	return (exerr(1));
}
