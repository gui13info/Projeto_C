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

        printf("Digite um segundo texto de, no máximo, 90 caracters: ");
        gets(texto2);
        int vog = 0, vog2 = 0, i = 0;
        for (i = 0; i < sizeof(texto) && texto[i] != '\0'; i++){
                vog++;
            for (i = 0; i < sizeof(texto2) && texto2[i] != '\0'; i++){
                vog2++;
            }
        }
        if (vog == vog2){
                    printf("São iguais.");
                }else{
                    printf("São diferentes");
                }
    return 0;
}
