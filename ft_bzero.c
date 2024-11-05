/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tony <tony@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 20:40:01 by tony              #+#    #+#             */
/*   Updated: 2024/11/05 21:14:19 by tony             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char *ptr = (unsigned char *)s;

	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}
// #include <stdio.h>
// #include <unistd.h>

// int main()
// {
//     char buffer[10] = "HelloWorld";
//     ft_bzero(buffer, 9);
// 	int i;
//     i = 0;
//     while (i < 10) {
//         if (buffer[i] == '\0') 
// 		{
//             write (1, "0 ", 2);
//         } 
// 		else 
// 		{
//             printf("%c ", buffer[i]);
//         }
//         i++;
//     }
//     printf("\n");

//     return 0;
// }
