/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhristi <ikhristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 13:49:46 by ikhristi          #+#    #+#             */
/*   Updated: 2023/03/15 17:02:40 by ikhristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

void	ft_stack_push(t_stack **a, t_stack **b, char output)//Функция убирает верхний элемент со стеув а, и добавляет его на вершину стека б
{
	t_stack	*temp;

	if (*a)
	{
		temp = (*a)->next;
		(*a)->next = *b;
		*b = *a;
		*a = temp;
	}
	if (output)
		ft_printf("p%c\n", output);
}

void	ft_stack_swap(t_stack **stack, char output)//Функция меняет местами верхний и следующий элемент стека
{
	t_stack	*temp;

	if (*stack && (*stack)->next)
	{
		temp = (*stack);
		(*stack) = (*stack)->next;
		temp->next = (*stack)->next;
		(*stack)->next = temp;
	}
	if (output)
		ft_printf("s%c\n", output);
}

void	ft_stack_rotate(t_stack **stack, char output)//Функция перекидывает верхний элемент стека в самый низ
{
	t_stack	*last;
	t_stack	*tmp;

	if (*stack && (*stack)->next)
	{
		last = ft_stack_last(*stack);
		last->next = (*stack);
		tmp = (*stack);
		(*stack) = (*stack)->next;
		tmp->next = NULL;
	}
	if (output)
		ft_printf("r%c",output);
}

void	ft_stack_reverse_rotate(t_stack **stack, char output)//Функция перекидывает нижний элемент стека в самый верх
{
	t_stack	*last;
	t_stack	*penultimate;

	if (*stack && (*stack)->next)
	{
		last = ft_stack_last(*stack);
		penultimate = ft_stack_penultimate(*stack);
		last->next = *stack;
		(*stack) = last;
		penultimate->next = NULL;
	}
	if (output)
		ft_printf("rr%c\n", output);
}
