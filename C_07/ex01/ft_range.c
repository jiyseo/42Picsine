/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyseo <jiyseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 12:38:53 by jiyseo            #+#    #+#             */
/*   Updated: 2021/09/27 16:17:18 by jiyseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*num;
	int	range;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	range = max - min;
	num = (int *)malloc(sizeof(int) * range);
	if (!(num))
		return (0);
	while (i < range)
	{
		num[i] = min + i;
		i++;
	}
	return (num);
}
