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
                vog++;
        }
        printf("A quantidade de caracters é: %d \n", vog);

    system("pause");
    return 0;

}

