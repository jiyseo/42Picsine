# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jiyseo <jiyseo@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/26 18:56:42 by jiyseo            #+#    #+#              #
#    Updated: 2021/09/26 18:59:46 by jiyseo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
rm -f libft.a
find . -name "*.c" -type f -maxdepth 1 -exec gcc -Wall -Werror -Wextra -c {} \;
ar -rcs libft.a *.o
find . -name "*.o" -type f -maxdepth 1 -delete

