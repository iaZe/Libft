/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantavar <dantavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 23:44:01 by dantavar          #+#    #+#             */
/*   Updated: 2022/04/26 01:12:04 by dantavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	a;

	a = 0;
	while (s[a] != '\0')
		a++;
	while (s[a - 1] != '\0' && s[a] != c)
	{
		a--;
	}
	if (s[a] == (unsigned char)c)
		return ((char *)&s[a]);
	return (0);
}
