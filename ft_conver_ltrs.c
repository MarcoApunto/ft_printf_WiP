/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conver_ltrs.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:45:18 by marferre          #+#    #+#             */
/*   Updated: 2022/09/28 16:06:00 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char const *s)
{
	if (!s)
		return (0);
	else
		write(1, &*s, ft_strlen(s));
	return (ft_strlen(s));
}

int	ft_print_chr(char const c)
{
	write(1, &c, 1);
	return (1);
}