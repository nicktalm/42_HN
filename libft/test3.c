#include "libft.h"


// returns new node created with 'content'
t_list	*ft_lstnew(void *content)
{
	t_list	*temp;

	temp = (t_list *)malloc(sizeof(t_list));
	if (temp == NULL)
		return (NULL);
	temp->content = content;
	temp->next = NULL;
	return (temp);
}


int main()
{
    // In dieser main-Funktion erstellen wir ein neues Listenelement und überprüfen es

    // Ein Beispielinhalt (hier ein Integer)
    int *data = (int *)malloc(sizeof(int));
    *data = 42;

    // Aufrufen der ft_lstnew-Funktion, um ein neues Listenelement zu erstellen
    t_list *newNode = ft_lstnew(data);

    if (newNode == NULL)
    {
        printf("Fehler: Konnte kein neues Listenelement erstellen\n");
        return 1;
    }

    // Ausgabe des Inhalts des Listenelements (in diesem Fall ein Integer)
    printf("Inhalt des Listenelements: %d\n", *((int *)newNode->content));

    // Beachten Sie, dass Sie den Speicher für den Inhalt freigeben sollten, wenn er nicht mehr benötigt wird
    free(data);

    // Freigabe des Listenelements selbst
    free(newNode);

    return 0;
}
