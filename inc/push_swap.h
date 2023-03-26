/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhristi <ikhristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:29:43 by ikhristi          #+#    #+#             */
/*   Updated: 2023/03/26 22:47:40 by ikhristi         ###   ########.fr       */
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
//push
void		push_pa(t_stack **a, t_stack **b);
void		push_pb(t_stack **a, t_stack **b);
//stack_utils
void		ft_stack_add(t_stack **stack, t_stack *new);
t_stack		*ft_newstack(int value);
int			ft_stack_size(t_stack *stack);
t_stack		*ft_stack_last(t_stack *stack);
t_stack		*ft_stack_penultimate(t_stack *stack);
//stack_utils_2
int			ft_stack_lowest_value(t_stack *stack);
void		ft_print_stack(t_stack *stack);
int			*ft_stack_to_arr(t_stack *stack);
int			ft_is_sorted_stack(t_stack *stack);
//swap
void		swap_sa(t_stack **stack);
void		swap_sb(t_stack **stack);
void		swap_ss(t_stack **a, t_stack **b);
//rotate
void		rotate_ra(t_stack **stack);
void		rotate_rb(t_stack **stack);
void		rotate_rr(t_stack **a, t_stack *b);
//rev_rotate
void		rev_rotate_ra(t_stack **stack);
void		rev_rotete_rb(t_stack **stack);
void		rev_rotete_rr(t_stack **a, t_stack **b);
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

#endif