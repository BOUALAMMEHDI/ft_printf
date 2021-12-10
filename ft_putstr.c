#include "ft_printf.h"

void	ft_putstr(char *str)
{
	int indice;

	indice = 0; 
	if (!str)
	{
		ft_putstr("(null)");
		return ;
	}
	while (str[indice])
	{
		ft_putchar(str[indice]);
		indice++;
	}
}
