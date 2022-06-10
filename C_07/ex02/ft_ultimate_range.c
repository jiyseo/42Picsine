/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyseo <jiyseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 12:38:03 by jiyseo            #+#    #+#             */
/*   Updated: 2021/09/26 13:24:28 by jiyseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int	**range, int	min, int	max)
{
	int	*num;
	int	bound;
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	bound = max - min;
	num = (int *)malloc(bound * sizeof(int));
	if (!(num))
	{
		*range = 0;
		return (0);
	}
	*range = num;
	i = 0;
	while (i < bound)
	{
		num[i] = min + i;
		i++;
	}
	return (bound);
}
