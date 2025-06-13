/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amustafa <amustafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 13:38:16 by amustafa          #+#    #+#             */
/*   Updated: 2025/06/10 19:44:30 by amustafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	if (!s || !f)
		return (NULL);
	str = ft_strdup(s);
	if (!str)
		return (NULL);
	i = 0;
	while (str[i])
	{
		str[i] = f(i, str[i]);
		i++;
	}
	return (str);
}
// #include <stdio.h>
// #include "libft.h"

// // Beispiel-Funktion, die jeden Buchstaben in Großbuchstaben umwandelt
// char to_uppercase(size_t i, char c)
// {
//     (void)i; // i wird hier nicht verwendet, aber ist notwendig
//     if (c >= 'a' && c <= 'z')
//         return c - ('a' - 'A');
//     return c;
// }

// int main()
// {
//     const char *original = "Hallo Welt!";
//     char *result;

//     result = ft_strmapi(original, to_uppercase);
//     if (result == NULL)
//     {
//         printf("Fehler bei der Speicherallokation.\n");
//         return 1;
//     }

//     printf("Original: %s\n", original);
//     printf("Transformiert: %s\n", result);

//     // Nicht vergessen, den Speicher zu freigeben
//     free(result);

//     return 0;
// }