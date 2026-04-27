/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_bench.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucelep <mucelep@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:33:50 by mucelep           #+#    #+#             */
/*   Updated: 2026/04/21 15:44:57 by mucelep          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	write_disorder(int integer, int decimal)
{
	putstr_fd("[bench] disorder: ", 2);
	putnbr_fd(integer,2);
	putstr_fd(".",2);
	putnbr_fd(decimal,2);
	putstr_fd("%\n",2);
}

void	write_total(int total)
{
	putstr_fd("[bench] totall_ops: ", 2);
	putnbr_fd(total, 2);
	putstr_fd("\n",2);
}

void	write_strategy()
{
	
}

void	write_op()
{
	
}