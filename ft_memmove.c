/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amustafa <amustafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 15:03:35 by amustafa          #+#    #+#             */
/*   Updated: 2025/06/12 14:24:25 by amustafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dst && !src)
		return (0);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (s < d)
	{
		d += len;
		s += len;
		while (len--)
			*--d = *--s;
	}
	else
	{
		while (len--)
			*d++ = *s++;
	}
	return (dst);
}
// #include <stdio.h>

// int main()
// {
//     char buffer[20] = "Hallo Welt!";
//     printf("Vor memmove: %s\n", buffer);

//     // Beispiel: Überlappung, verschiebe "Welt" an den Anfang
//     ft_memmove(buffer, buffer + 6, 5);
//     buffer[5] = '\0'; // Null-terminieren

//     printf("Nach memmove: %s\n", buffer);

//     // Test mit NULL-Pointern und len=0
//     if (ft_memmove(NULL, NULL, 0) == NULL)
//         printf("Rückgabe bei NULL-Pointern und len=0 ist korrekt NULL.\n");
//     else
//         printf("Fehler: Rückgabe ist nicht NULL.\n");

//     return 0;
// }