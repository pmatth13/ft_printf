Conversion Type annoncé à va*arg Remarque
c int promotion automatique du char
s char *
p void \_ une adresse, pas l’opérateur &
d, i int strictement identiques
u, x, X unsigned int mêmes bits, base différente à l’affichage

int ft_printf(const char \*, ...)
{
i = 0;
int count;

    count = 0;
    tant que str[i]
    	if on voit % et i + 1 = '\0'
    		return (-1);
    	else if on voit %
    		on analyse i + 1
    		i++;
    	else
    		ft_putchar(str[i])
    		count++;
    	i++;

}
