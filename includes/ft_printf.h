/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpagot <rpagot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 12:16:13 by rpagot            #+#    #+#             */
/*   Updated: 2017/03/28 03:16:42 by rpagot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../Libft_github/includes/libft.h"
# include <stdarg.h>

char		*ft_printf_flags(char **format, unsigned short intel);
char		*ft_printf_width(int len, int width,
				char withpad);
char		*ft_printf_precision(char **format, va_list *arg,
				unsigned short intel);
char		*ft_printf_length(char **format, unsigned short intel);
int			ft_process(char format, va_list *arg, unsigned short intel,
				int width);

ssize_t		ft_printf_escape(char format, va_list *arg,
				unsigned short intel, int width);
ssize_t		ft_printf_str(char format, va_list *arg, unsigned short intel);

#endif
