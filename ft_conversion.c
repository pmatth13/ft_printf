#include "ft_printf.h"

int	ft_conversion(va_list *ap, char c)
{
	int	nb_c;

	nb_c = 0;
	if (c == 'd' || c == 'i')
		nb_c = ft_putnbr_pf(va_arg(*ap, int));
	else if (c == 's')
		nb_c = ft_putstr_pf(va_arg(*ap, char *));
	else if (c == 'p')
	{

	}
	return (nb_c);
}