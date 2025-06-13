/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amustafa <amustafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 15:26:28 by amustafa          #+#    #+#             */
/*   Updated: 2025/06/10 18:16:24 by amustafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (0);
}
// #include <stdio.h>
// #include "libft.h"

// int main()
// {
//     const char *str = "Hallo Welt!";
//     char *result = ft_strchr(str, 'W');

//     if (result)
//         printf("Gefunden: %s\n", result);
//     else
//         printf("Zeichen nicht gefunden.\n");
//     return 0;
// }