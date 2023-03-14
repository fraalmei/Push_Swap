/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 09:48:59 by fraalmei          #+#    #+#             */
/*   Updated: 2023/03/14 10:41:51 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

typedef struct t_list
{
	int				content;
	struct t_list	*next;
}					t_lst;

	// ft_algs_utils
int		ft_sort_frst(t_lst **list_a, t_lst **list_b, int len);
int		ft_sort_scnd(t_lst **list_a, t_lst **list_b, int len);
int		ft_sort_thrd(t_lst **list_a, t_lst **list_b, int len);
int		ft_split_in_3_a_to_b(t_lst **list_a, t_lst **list_b, int i[6]);
int		ft_split_in_3_b_to_a(t_lst **list_a, t_lst **list_b, int i[6]);

//int		ft_split_in_2_a_to_b(t_lst **list_a, t_lst **list_b, int i);

int		ft_sort_return_5_less(t_lst **list_a, t_lst **list_b, int len);
int		ft_sort_return_3(t_lst **list_a, t_lst **list_b, int len);

	// ft_radix
int		ft_radix_sort(t_lst **list_a, t_lst **list_b);

	// ft_sort__algs
int		ft_sort_3(t_lst **list_a);
int		ft_sort_5(t_lst **list_a, t_lst **list_b);
int		ft_sort_5mor(t_lst **list_a, t_lst **list_b, int len);
int		ft_sort_5mor_b(t_lst **list_a, t_lst **list_b, int len, int f_s);

int		ft_sort_2_or_less_top(t_lst **list, char nam_l);
int		ft_sort_3_top(t_lst **list, char nam_l);
//int		ft_sort_5_top(t_lst **list, char nam_l);
int		ft_sort_5_top(t_lst **l_a, t_lst **l_b, int len);

	// ft_sort_utils
int		ft_max(t_lst **list, int len);
int		ft_min(t_lst **list, int len);
int		ft_int_frst_third(int max, int min);
int		ft_int_scnd_third(int max, int min);
int		ft_int_mid(int max, int min);

int		ft_int_scnd_max(t_lst **list, int len);
int		ft_int_scnd_min(t_lst **list, int len);
int		ft_pos_max(t_lst **list, int len);
int		ft_pos_min(t_lst **list, int len);

	//ft_sorted_utils
int		ft_sorted(t_lst **list);
int		ft_sorted_n(t_lst **list, int n);
int		ft_rev_sorted(t_lst **list);
int		ft_rev_sorted_n(t_lst **list, int n);

	// ft_get_args
long	ft_atoi_long(const char *str);
int		ft_isint(char	*nbr);
int		ft_lstduplicates(t_lst *lst);
int		ft_get_split_args(char **c, t_lst **lst);
int		ft_getargs(t_lst **lst, char **argv);

	// ft_list_utils
t_lst	*ft_lstnw(int content);
t_lst	*ft_lstlst(t_lst *lst);
void	ft_lstadd_bck(t_lst **lst, t_lst *new);
void	ft_lstadd_frnt(t_lst **lst, t_lst *new);

int		ft_lstsiz(t_lst *lst);
int		ft_free_array_str(char **c, int l);
int		ft_free_lst(t_lst *list);

	// operations
int		s(t_lst **lst, char c);
int		p(t_lst **lst_a, t_lst **lst_b, char c);
int		r(t_lst **lst, char c);
int		rr(t_lst **lst_a, char c);

	// print_mov
void	ft_print_mov(char c1, char c2, char c3);

	// push_swap
int		exerr(int i);
//int		exerr(int i, t_lst *list);

	//ft_sort_int
int		ft_sort_int(t_lst **list_a, t_lst **list_b);

	//visualization
void	ft_lstprint(t_lst *lst);
void	ft_lstprintwo(t_lst *lst_a, t_lst *lst_b);

//
//
int		ft_dinamic_split(t_lst **list_a, t_lst **list_b, int len);

#endif
