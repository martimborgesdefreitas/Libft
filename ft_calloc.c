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

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;
	size_t	i;

	if (size != 0 && nmemb > __SIZE_MAX__ / size)
		return (NULL);
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
/*int	main(void)
{
	size_t	nmemb = __SIZE_MAX__;
	size_t	size = 3;
	char 	*call;

	call = (char *)ft_calloc(nmemb, size);
	printf("string is %s, f this\n", call);
	free(call);
	return (0);
}*/