/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amustafa <amustafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 13:29:55 by amustafa          #+#    #+#             */
/*   Updated: 2025/06/10 17:44:47 by amustafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1 = (const unsigned char *)s1;
	const unsigned char	*p2 = (const unsigned char *)s2;

	while (n--)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);
}
// #include <stdio.h>
// #include "libft.h"

// int main()
// {
//     // Beispiel-Strings
//     const char *str1 = "Hello, World!";
//     const char *str2 = "Hello, World!";
//     const char *str3 = "Hello, Worle!";
//     const char *str4 = "Hello, world!"; // kleines 'w' am Ende
//     const char *str5 = "Hello, World!!!";

//     // Test 1: Vergleich identischer Strings
//     printf("Vergleich str1 und str2: %d\n", ft_memcmp(str1, str2, 13));

//     // Test 2: Unterschied bei einem Zeichen
//     printf("Vergleich str1 und str3: %d\n", ft_memcmp(str1, str3, 13));

//     // Test 3: Unterschied bei Klein- und Großschreibung
//     printf("Vergleich str1 und str4: %d\n", ft_memcmp(str1, str4, 13));

//     // Test 4: Vergleich bis zum Ende, mehr Bytes als notwendig
//     printf( str1 und str5 (bis 20 Bytes): %d\n", ft_memcmp(str1, str5, 20));

//     // Test 5: Vergleich nur eines Bytes
//     printf("Vergleich nur erstes Byte: %d\n", ft_memcmp(str1, str2, 1));

//     return 0;
// }