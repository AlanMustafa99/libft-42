/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amustafa <amustafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:56:12 by amustafa          #+#    #+#             */
/*   Updated: 2025/06/10 18:04:51 by amustafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	while (len--)
		*ptr++ = (unsigned char)c;
	return (b);
}
// #include <stdio.h>
// #include "libft.h"

// int main()
// {
//     char buffer[20] = "Hello, World!";
//     printf("Vor memset: %s\n", buffer);

//     // Setze die ersten 5 Zeichen auf 'A'
//     ft_memset(buffer, 'A', 5);
//     printf("Nach memset: %s\n", buffer);

//     // Test mit len=0, sollte nichts ändern
//     ft_memset(buffer, 'B', 0);
//     printf("Nach memset mit len=0: %s\n", buffer);

//     return 0;
// }