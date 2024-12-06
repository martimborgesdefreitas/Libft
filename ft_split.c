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

#include "libft.h"

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
		if (s[i] != (char)c && is_word == 0)
		{
			is_word = 1;
			words++;
		}
		else if (s[i] == (char)c && is_word == 1)
			is_word = 0;
		i++;
	}
	return (words);
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

static char	**split_aux(const char **s, char c, char **arr, int *i)
{
	int		len;
	char	*word;

	len = 0;
	while ((*s)[len] != '\0' && (*s)[len] != (char)c)
		len++;
	if (len > 0)
	{
		word = malloc((len + 1) * sizeof(char));
		if (word == NULL)
		{
			while ((*i) > 0)
				free(arr[(*i)-- - 1]);
			free(arr);
			return (NULL);
		}
		ft_strncpy(word, *s, len);
		word[len] = '\0';
		arr[(*i)++] = word;
		*s += len;
	}
	return (arr);
}

static const char	*skip_del(const char *s, char c)
{
	while (*s != '\0' && *s == (char)c)
		s++;
	return (s);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		wordtotal;
	int		i;

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
		arr = split_aux(&s, c, arr, &i);
		if (!arr)
			return (NULL);
	}
	arr[i] = NULL;
	return (arr);
}

/*int	main()
{
	char	*s = "test,this,function,for,eval";
	char	c = ',';
	char	**result;
	size_t	i;

	result = ft_split(s, c);
	i = 0;
	while (result[i] != NULL)
	{
		printf("%s\n", result[i]);
		i++;
	}
	i = 0;
	while (result[i] != NULL)
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}*/