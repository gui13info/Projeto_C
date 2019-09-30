#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    char texto[90];
        printf("Digite um texto de, no máximo, 90 caracters: ");
        gets(texto);
        int vog = 0, i = 0;
        for (i = 0; i < sizeof(texto) && texto[i] != '\0'; i++){
            if(texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u'){
                vog++;
            }
            if(texto[i] == 'A' || texto[i] == 'E' || texto[i] == 'I' || texto[i] == 'O' || texto[i] == 'U'){
                vog++;
            }
        }
        printf("A quantidade de vogais é: %d \n", vog);
    return 0;
}
