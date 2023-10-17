#include "libft.h"

char transform(unsigned int index, char c)
{
    if (c >= 'a' && c <= 'z')
    {
        // Kleinbuchstaben in Großbuchstaben umwandeln
        return c - 'a' + 'A';
    }
    else
    {
        // Andere Zeichen unverändert lassen
        return c;
    }
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i = 0;
    char *substr;

    if (s == NULL || f == NULL)
        return NULL;

    substr = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
    if (substr == NULL)
        return NULL;

    while (s[i] != '\0')
    {
        substr[i] = f(i, s[i]);
        i++;
    }

    substr[i] = '\0';
    return substr;
}

int main()
{
    const char *inputString = "Hello, World!";
    char *transformedString;

    // Anwenden der ft_strmapi-Funktion mit der transform-Funktion
    transformedString = ft_strmapi(inputString, transform);

    if (transformedString != NULL)
    {
        printf("Original: %s\n", inputString);
        printf("Transformiert: %s\n", transformedString);

        // Speicher freigeben, nachdem der Zeichenstring nicht mehr benötigt wird
        free(transformedString);
    }
    else
    {
        printf("Fehler beim Transformieren des Zeichenstrings.\n");
    }

    return 0;
}
