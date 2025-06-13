/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amustafa <amustafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 14:13:40 by amustafa          #+#    #+#             */
/*   Updated: 2025/06/13 14:59:42 by amustafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int first, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	s_len;

	i = -1;
	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (first >= s_len)
	{
		sub = ft_calloc(1, 1);
		return (sub);
	}
	if (s_len - first < len)
		len = s_len - first;
	sub = (char *)malloc(len + 1);
	if (!sub)
		return (sub);
	while (++i < len)
		sub[i] = s [first + i];
	sub[i] = '\0';
	return (sub);
}
