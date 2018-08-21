#include<stdlib.h>;
#include<stdio.h>;
#include<conio.h>;

struct taxiamento

{

int n_voo;
char modelo_aeronave[40];
char empresa_aerea[40];
int horario_saida;

};

void menu();
void cadastrarTaxiamento();
void autorizaTaxiamento();
struct taxiamento *inf;

main()

{

menu();

return 0;

system("pause");

}

void menu()

{

printf("\n Empresa VOEBEM \n");
printf("============================ \n\n");
printf(" ____________________________\n");
printf("| Escolha uma opcao abaixo |\n");
printf("|-- -- -- -- -- -- -- -- -- -- -- -- -- -- |\n");
printf("| 1 - Cadastrar Taxiamento |\n");
printf("| 2 - Autoriza Taxiamento |\n");
printf("| 0 - Sair |\n");
printf("|____________________________|\n");


}

void selecao(){

int opcao;

printf("\nDigite uma das opcoes:");
scanf("%i",opcao);

switch (opcao){

case 1:
cadastra();
menu();
break;

case 2:
consultar();
menu();
break;

case 0:
system("pause");
exit(0);

break;
default:

printf("\n\nOpcao nao encontrada.\nTente Novamente\n\n");
system("pause");
system("cls");

menu();
break;

}

}

//FUNÇÃO CADASTRAR TAXIAMENTO

void cadastrarTaxiamento(){

int num;

do{
inf = (struct taxiamento *) malloc(sizeof(struct taxiamento));
printf("\n\n*****CADASTRO DE TAXIMANTO*****\n");
printf("\nNumero do voo:");
scanf("%d",inf->n_voo);
fflush(stdin);
printf("\N Modelo da Aeronave:");
fflush(stdin);
gets(inf->modelo_aeronave);
printf("\N Empresa Aerea:");
fflush(stdin);
gets(inf->empresa_aerea);
printf("\nHorario de saída:");
scanf("%d",inf->horario_saida);

}

//FUNÇÃO AUTORIZA TAXIAMENTO

void autorizaTaxiamento(){

printf("\n-- -- -- -- -- -- -- -- -- -- -- -- -- -- -");
printf("\nAeronaves autoriazadas para Taxiamento");
printf("\nNumero do Voo: %d", inf->n_voo);
printf("\n\nModelo da Aeronave: %s", inf->modelo_aeronave);
printf("\n\nEmpresa Aerea: %d", inf->empresa_aerea);
printf("\n nHorario de saída: %d", inf->horario_saida);
getch();
system("cls");

menu();
}

