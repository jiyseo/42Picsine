/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyseo <jiyseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 03:23:58 by jiyseo            #+#    #+#             */
/*   Updated: 2021/09/25 20:56:44 by jiyseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_comma(int flag)
{
	if (flag == 1)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	comb_recursive(int i, int n)
{	
	if (while)
	while (num_arr[i] <= 'a')
	{
		
	}	
}

void	recursive_comb()
{

}
void	ft_print_combn(int n)
{
	char	num_arr[10];
	 int	i;
	 int	a;

	i = 0;
	a = 9 - n + 1;
	num_array[i] = '0';
	
}

int	main(void)
{
	int	a;
	a = 2;
	ft_print_combn(a);
}
