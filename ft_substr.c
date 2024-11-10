/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toroman <toroman@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 13:53:40 by toroman           #+#    #+#             */
/*   Updated: 2024/11/10 14:24:31 by toroman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;
	size_t	s_len;

	i = 0;
	res = (char *)malloc(sizeof (char) * len + 1);
	s_len = ft_strlen(s);
	if (res == NULL)
		return (NULL);
	if (start >= s_len)
		return (NULL);
	if (s == NULL)
		return (NULL);
	if (start + len >= s_len)
		len = s_len - start;
	while (i < len)
	{
		res[i++] = s[start++];
	}
	res[i] = '\0';
	return (res);
}
//int	main()
//{
//	char	*s = "tony fares";
//	char	*res = ft_substr(s, 5, 10);
//	printf ("%s\n", res);
//	free (res);
//}
