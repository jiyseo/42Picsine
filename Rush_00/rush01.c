/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyseo <jiyseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 16:24:31 by jiyseo            #+#    #+#             */
/*   Updated: 2021/09/12 20:27:58 by hyunkkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	print_char(int a, char c1, char c2, char c3);

void	print_char(int a, char c1, char c2, char c3)
{
	int	i;

	i = 1;
	while (i <= a)
	{
		if (i == 1)
		{
			ft_putchar(c1);
		}
		else if (i == a)
		{
			ft_putchar(c3);
		}
		else
		{
			ft_putchar(c2);
		}
		i ++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int		i;

	i = 1;
	if (x <= 0 && y <= 0)
	{
		return ;
	}
	while (i <= y)
	{
		if (i == 1)
		{
			print_char(x, '/', '*', '\\');
		}
		else if (i == y)
		{
			print_char(x, '\\', '*', '/');
		}
		else
		{
			print_char(x, '*', ' ', '*');
		}
		i++;
	}
}
