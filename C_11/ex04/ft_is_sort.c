/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyseo <jiyseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 11:57:03 by jiyseo            #+#    #+#             */
/*   Updated: 2021/09/29 16:04:54 by jiyseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	result;

	result = 1;
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			result = 0;
		i++;
	}
	i = 0;
	if (result != 1)
	{
		result = 1;
		while (i < length - 1)
		{
			if (f(tab[i], tab[i + 1]) < 0)
				result = 0;
			i++;
		}
	}
	return (result);
}
