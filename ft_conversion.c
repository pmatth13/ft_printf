#include "ft_printf.h"

int	ft_conversion(va_list *ap, char c)
{
	int		nb_c;
	char	*str;

	nb_c = 0;
	if (c == 'd' || c == 'i')
		nb_c = ft_putnbr_pf(ft_strlen(va_arg(*ap, int)));
	else if (c == 's')
	{
		str = va_arg(*ap, char *);
		nb_c = ft_putstr_pf(va_arg(*ap, char *));
	}
	else if (c == 'p')
	{

	}
	return (nb_c);
}