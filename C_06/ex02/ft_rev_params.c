/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyseo <jiyseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 17:26:26 by jiyseo            #+#    #+#             */
/*   Updated: 2021/09/25 16:28:53 by jiyseo           ###   ########.fr       */
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
	while (argc > 1)
	{
		ft_print(argv[argc - 1]);
		argc--;
		write(1, "\n", 1);
	}
}
