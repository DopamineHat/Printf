/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpagot <rpagot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 12:16:13 by rpagot            #+#    #+#             */
/*   Updated: 2017/01/04 14:42:47 by rpagot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PARSE_H
# define FT_PARSE_H

# include "../Libft_github/includes/libft.h"
# include <stdarg.h>

char	*ft_printf_flags(char **format, unsigned short intel);
char	*ft_printf_width(char **format, va_list *arg, int width,
			unsigned short intel);
char	*ft_printf_precision(char **format, va_list *arg, int precision,
			unsigned short intel);
char	*ft_printf_length(char **format, unsigned short intel);
char	*ft_get_process(char format, unsigned short intel, int width,
			int precision);
int		ft_process(char format, va_list *arg, unsigned short intel,
			int width, int precision);
int		ft_process_is_NULL(void);

#endif
