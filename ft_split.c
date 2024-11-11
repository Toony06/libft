/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toroman <toroman@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:40:19 by toroman           #+#    #+#             */
/*   Updated: 2024/11/11 19:12:21 by toroman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countword(const char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j++;
			while (s[i] && s[i] != c)
				i++;
			continue ;
		}
		i++;
	}
	return (j);
}
int	lencountword(const char *s, char c, int start)
{
	int	i;
	int	count;

	i = start;
	count = 0;
	while (s[i] && s[i] != c)
	{
		count++;
		i++;
	}
	return (count);
}
char	*ft_copyword(const char *s, char c, int start)
{
	char	*word;
	int		i;
	int		j;
	int		len;

	i = start;
	j = 0;
	len = lencountword(s, c, start);
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	while (s[i] && s[i] != c)
	{
		word[j++] = s[i++];
	}
	word[j] = '\0';
	return (word);
}
char	**ft_split(const char *s, char c)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	tab = malloc(sizeof(char *) * (lencountword(s, c) + 1));
	if (!tab)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
		{
			tab[j++] = ft_copyword(s, c, i++);
		}
		while (s[i] != c && s[i])
			i++;
	}
	tab[j] = 0;
	return (tab);
}
//int	main()
//{
//	char *s = "salut,iheb,comment,ca,va";
//	char c = ',';
//	char **res = ft_split(s, c);
//	printf("%s", res);
//	free(res);
//	return 0;
//}
