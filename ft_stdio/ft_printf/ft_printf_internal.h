/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_internal.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakaza <tnakaza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 19:38:05 by tnakaza           #+#    #+#             */
/*   Updated: 2024/08/13 15:53:57 by tnakaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_INTERNAL_H
# define FT_PRINTF_INTERNAL_H

# include "../../ft_stdlib/ft_stdlib.h"
# include "../../ft_string/ft_string.h"
# include "../../ft_ctype/ft_ctype.h"
# include "../../ft_put_fd/ft_put_fd.h"
# include <stdarg.h>
# include <stdlib.h>
# include <stdint.h>

typedef struct s_format
{
	unsigned int	flags;
	unsigned int	field_width;
	int				precision;
	int				long_double;
	char			specifier;
	size_t			chars_read;
	char			*str;
	size_t			len;
}				t_format;

// ft_parse_format.c
t_format	*parse_format(const char *str);

// ft_update_format.c
void		update_format_str(t_format *format, char *new_str);
void		concat_format_str(t_format *format, char *head, char *tail);
void		pad_format_str(t_format *format, char pad_char, \
							size_t len, size_t offset);

// ft_check_flags.c
int			check_hash_flag(t_format *format);
int			check_minus_flag(t_format *format);
int			check_plus_flag(t_format *format);
int			check_space_flag(t_format *format);
int			check_zero_flag(t_format *format);

// ft_set_flags.c
void		set_hash_flag(t_format *format, int val);
void		set_minus_flag(t_format *format, int val);
void		set_plus_flag(t_format *format, int val);
void		set_space_flag(t_format *format, int val);
void		set_zero_flag(t_format *format, int val);

// ft_print_format.c
size_t		print_format(t_format *format, va_list args);
void		pad_field_width(t_format *format);

// ft_print_chars.c
size_t		print_char(char c);
size_t		print_formatted_str(t_format *format);

// ft_chars_to_str.c
void		char_to_str(char c, t_format *format);
void		str_to_str(char *s, t_format *format);

// ft_nbrs_to_str.c
void		int_to_str(int nbr, t_format *format);
void		uint_to_str(unsigned int nbr, t_format *format);
void		uint_to_hexstr(unsigned int nbr, int capital, t_format *format);

// ft_ptrs_to_str.c
void		ptr_to_str(uintptr_t nbr, t_format *format);

#endif
