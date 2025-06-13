/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amustafa <amustafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 13:22:20 by amustafa          #+#    #+#             */
/*   Updated: 2025/06/10 19:38:54 by amustafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
// #include <stdio.h>
// #include "libft.h"

// int	ft_strncmp(const char *s1, const char *s2, unsigned int n);

// int main(void)
// {
//     // Testfälle
//     const char *str1 = "Hello";
//     const char *str2 = "Hello";
//     const char *str3 = "Hellp";
//     const char *str4 = "Hell";
//     const char *str5 = "HeLLo";

//printf(" von '%s' und '%s' : %d\n", str1, str2, ft_strncmp(str1, str2, 5));
//printf(" von '%s' und '%s' : %d\n", str1, str3, ft_strncmp(str1, str3, 5));
//printf(" von '%s' und '%s' : %d\n", str1, str4, ft_strncmp(str1, str4, 4));
//printf(" von '%s' und '%s' : %d\n", str1, str5, ft_strncmp(str1, str5, 5));
//printf(" von '%s' und '%s' : %d\n", str1, str5, ft_strncmp(str1, str5, 1));
//printf(" von '%s' und '%s' : %d\n", str1, str5, ft_strncmp(str1, str5, 0));

//     return 0;
// }