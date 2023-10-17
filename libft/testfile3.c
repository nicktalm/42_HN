#include "libft.h"

int main() {
	// Beispiel der Verwendung von calloc:
	int *intArray;
	int numElements = 5;

	intArray = (int *)ft_calloc(numElements, sizeof(int));

	if (intArray == 0) {
		printf("Speicherreservierung fehlgeschlagen!\n");
		return 1;
	}

	for (int i = 0; i < numElements; i++) {
		printf("%d ", intArray[i]);
	}
	return 0;
}
