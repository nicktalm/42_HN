#include "libft.h"

int	ft_find_char(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*newstr;
	size_t	i;
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen(s1);
	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] != '\0' && ft_find_char(s1[start], set))
		start++;
	while (end > start && ft_find_char(s1[end - 1], set))
		end--;
	newstr = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!newstr)
		return (NULL);
	while (start < end)
		newstr[i++] = s1[start++];
	newstr[i] = '\0';
	return (newstr);
}

// int	main(void)
// {
// 	char	s1[] = "Hello 42 Students!!!";
// 	char	*a;
// 	char	*b;
// 	char	*c;

// 	a = ft_strtrim(s1, "H");
// 	b = ft_strtrim(s1, "s!nt");
// 	c = ft_strtrim(s1, "H!!");
// 	printf("%s\n", a);
// 	printf("%s\n", b);
// 	printf("%s\n", c);
// }
