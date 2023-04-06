/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhristi <ikhristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 21:26:15 by ikhristi          #+#    #+#             */
/*   Updated: 2023/04/06 19:09:53 by ikhristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

void	throw_error(char *str)
{
	ft_putendl_fd(str, 2);
	exit(1);
}

void	list_clear(t_stack **stack)
{
	t_stack	*cur;

	while (*stack)
	{
		cur = (*stack);
		(*stack) = (*stack)->next;
		free(cur);
	}
	*stack = NULL;
}
