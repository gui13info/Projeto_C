#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <math.h>
#include <string.h>

int par (int n1)
{
    int resultado;
    resultado = n1%2;
    return (resultado);
}

int main()
{
    setlocale(LC_ALL, "");
    int num = 0;

    do{
        printf("\n*=========================MENU=========================*\n\n");
        printf("OP��ES DO MENU:\n"
               "Digite '0' para sair do MENU\n"
               "Digite '1' para saber se seu n�mero � par.\n"
               "Digite '2' para saber pot�ncia em nota��o cient�fica.\n"
               "Digite '3' para saber a raiz em nota��o cient�fica.\n"
               "Digite '4' para saber se o ano � bissexto.\n"
               "Digite '5' para saber sua m�dia ponderada.\n"
               "Digite '6' para saber sua m�dia.\n"
               "Digite '7' para saber o fatorial de um n�mero.\n"
               "Digite '8' para saber se o n�mero � primo.\n"
               "Digite '9' para a sequ�ncia de Fibonacci.\n"
               "Digite '10' para ver o nome do estudante.\n"
               );
        printf("\n*======================================================*\n\n");
        printf("DIGITE A OP��O PARA ENTRAR NO MENU: ");
        scanf("%d", &num);

        switch(num){
            case 0:{
                printf("Foi um prazer t�-lo aqui!\n");
                printf("Volte sempre!\n");
                exit(0);
                break;
            }
            case 1:{
                int num1, resultado;
                printf("\nDigite um n�mero: ");
                scanf("%d", &num1);
                resultado = par(num1);
                    if (num1%2==0){
                        printf("O resto da divis�o �: %d", resultado);
                        printf("\nSeu n�mero � par");
                    }else{
                        printf("O resto da divis�o �: %d", resultado);
                        printf("\nSeu n�mero n�o � par");
                    }
                break;
            }
            case 2:{
                float n1, poten;
                int n2;

                printf("\nDigite o n�mero: ");
                scanf("%f", &n1);
                printf("Digite o expoente: ");
                scanf("%d", &n2);
                poten = pow(n1, n2);
                printf("O resultado em nota��o cient�fica � %e\n", poten);
                break;
            }
            case 3:{
                float n1;
                int n2, poten, raiz;

                printf("\nDigite o n�mero: ");
                scanf("%f", &n1);
                printf("Digite o expoente: ");
                scanf("%d", &n2);
                poten = pow(n1, n2);
                raiz = sqrt(poten);
                printf("O resultado � %e\n", raiz);
                break;
            }
            case 4:{
                int ano;

                printf("\nDigite o ano: ");
                scanf("%d", &ano);
                ano = ano%4;
                if( ano == 0){
                    printf("Esse ano � bissexto\n");
                }else{
                    printf("Esse ano n�o � bissexto\n");
                }
                break;
            }
            case 5:{
                float not1, not2, not3, media;

                printf("Digite sua primeira nota: ");
                scanf("%f", &not1);
                printf("Digite sua segunda nota: ");
                scanf("%f", &not2);
                printf("Digite sua terceira nota: ");
                scanf("%f", &not3);
                media = ((not1*1)+(not2*1)+(not3*2))/4.0;
                printf("Sua m�dia ponderada �: %.2f", media);
                if (media >= 60.0){
                    printf("\nVoc� foi aprovado!!");
                }else{
                    printf("\nVoc� foi reprovado!!");
                }
                break;
            }
            case 6:{
                float not1, not2, media;
               printf("Digite sua primeira nota: ");
                scanf("%f", &not1);
                printf("Digite sua segunda nota: ");
                scanf("%f", &not2);
                media = (not1 + not2)/2;
                printf("Sua m�dia �: %.2f",media);
                break;
            }
            case 7:{
                int num1, resultado;
                printf("Digite um n�mero: ");
                scanf("%d", &num1);
                resultado = par(num1);
                printf("O fatorial desse n�mero �: %d", resultado);
                break;
            }
            case 8:{
                int primo, i, resultado_primo = 0;

                do{
                    printf("\nDigite um n�mero: ");
                        scanf("%d", &primo);
                        if (primo <= 0){
                         printf("\nDigite um n�mero positivo\n");
                        }
                }while(primo <=0);
                    for (i = 2; i <= primo/2; i++){
                        if(primo % i == 0){
                            resultado_primo++;
                            break;
                        }
                    }
                    if (resultado_primo == 0){
                        printf("\n� um n�mero primo %d\n", primo);
                    }else{
                        printf("\nN�o � um n�mero primo %d\n", primo);
                    }
                break;
            }
            case 9:{
                int f1,f2;
                int i, n, aux;
                f1 = 0;
                f2 = 1;

                printf("\nNumeros da sequencia: ");
                scanf("%d", &n);

                printf("\nSequencia fibonacci: ");
                printf("%d %d ", f1, f2);

                for(i=0; i < n; i++){
                    aux = f1 + f2;
                    f1 = f2;
                    f2 = aux;
                    printf("%d ", aux);
                    }
                break;
            }
            case 10:{
                char str[27] = "Guilherme Marques de Matos";
                int matricula;

                //strcat(str, " Marques de Matos");//CONCATENA COM O CONTE�DO "Guilherme" COM O CONTE�DO DA STRING str
                printf("\nNome: %s\n", str);
                matricula = 1910025433;
                printf("Minha matr�cula �: %X\n", matricula);
                break;
            }
            default:
                printf("N�MERO INV�LIDO!!!\n");
        }
        }while(num != 0);


    system("pause");
    return 0;

}
