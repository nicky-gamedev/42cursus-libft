/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dienasci <diego.nascimentomartins2@gmail.c +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 21:19:45 by dienasci          #+#    #+#             */
/*   Updated: 2021/08/12 21:19:46 by dienasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ret;
	char	out;
	size_t	index;
	size_t	len;

	index = 0;
	len = ft_strlen(s);
	ret = (char *)ft_calloc(len + 1, sizeof(char));
	if (!ret)
		return (NULL);
	while (index < len)
	{
		out = f(index, s[index]);
		ret[index] = out;
		index++;
	}
	return (ret);
}
