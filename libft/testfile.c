#include <stdio.h>
#include <ctype.h> // Für die Standard-C-Funktionen
#include "libft.h" // Hier sollte Ihre eigene Header-Datei stehen

void test_isalpha() {
    char test_char = 'A';
    
    int std_result = isalpha(test_char); // Standard-C-Funktion
    int my_result = ft_isalpha(test_char); // Ihre eigene Funktion
    
    if (std_result == my_result) {
        printf("Test für isalpha mit '%c' bestanden.\n", test_char);
    } else {
        printf("Test für isalpha mit '%c' fehlgeschlagen. (std: %d, ft: %d)\n", test_char, std_result, my_result);
    }
}

void test_isdigit() {
    char test_char = '5';
    
    int std_result = isdigit(test_char); // Standard-C-Funktion
    int my_result = ft_isdigit(test_char); // Ihre eigene Funktion
    
    if (std_result == my_result) {
        printf("Test für isdigit mit '%c' bestanden.\n", test_char);
    } else {
        printf("Test für isdigit mit '%c' fehlgeschlagen. (std: %d, ft: %d)\n", test_char, std_result, my_result);
    }
}

void test_isalnum() {
    char test_char = 'X';
    
    int std_result = isalnum(test_char); // Standard-C-Funktion
    int my_result = ft_isalnum(test_char); // Ihre eigene Funktion
    
    if (std_result == my_result) {
        printf("Test für isalnum mit '%c' bestanden.\n", test_char);
    } else {
        printf("Test für isalnum mit '%c' fehlgeschlagen. (std: %d, ft: %d)\n", test_char, std_result, my_result);
    }
}

int main() {
    // Testfälle für isalpha, isdigit und isalnum aufrufen
    test_isalpha();
    test_isdigit();
    test_isalnum();
    
    return 0;
}
