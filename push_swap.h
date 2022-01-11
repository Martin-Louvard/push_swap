/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malouvar <malouvar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:41:46 by malouvar          #+#    #+#             */
/*   Updated: 2022/01/05 13:12:50 by malouvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdio.h>

int		is_dup(t_list *a, int temp);
int		is_invalid(char *arg);
int		has_errors(char **argv, int argc, t_list **a);
int		has_errors_arg2(char **argv, int argc, t_list **a);
void	sa(t_list **stack, int ss);
void	sb(t_list **stack, int ss);
void	ss(t_list **a, t_list **b);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
void	ra(t_list **a, int rr);
void	rb(t_list **b, int rr);
void	rr(t_list **a, t_list **b);
void	rra(t_list **a, int rrr);
void	rrb(t_list **b, int rrr);
void	rrr(t_list **a, t_list **b);
int		a_is_sorted(t_list *a);
void	print_list(t_list *stack);
void	sort_radix(t_list *a, t_list *b, int size, int max_bits);
void	sort_3(t_list **a);
void	sort_4(t_list **a, t_list **b);
void	sort_5(t_list **a, t_list **b);
void	quicksort(int *arr, int first, int last);
int		partition(int *arr, int low, int high);
void	swap(int *a, int *b);
t_list	*find_first(t_list *a);
void	free_args(char **args);
#endif
