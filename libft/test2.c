#include "libft.h"

int	ft_count_digit(int n)
{
	int		counter;
	int		numb;

	counter = 0;
	numb = n;
	if (n == 0)
		return (1);
	while (numb != 0)
	{
		numb = numb / 10;
		counter++;
	}
	counter = counter + (n <= 0);
	return (counter);
}

char	*ft_exist(int n)
{
	char	*newstr;
	int		counter;

	counter = ft_count_digit(n);
	newstr = malloc(sizeof(char) * (counter + 1));
	if (newstr == NULL)
		return (NULL);
	return (newstr);
}

char	*ft_itoa(int n)
{
	char	*newstr;
	int		sign;
	int		counter;

	sign = 1;
	counter = ft_count_digit(n);
	if (n < 0)
		sign = sign * -1;
	newstr = ft_exist(n);
	if (newstr == NULL)
		return (NULL);
	newstr[counter] = '\0';
	while (counter - (sign < 0) > 0)
	{
		counter--;
		newstr[counter] = sign * (char)(n % 10) + '0';
		n = n / 10;
	}
	counter--;
	if (sign < 0)
		newstr[counter] = '-';
	return (newstr);
}


#include <limits.h>

int	main(void)
{
	int	n;

	n = 1234;
	printf("String: %s\n", ft_itoa(n));
}
