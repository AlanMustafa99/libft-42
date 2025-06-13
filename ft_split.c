/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amustafa <amustafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 16:07:30 by amustafa          #+#    #+#             */
/*   Updated: 2025/06/11 12:12:57 by amustafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countword(char const *s, char c)
{
	size_t	count;

	count = 0;
	if (!s || !*s)
		return (0);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static char	*ft_getword(char const *s, char c, size_t *word_len)
{
	char	*word;

	if (!ft_strchr(s, c))
		*word_len = ft_strlen(s);
	else
		*word_len = (size_t)(ft_strchr(s, c) - s);
	word = ft_substr(s, 0, *word_len);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**lst;
	size_t	word_len;
	size_t	i;

	if (!s)
		return (NULL);
	lst = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!lst)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			lst[i] = ft_getword(s, c, &word_len);
			if (!lst[i])
				return (NULL);
			i++;
			s += word_len;
		}
	}
	lst[i] = NULL;
	return (lst);
}
// #include <stdio.h>
// #include <stdlib.h>
// #include "libft.h"

// int main()
// {
//     char **result;
//     int i;

//     // Beispiel-String
//     char s[] = "Hallo,,Welt,,wie,,geht,,es?";

//     // Split bei ','
//     result = ft_split(s, ',');

//     if (!result)
//     {
//         printf("Fehler beim Split.\n");
//         return 1;
//     }

//     printf("Ergebnis:\n");
//     for (i = 0; result[i] != NULL; i++)
//     {
//         printf("Teil %d: '%s'\n", i, result[i]);
//         free(result[i]); // Nicht vergessen, um den Speicher zu befreien
//     }
//     free(result);

//     return 0;
// }