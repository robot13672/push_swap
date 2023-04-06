/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhristi <ikhristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 18:06:40 by ikhristi          #+#    #+#             */
/*   Updated: 2023/04/06 19:10:22 by ikhristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	b = NULL;
	if (argv < 2 || (argc == 2 && argv[1][0] == '\0'))
		throw_error("Error");
	if (argc == 2 && !arg_is_number(argv[1]))
		a = parse_str(argv[1]);
	else
		a = parse_arr(argc, argv);
	push_swap_check(&a, &b);
	list_clear(&a);
	return (0);
}