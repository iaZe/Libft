/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantavar <dantavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 01:29:21 by dantavar          #+#    #+#             */
/*   Updated: 2022/04/12 23:48:55 by dantavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int x)
{
	if (x >= '0' && x <= '9') // Faz a verificação para ver se é num
		return (1);
	if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z')) //Faz a verificação para ver se é alpha
		return (1);
	return (0);
}
