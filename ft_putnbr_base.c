#include "ft_printf.h"

void ft_putnbr_base(unsigned long nbr, char *base)
{
	if(nbr >= (unsigned long)ft_strlen(base))
	{
		ft_putnbr_base(nbr / ft_strlen(base),base);
		ft_putnbr_base(nbr % ft_strlen(base),base);
	}
	else
		ft_putchar(base[nbr]);
}
