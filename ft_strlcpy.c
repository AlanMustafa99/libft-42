/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amustafa <amustafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 15:12:11 by amustafa          #+#    #+#             */
/*   Updated: 2025/06/10 18:32:02 by amustafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}
// #include <stdio.h>
// #include <stddef.h> // Für size_t

// // Annahme: Deine Funktion heißt ft_strlcpy und ist bereits implementiert
// size_t ft_strlcpy(char *dst, const char *src, size_t size);

// int main()
// {
//     char src[] = "Hallo Welt!";
//     char dst[20];

//     size_t copied_length = ft_strlcpy(dst, src, sizeof(dst));

//     printf("Gesamtlänge von src: %zu\n", copied_length);
//     printf("Kopierter String in dst: '%s'\n", dst);

//     return 0;
// }