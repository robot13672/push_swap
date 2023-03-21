/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   long_inc_seq.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhristi <ikhristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:24:35 by ikhristi          #+#    #+#             */
/*   Updated: 2023/03/21 19:01:57 by ikhristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

static int	*lis_sub(int size, int lis_length, int *arr, int *index)
{
	int i =
}

static int get_lis(int *arr, int size, int *lis_size)
{

}

static int	int_in_arr(int n, int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (arr[i] == n)
			return (1);
		i++;
	}
	return (0);
}

void	push_no_lis(t_stack **a, t_stack **b)
{
	int		*lis;
	int		lis_size;
	int		i;
	int		*arr;

	i = ft_stack_size(*a);
	rotate_on_top(a, ft_stack_lowest_value(*a));
	if (ft_is_sorted_stack(*a))
		return ;
	arr = ft_stack_to_arr(*a);
	lis = get_lis(arr, i, lis_size)
}
