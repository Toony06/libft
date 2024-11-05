/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toroman <toroman@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:55:52 by toroman           #+#    #+#             */
/*   Updated: 2024/11/05 12:10:07 by toroman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
//#include <stdio.h>
//int	main (void)
//{
//	int	c = '4';
//	printf("%d\n", ft_isalpha(c));
//	return (0);
//}
