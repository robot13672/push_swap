/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_cost_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhristi <ikhristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:59:59 by ikhristi          #+#    #+#             */
/*   Updated: 2023/03/30 18:05:34 by ikhristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

int	ft_check_lowest_rotations(t_stack *a, int value)
{

}

int	ft_find_place(t_stack *a, int value)
{
	t_stack	*cur;
	int		low;
	int		is_max;

	is_max = 1;
	cur = a;
	low = INT16_MAX;
	while (cur)
	{
		if (cur->value > value)//Should end this
	}
}