/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:26:54 by ntalmon           #+#    #+#             */
/*   Updated: 2023/10/16 17:17:56 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	size_t	total_size;
	void	*ptr;

	total_size = num_elements * element_size;
	ptr = malloc(total_size);
	if (ptr != 0)
	{
		ft_memset(ptr, 0, total_size);
	}
	return (ptr);
}

// int main() {
// 	// Beispiel der Verwendung von calloc:
// 	int *intArray;
// 	int numElements = 5;

// 	intArray = (int *)ft_calloc(numElements, sizeof(int));
// 	// system("leaks a.out");
// 	if (intArray == NULL) {
// 		printf("Speicherreservierung fehlgeschlagen!\n");
// 		return 1;
// 	}

// 	for (int i = 0; i < numElements; i++) {
// 		printf("%d ", intArray[i]);
// 	}
// 	// free(intArray);
// 	system("leaks a.out");
// 	return (0);
// }

// int	main()
// {
// 	test();
// 	system("leaks a.out");
// 	return (0);
// }
