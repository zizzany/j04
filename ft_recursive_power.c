#include <unistd.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{

	if ((nb == 0 && power !=0) || power < 0)
		return(0);
	if ((power == 0) || (nb < 0) && (power == 0))
		return(1);
}
