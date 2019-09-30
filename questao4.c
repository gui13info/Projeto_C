#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");
    char texto[90];
    char texto2[90];
    printf("Digite um texto de, no máximo, 90 caracters: ");
    gets(texto);
    int i = 0;
    for (i = 0; i < sizeof(texto) && texto[i] != '\0'; i++){
            texto2[i] = texto[i];
        }
        printf("%s", texto2);
    return 0;
}
