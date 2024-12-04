/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Untitled-1                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 23:23:58 by marvin            #+#    #+#             */
/*   Updated: 2024/12/02 23:23:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	if (dstsize <= i)
		return (dstsize + j);
	if (dstsize > i)
	{
		k = 0;
		while (src[k] != '\0' && i + k + 1 < dstsize)
		{
			dst[i + k] = src[k];
			k++;
		}
		dst[i + k] = '\0';
	}
	return (i + j);
}
