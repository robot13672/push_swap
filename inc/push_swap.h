/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhristi <ikhristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:29:43 by ikhristi          #+#    #+#             */
/*   Updated: 2023/03/21 18:11:54 by ikhristi         ###   ########.fr       */
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
//inpust_utils
void		throw_error(t_list **stack);
char		**ft_strstrdup(char **str, int size);
size_t		ft_strstrlen(char *args);
void		ft_strstrfree(char **str);
//stack_utils
void		ft_stack_add(t_stack **stack, t_stack *new_);
t_stack		*ft_newstack(int value);
int			ft_stack_size(t_stack *stack);
t_stack		*ft_stack_last(t_stack *stack);
t_stack		*ft_stack_penultimate(t_stack *stack);
//stack_utils2
int			ft_stack_lowest_value(t_stack *stack);
void		ft_print_stack(t_stack *stack);
int			*ft_stack_to_arr(t_stack *stack);
void		ft_clear_stack(t_stack **stack);
int			ft_is_sorted_stack(t_stack *stack);
//stack_opetations
void		ft_stack_push(t_stack **a, t_stack **b, char output);
void		ft_stack_swap(t_stack **stack, char output);
void		ft_stack_rotate(t_stack **stack, char output);
void		ft_stack_reverse_rotate(t_stack **stack, char output);
//parse_input
t_stack		*parse_stack(int argc, char *argv[]);
static int	check_if_nums(int argc, char **argv);
//atoi_error
long		ft_atoi_long(const char *value);
int			ft_atoi_error(t_stack **a, const char value);
//push_swap
void		ft_stack_sort_tree(t_stack **a);
void		ft_push_swap(t_stack **a);
//rotations
int			ft_check_lowest_rotations(t_stack *a, int value);
void		rotate_on_top(t_stack **a, int value);
//long_inc_seq
static int	int_in_arr(int n, int *arr, int size);
void		push_no_lis(t_stack **a, t_stack **b);
#endif