/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amustafa <amustafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 13:27:19 by amustafa          #+#    #+#             */
/*   Updated: 2025/06/10 17:51:03 by amustafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	if (!dst && !src)
		return (NULL);
	d = (char *)dst;
	s = (const char *)src;
	while (n--)
		*d++ = *s++;
	return (dst);
}
// #include <stdio.h>

// int main()
// {
//     char src[] = "Hallo Welt!";
//     char dst[20];

//     // Kopiere 6 Zeichen aus src nach dst
//     ft_memcpy(dst, src, 6);
//     dst[6] = '\0';  // Null-terminieren, um den String korrekt auszugeben

//     printf("Kopierter String: %s\n", dst);

//     // Test mit NULL-Pointer und n=0
//     if (ft_memcpy(NULL, NULL, 0) == NULL)
//         printf("Rückgabe bei NULL-Pointern und n=0 ist korrekt NULL.\n");
//     else
//         printf("Fehler: Rückgabe ist nicht NULL.\n");

//     return 0;
// }