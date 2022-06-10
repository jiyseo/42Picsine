/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyseo <jiyseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 17:26:11 by jiyseo            #+#    #+#             */
/*   Updated: 2021/09/25 16:28:46 by jiyseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char	*str)
{
	while (*str != '\0')
	{
		write(1, str++, 1);
	}
}

int	main(int	argc, char	**argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_print(argv[i]);
		i++;
		write(1, "\n", 1);
	}
}
