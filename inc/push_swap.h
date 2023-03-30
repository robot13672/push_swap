/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhristi <ikhristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:29:43 by ikhristi          #+#    #+#             */
/*   Updated: 2023/03/30 21:18:05 by ikhristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include "printf/ft_printf.h"
# include <limits.h>

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}	t_stack;

typedef struct s_transf_price
{
	int	moves[2];
	int	value;
}				t_transf_price;

//push
void		push_pa(t_stack **a, t_stack **b, int output);
void		push_pb(t_stack **a, t_stack **b, int output);
//stack_utils
void		ft_stack_add(t_stack **stack, t_stack *new);
t_stack		*ft_newstack(int value);
int			ft_stack_size(t_stack *stack);
t_stack		*ft_stack_last(t_stack *stack);
t_stack		*ft_stack_penultimate(t_stack *stack);
//stack_utils_2
int			ft_stack_lowest_value(t_stack *stack);
int			ft_stack_highest_value(t_stack *stack);
void		ft_print_stack(t_stack *stack);
int			*ft_stack_to_arr(t_stack *stack);
int			ft_is_sorted_stack(t_stack *stack);
//swap
void		swap_sa(t_stack **stack, int output);
void		swap_sb(t_stack **stack, int output);
void		swap_ss(t_stack **a, t_stack **b, int output);
//rotate
void		rotate_ra(t_stack **stack, int output);
void		rotate_rb(t_stack **stack, int output);
void		rotate_rr(t_stack **a, t_stack *b, int output);
//rev_rotate
void		rev_rotate_ra(t_stack **stack, int output);
void		rev_rotete_rb(t_stack **stack, int output);
void		rev_rotete_rr(t_stack **a, t_stack **b, int output);
//errors_utils
void		throw_error(char *str);
void		list_clear(t_stack **stack);
//parsing_input_utils
int			is_sign(char ch);
//parsing_input
int			arg_is_number(char *arg);
int			ft_input_check(char **arr);
//parsing
t_stack		*parse_str(char *str);
t_stack		*parse_arr(int argc, char **argv);
long int	long_atoi(char *str);
//small_sort
void		little_sort(t_stack **a, t_stack **b);
void		small_sort(t_stack **s);
//push_swap
void		push_swap_check(t_stack **a, t_stack **b);
//calc_cost_utils
int			ft_find_place(t_stack *a, int value);
int			ft_check_lowest_rotations(t_stack *a, int value);
#endif