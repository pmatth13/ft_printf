#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

int	ft_sum(int n, ...)
{
	va_list ap;
	int	i;
	int	total;

	va_start(ap, n);
	i = 0;
	total = 0;
	while (i < n)
	{
		total = total + va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return (total);
}

int main(void)
{
	int	total;

	total = ft_sum(3, 10, 20, 12);
	printf("Le total est: %d\n", total);
	total = ft_sum(1, -5);
	printf("Le total est: %d\n", total);
	total = ft_sum(0);
	printf("Le total est: %d\n", total);
	total = ft_sum(4, 1, 2, 3);
	printf("Le total est: %d\n", total);
	total = ft_sum(2, 1.5, 2.5);
	printf("Le total est: %d\n", total);

	return (0);
}