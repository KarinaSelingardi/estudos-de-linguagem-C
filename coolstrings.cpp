#include <stdio.h>
#include <string.h>

void createUniqueStrings(char *s) {
    int freq[26] = {0};  // Frequência de cada caractere do alfabeto
    int length = strlen(s);
    
    // Contagem de frequência dos caracteres
    for (int i = 0; i < length; i++) {
        freq[s[i] - 'a']++;
    }
    
    // Criação das strings únicas
    char uniqueStrings[length + 1];  // String final
    int index = 0;
    
    while (length > 0) {
        int added = 0;  // Flag para verificar se algum caractere foi adicionado à string
        for (int i = 0; i < 26; i++) {
            if (freq[i] == 1) {
                uniqueStrings[index++] = 'a' + i;  // Adiciona o caractere à string final
                freq[i] = 0;  // Remove o caractere da contagem de frequência
                added = 1;
                length--;
            }
        }
        if (!added) {
            break;  // Se nenhum caractere foi adicionado, encerra o loop
        }
    }
    
    uniqueStrings[index] = '\0';  // Adiciona o terminador nulo à string final
    
    printf("Última string criada: %s\n", uniqueStrings);
}

int main() {
    char s[100];
    
    printf("Digite a string: ");
    scanf("%s", s);
    
    createUniqueStrings(s);
    
    return 0;
}

