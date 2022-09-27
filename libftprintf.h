/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:38:57 by marferre          #+#    #+#             */
/*   Updated: 2022/09/27 19:51:08 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(char const *printf, ...);
int	ft_print_str(char const *s);
int	ft_print_chr(char const c);
int	ft_print_nbr(int nbr);

#endif
