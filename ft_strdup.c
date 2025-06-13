/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amustafa <amustafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 13:46:53 by amustafa          #+#    #+#             */
/*   Updated: 2025/06/10 18:21:17 by amustafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*dup;

	len = ft_strlen(s1) + 1;
	dup = (char *)malloc(sizeof(char) * len);
	if (!dup)
	{
		return (NULL);
	}
	ft_strlcpy(dup, s1, len);
	return (dup);
}
// #include <stdio.h>
// #include "libft.h"

// int main()
// {
//     const char *original = "Hallo Welt!";
//     char *copy = ft_strdup(original);

//     if (copy)
//     {
//         printf("Kopie: %s\n", copy);
//         free(copy);
//     }
//     else
//     {
//         printf("Speicher konnte nicht zugewiesen werden.\n");
//     }
//     return 0;
// }