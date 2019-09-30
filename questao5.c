#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");
    char texto[8] = "Aula de ";
    char texto2[41] = "Técnica de Desenvolvimento de Algoritmos";
    char texto3[100];
    char texto4[100];
    char texto_saida[100];
    int i = 0;
    for (i = 0; i < sizeof(texto) && texto[i] != '\0'; i++){
            texto3[i] = texto[i];
        }
    for (i = 0; i < sizeof(texto2) && texto2[i] != '\0'; i++){
            texto4[i] = texto2[i];
    }
    printf("%s", texto3);
    printf("%s", texto4);
    return 0;
}
