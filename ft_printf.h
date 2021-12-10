#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int		g_count;
void	ft_putchar(char c);
int		ft_printf(const char *format, ...);
void	ft_putstr(char *str);
void   	ft_putnbr(long long	nb);
int		ft_strlen(const char *str);
void	ft_putnbr_base(unsigned long nbr, char *base);

#endif
