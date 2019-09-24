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
        printf("OPÇÕES DO MENU:\n"
               "Digite '0' para sair do MENU\n"
               "Digite '1' para saber se seu número é par.\n"
               "Digite '2' para saber potência em notação científica.\n"
               "Digite '3' para saber a raiz em notação científica.\n"
               "Digite '4' para saber se o ano é bissexto.\n"
               "Digite '5' para saber sua média ponderada.\n"
               "Digite '6' para saber sua média.\n"
               "Digite '7' para saber o fatorial de um número.\n"
               "Digite '8' para saber se o número é primo.\n"
               "Digite '9' para a sequência de Fibonacci.\n"
               "Digite '10' para ver o nome do estudante.\n"
               );
        printf("\n*======================================================*\n\n");
        printf("DIGITE A OPÇÃO PARA ENTRAR NO MENU: ");
        scanf("%d", &num);

        switch(num){
            case 0:{
                printf("Foi um prazer tê-lo aqui!\n");
                printf("Volte sempre!\n");
                exit(0);
                break;
            }
            case 1:{
                int num1, resultado;
                printf("\nDigite um número: ");
                scanf("%d", &num1);
                resultado = par(num1);
                    if (num1%2==0){
                        printf("O resto da divisão é: %d", resultado);
                        printf("\nSeu número é par");
                    }else{
                        printf("O resto da divisão é: %d", resultado);
                        printf("\nSeu número não é par");
                    }
                break;
            }
            case 2:{
                float n1, poten;
                int n2;

                printf("\nDigite o número: ");
                scanf("%f", &n1);
                printf("Digite o expoente: ");
                scanf("%d", &n2);
                poten = pow(n1, n2);
                printf("O resultado em notação científica é %e\n", poten);
                break;
            }
            case 3:{
                float n1;
                int n2, poten, raiz;

                printf("\nDigite o número: ");
                scanf("%f", &n1);
                printf("Digite o expoente: ");
                scanf("%d", &n2);
                poten = pow(n1, n2);
                raiz = sqrt(poten);
                printf("O resultado é %e\n", raiz);
                break;
            }
            case 4:{
                int ano;

                printf("\nDigite o ano: ");
                scanf("%d", &ano);
                ano = ano%4;
                if( ano == 0){
                    printf("Esse ano é bissexto\n");
                }else{
                    printf("Esse ano não é bissexto\n");
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
                printf("Sua média ponderada é: %.2f", media);
                if (media >= 60.0){
                    printf("\nVocê foi aprovado!!");
                }else{
                    printf("\nVocê foi reprovado!!");
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
                printf("Sua média é: %.2f",media);
                break;
            }
            case 7:{
                int num1, resultado;
                printf("Digite um número: ");
                scanf("%d", &num1);
                resultado = par(num1);
                printf("O fatorial desse número é: %d", resultado);
                break;
            }
            case 8:{
                int primo, i, resultado_primo = 0;

                do{
                    printf("\nDigite um número: ");
                        scanf("%d", &primo);
                        if (primo <= 0){
                         printf("\nDigite um número positivo\n");
                        }
                }while(primo <=0);
                    for (i = 2; i <= primo/2; i++){
                        if(primo % i == 0){
                            resultado_primo++;
                            break;
                        }
                    }
                    if (resultado_primo == 0){
                        printf("\nÉ um número primo %d\n", primo);
                    }else{
                        printf("\nNão é um número primo %d\n", primo);
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

                //strcat(str, " Marques de Matos");//CONCATENA COM O CONTEÚDO "Guilherme" COM O CONTEÚDO DA STRING str
                printf("\nNome: %s\n", str);
                matricula = 1910025433;
                printf("Minha matrícula é: %X\n", matricula);
                break;
            }
            default:
                printf("NÚMERO INVÁLIDO!!!\n");
        }
        }while(num != 0);


    system("pause");
    return 0;

}
