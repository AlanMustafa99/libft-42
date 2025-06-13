/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amustafa <amustafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 13:45:32 by amustafa          #+#    #+#             */
/*   Updated: 2025/06/10 17:35:08 by amustafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*pointer;

	pointer = malloc(count * size);
	if (!pointer)
	{
		return (NULL);
	}
	ft_bzero(pointer, count * size);
	return (pointer);
}
// #include <stdio.h>
// #include "libft.h"

// int main(void)
// {
//     int *arr;
//     size_t count = 5;

//     arr = (int *)ft_calloc(count, sizeof(int));
//     if (!arr)
//     {
//         printf("Memory allocation failed\n");
//         return 1;
//     }

//     for (size_t i = 0; i < count; i++)
//         printf("arr[%zu] = %d\n", i, arr[i]);

//     free(arr);
//     return 0;
// }