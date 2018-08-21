

#include<stdlib.h> 
#include<stdio.h> 
#include<conio.h> 

struct bagagem

{ 
int codigo_bagagem; 
int num_bagagem; 
int num_voo;

}; 

void menu(); 
void consultar(); 
void cadastro(); 
void selecao(); 
void remover(); 

struct bagagem *inf; 

main() 
{ 

menu(); 
system("pause"); //isso aq nao pode ficar depois do return pq o return e finalizado
return 0; 
} 

void menu() 

{ 

printf("\n Empresa VOEBEM \n"); 

printf(" ============================ \n\n"); 

printf(" ____________________________\n"); 

printf("| Escolha uma opcao abaixo |\n"); 

printf("|----------------------------|\n");
printf("| 1 - Cadastrar Bagagem |\n"); 

printf("| 2 - Consultar Bagagem |\n"); 

printf("| 3 - Remover |\n"); 

printf("| 0 - Sair |\n"); 

printf("|____________________________|\n... ");

selecao(); 

} 

void selecao(){ 
int opcao; 

printf("\nDigite uma das opcoes: "); 

scanf("%i", &opcao); 

switch (opcao){ 
case 1: 
cadastro(); 
menu(); 
break; 
case 2: 
consultar(); 
menu(); 
break; 
case 3: 
remover(); 
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

//FUNÇÃO CADASTRAR 

void cadastro(){ 
int num; 
do{ 
inf = (struct bagagem *) malloc(sizeof(struct bagagem )); 
printf("\n\n*****CADASTRO DE BAGAGEM *****\n"); 

printf("\nCodigo de bagagem: "); 

scanf("%d", &inf->codigo_bagagem); 

fflush(stdin); 

printf("\nNumero bagagem: "); 

scanf("%d", &inf->num_bagagem); 

printf("\nNumero do voo: "); 

scanf("%d", &inf->num_voo); 

 
         

printf(" ___________________________________\n"); 

printf("| Escolha uma opcao abaixo |\n"); 

printf("|------------------------------|\n");

printf("| 1 - Cadastrar outra Bagagem |\n"); 

printf("| 0 - Voltar ao menu |\n"); 

printf("|______________________________|\n");

printf("Opcao: "); 

scanf("%d",&num); 

}
while(num!=0); 
system("cls"); 
}

void remover(){ 

free(inf); //aq nao deve colocar * do ponteiro

 //break; break nao pode ser usando fora de loop 

menu(); 

} 

//FUNÇÃO CONSULTAR 

void consultar(){ 

system("cls"); 
int consult; 
printf("Digite o numero da bagagem: "); 
scanf("%d", &consult); 

if(inf->num_bagagem!=consult){ 
printf("Numero nao encontrado\n"); 
printf("Tente Novamente"); 
getch(); 
system("cls"); 
consultar(); 
}else{ 

printf("\n-----------------------------\n");
printf("\nNumero do voo encontrado"); 
printf("\nNumero bagagem: %d ", inf->num_bagagem); 


getch(); 
system("cls"); 
menu(); 
}
}


