/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amustafa <amustafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 14:27:40 by amustafa          #+#    #+#             */
/*   Updated: 2025/06/10 18:48:55 by amustafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// #include <stdio.h>

// // Deklaration der Funktion
// void ft_striteri(char *s, void (*f)(unsigned int, char*));

// void to_uppercase(unsigned int i, char *c)
// {
//     if (*c >= 'a' && *c <= 'z')
//         *c = *c - ('a' - 'A');
// }

// int main()
// {
//     char str[] = "hello, world!";
//     // Funktion aufrufen
//     ft_striteri(str, to_uppercase);
//     // Ergebnis ausgeben
//     printf("%s\n", str); // Ausgabe: HELLO, WORLD!
//     return 0;
// }