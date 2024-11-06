/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tony <tony@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 20:36:17 by tony              #+#    #+#             */
/*   Updated: 2024/11/06 23:20:37 by tony             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return(char *)&s[i];
		i++;
	}
	return (NULL);
}
// #include <stdio.h>
// int	main()
// {
// 	const char str[] = "salut la france";
// 	char *result = ft_strchr(str, 'z');
// 	printf("%s\n", result);
// 	return 0;
// }
