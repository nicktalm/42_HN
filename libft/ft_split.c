/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:33:30 by ntalmon           #+#    #+#             */
/*   Updated: 2023/10/23 15:33:38 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// counting words to reserve the required memory with malloc
static size_t	ft_word_counter(char const *s, char c)
{
	size_t	i;
	size_t	counter;

	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
			counter++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (counter);
}

//length of substring for every word
//returning the last word with strlen of address of s[start]
//other words using strchr as length of substr
//&s[start] --> whole string beginning with start
//difference from strchr & &s[start]-->string to return/length
static size_t	ft_ends_of_subs(char const *s, char c, size_t start)
{
	if (ft_strchr(s + start, c) == NULL)
		return (ft_strlen(&s[start]));
	else
		return (ft_strchr(s + start, c) - &s[start]);
}

//freeing the buffer in case of error
static char	**ft_buffer_free(char **buffer)
{
	size_t	i;

	i = 0;
	while (buffer[i] != NULL)
	{
		free(buffer[i]);
		i++;
	}
	free(buffer);
	return (NULL);
}

//skipping c
//creating substrings in buffer
//adding length to string position
char	**ft_split(char const *s, char c)
{
	char	**buffer;
	size_t	i;
	size_t	start;

	i = 0;
	start = 0;
	if (s == NULL)
		return (NULL);
	buffer = malloc((ft_word_counter(s, c) + 1) * sizeof(char *));
	if (buffer == NULL)
		return (NULL);
	while (s[start] != '\0')
	{
		while (s[start] == c)
			start++;
		if (s[start] == '\0')
			break ;
		buffer[i] = (ft_substr(s, start, ft_ends_of_subs(s, c, start)));
		if (buffer[i] == NULL)
			return (ft_buffer_free(buffer));
		i++;
		start += ft_ends_of_subs(s, c, start);
	}
	buffer[i] = NULL;
	return (buffer);
}

// #include <stdio.h>

// int main() {
//     char input[] = "Hello,World,OpenAI,GPT-3.5";
//     char separator = ',';

//     char **result = ft_split(input, separator);
//     if (result) {
//         for (int i = 0; result[i] != NULL; i++) {
//             printf("Token %d: %s\n", i, result[i]);
//         }

//         // Freigabe des allokierten Speichers
//         // ft_free_all_split_alloc(result, i);

//     } else {
//         printf("Split fehlgeschlagen.\n");
//     }
// 	system("leaks a.out");

//     return 0;
// }
