/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Untitled-1                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 21:15:10 by marvin            #+#    #+#             */
/*   Updated: 2024/12/03 21:15:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	is_del(char a, char c)
{
	if (a == c)
		return (1);
	return (0);
}

static int	word_count(const char *s, char c)
{
	int	i;
	int	words;
	int	is_word;

	i = 0;
	words = 0;
	is_word = 0;
	while (s[i] != '\0')
	{
		if (is_del(s[i], c) == 0 && is_word == 0)
		{
			is_word = 1;
			words++;
		}
		else if (is_del(s[i], c) == 1 && is_word == 1)
			is_word = 0;
		i++;
	}
	return (words);
}

static int	word_len(const char *s, char c)
{
	int	len;

	len = 0;
	while (s[len] != '\0' && is_del(s[len], c) == 0)
		len++;
	return (len);
}

static const char	*skip_del(const char *s, char c)
{
	while (*s != '\0' && is_del(*s, c) == 1)
		s++;
	return (s);
}

static char	*ft_strncpy(char *dest, const char *s, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s[i] != '\0')
	{
		dest[i] = s[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	char	*word;
	int		wordtotal;
	int		i;
	int		len;

	if (s == NULL)
		return (NULL);
	wordtotal = word_count(s, c);
	arr = malloc((wordtotal + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (*s != '\0' && i < wordtotal)
	{
		s = skip_del(s, c);
		len = word_len(s, c);
		if (len > 0)
		{
			word = malloc((len + 1) * sizeof(char));
			if (word == NULL)
			{
				while (i > 0)
				{
					free(arr[i - 1]);
					i--;
				}
				free(arr);
				return (NULL);
			}
			ft_strncpy(word, s, len);
			word[len] = '\0';
			arr[i++] = word;
			s = s + len;
		}
	}
	arr[i] = NULL;
	return (arr);
}
