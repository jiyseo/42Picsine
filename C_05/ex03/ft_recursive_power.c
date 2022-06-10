/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyseo <jiyseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 18:35:33 by jiyseo            #+#    #+#             */
/*   Updated: 2021/09/26 01:06:33 by jiyseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int	nb, int	power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
