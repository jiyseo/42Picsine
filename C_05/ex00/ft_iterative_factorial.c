/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyseo <jiyseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 18:34:40 by jiyseo            #+#    #+#             */
/*   Updated: 2021/12/13 21:16:46 by jiyseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int	nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = 1;
	while (nb)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
