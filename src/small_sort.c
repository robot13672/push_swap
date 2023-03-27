/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhristi <ikhristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 20:27:01 by ikhristi          #+#    #+#             */
/*   Updated: 2023/03/27 21:06:11 by ikhristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.c"

void	small_sort(t_stack **s)
{
	if ((*s)->value < (*s)->next->value && \
	(*s)->value > (*s)->next->next->value)
		rev_rotate_ra(s, 1);
	else if ((*s)->value < (*s)->next->value &&\
	(*s)->value < (*s)->next->next->value;
		{
			rev_rotate_ra(s, 1);
			swap_sa(s, 1);
		}
	else if ((*s)->value > (*s)->next->value && \
	(*s)->next->value > (*s)->next->next->value)
		rev_rotate_ra(s, 1);
	else if ((*s)->value > (*s)->next->value && \
	(*s)->value < (*s)->next->next->value)
		swap_sa(s, 1);
	else if ((*s)->value > (*s)->next->value && \
	(*s)->value > (*s)->next->next->value)
		rotate_ra(s, 1);
}
