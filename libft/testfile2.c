#include <stdio.h>
#include <ctype.h> // Für die Standard-C-Funktionen
#include "libft.h" // Hier sollte Ihre eigene Header-Datei stehen

void run_isalpha_tests() {
    char test_chars[] = {'A', '5', 'a', '!', 'Z'};
    int num_tests = sizeof(test_chars) / sizeof(test_chars[0]);

    for (int i = 0; i < num_tests; i++) {
        char test_char = test_chars[i];
        int std_result = isalpha(test_char); // Standard-C-Funktion
        int my_result = ft_isalpha(test_char); // Ihre eigene Funktion

        if (std_result == my_result) {
            printf("Test für ft_isalpha mit '%c' bestanden.\n", test_char);
        } else {
            printf("Test für ft_isalpha mit '%c' fehlgeschlagen. (std: %d, ft: %d)\n", test_char, std_result, my_result);
        }
    }
}

int main() {
    run_isalpha_tests();
    
    // Führen Sie ähnliche Tests für die anderen Funktionen durch
    
    return 0;
}
