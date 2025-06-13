/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amustafa <amustafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 13:28:07 by amustafa          #+#    #+#             */
/*   Updated: 2025/06/10 17:41:44 by amustafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr = (const unsigned char *)s;

	while (n--)
	{
		if (*ptr == ((unsigned char)c))
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}
// #include <stdio.h>
// #include "libft.h"

// int main()
// {
//     const char *str = "Hello, World!";
//     int c = 'o';
//     size_t n = 13; // Länge des Strings

//     void *result = ft_memchr(str, c, n);
//     if (result != NULL)
//     {
// printf("Gefunden: %ld\n", (unsigned char*)result - (unsigned char*)str);
//         printf("Zeichen: '%c'\n", *(unsigned char*)result);
//     }
//     else
//     {
//         printf("Zeichen '%c' wurde nicht gefunden.\n", c);
//     }

//     // Test mit Zeichen, das nicht im String ist
//     c = 'z';
//     result = ft_memchr(str, c, n);
//     if (result != NULL)
//     {
// printf("Position: %ld\n", (unsigned char*)result - (unsigned char*)str);
//         printf("Zeichen: '%c'\n", *(unsigned char*)result);
//     }
//     else
//     {
//         printf("Zeichen '%c' wurde nicht gefunden.\n", c);
//     }

//     return 0;
// }