/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amustafa <amustafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 14:22:28 by amustafa          #+#    #+#             */
/*   Updated: 2025/06/10 18:29:05 by amustafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*result;

	if (!s1 || !s2)
		return (NULL);
	result = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		result[i + j] = s2[j];
		j++;
	}
	result[i + j] = '\0';
	return (result);
}
// #include <stdio.h>
// #include "libft.h"

// int	main(void)
// {
//     char	*s1;
//     char	*s2;
//     char	*joined;

//     s1 = "Hello, ";
//     s2 = "World!";
//     joined = ft_strjoin(s1, s2);
//     if (joined == NULL)
//     {
//         printf("Memory allocation failed.\n");
//         return (1);
//     }
//     printf("Result: %s\n", joined);
//     free(joined);
//     return (0);
// }