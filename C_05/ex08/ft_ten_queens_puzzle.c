/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyseo <jiyseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 20:57:29 by jiyseo            #+#    #+#             */
/*   Updated: 2021/09/26 02:48:02 by jiyseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_print(int	*q_row)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		ft_putchar(q_row[i] + '0');
		i++;
	}
	ft_putchar('\n');
}

int	ft_test(int	cur_col, int	cur_row, int	*q_row)
{
	int	past_col;

	past_col = 0;
	while (past_col < cur_col)
	{
		if (q_row[past_col] == cur_row)
			return (1);
		if (q_row[past_col] - (cur_col - past_col) == cur_row)
			return (1);
		if (q_row[past_col] + (cur_col - past_col) == cur_row)
			return (1);
		past_col++;
	}
	return (0);
}

void	ft_recursive(int	cur_col, int	*q_row, int	*cnt)
{
	int	cur_row;

	cur_row = 0;
	while (cur_row < 10)
	{
		if (ft_test(cur_col, cur_row, q_row))
			cur_row++;
		else
		{
			q_row[cur_col] = cur_row++;
			if (cur_col == 9)
			{
				*cnt += 1;
				ft_print(q_row);
			}
			ft_recursive(cur_col + 1, q_row, cnt);
		}		
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	q_row[10];
	int	cnt;

	cnt = 0;
	ft_recursive(0, q_row, &cnt);
	return (cnt);
}
