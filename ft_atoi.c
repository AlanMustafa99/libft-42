/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amustafa <amustafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 13:43:14 by amustafa          #+#    #+#             */
/*   Updated: 2025/06/11 12:10:04 by amustafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res * sign);
}
// // #include <stdio.h>
// // #include <stddef.h>

// int main(void)
// {
//     char *test_str1 = "   -1234";
//     char *test_str2 = "42";
//     char *test_str3 = "   +5678abc";
//     char *test_str4 = "0";
//     char *test_str5 = "-0";

//     printf("ft_atoi(\"%s\") = %d\n", test_str1, ft_atoi(test_str1));
//     printf("ft_atoi(\"%s\") = %d\n", test_str2, ft_atoi(test_str2));
//     printf("ft_atoi(\"%s\") = %d\n", test_str3, ft_atoi(test_str3));
//     printf("ft_atoi(\"%s\") = %d\n", test_str4, ft_atoi(test_str4));
//     printf("ft_atoi(\"%s\") = %d\n", test_str5, ft_atoi(test_str5));

//     return 0;
// }
