/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Untitled-1                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 17:35:57 by marvin            #+#    #+#             */
/*   Updated: 2024/12/03 17:35:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*calloc(size_t nmemb, size_t size)
{
	void	*arr;
	size_t	i;

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < nmemb * size)
	{
		((unsigned char *)arr)[i] = 0;
		i++;
	}
	return (arr);
}
