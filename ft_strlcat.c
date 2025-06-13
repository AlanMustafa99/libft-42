/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amustafa <amustafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 15:13:09 by amustafa          #+#    #+#             */
/*   Updated: 2025/06/10 18:30:23 by amustafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < dstsize && dst[i])
	{
		i++;
	}
	while ((i + j + 1) < dstsize && src[j])
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i != dstsize)
	{
		dst[i + j] = '\0';
	}
	return (i + ft_strlen(src));
}
// #include <stdio.h>
// #include "libft.h"

// int main(void)
// {
//     char dst[20] = "Hallo";
//     const char *src = " Welt!";
//     size_t size = sizeof(dst);

//     printf("Vor strlcat:\n");
//     printf("dst: '%s'\n", dst);
//     printf("src: '%s'\n", src);
//     printf("dstsize: %zu\n", size);

//     size_t result = ft_strlcat(dst, src, size);

//     printf("\nNach strlcat:\n");
//     printf("dst: '%s'\n", dst);
//     printf("Rückgabewert: %zu\n", result);

//     return 0;
// }