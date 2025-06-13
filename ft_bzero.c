/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amustafa <amustafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 18:03:29 by amustafa          #+#    #+#             */
/*   Updated: 2025/06/10 17:32:43 by amustafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
// #include <stdio.h>
// #include "libft.h"

// int main(void)
// {
//     char str[] = "Hello, World!";
//     printf("Vor ft_bzero: %s\n", str);

//     ft_bzero(str, 5);

//     printf("Nach ft_bzero: %s\n", str);
//     return 0;
// }