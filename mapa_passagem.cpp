#include <stdio.h>
#include <conio.h>
#include <cstdlib>


struct passagem {
int numero;
int numeroVoo;
int dataEmbarque;
int horaEmbarque;
int portaoEmbarque;
struct passagem* prox;

};

typedef struct passagem PASSAGEM;

PASSAGEM* inicializar_Passagem(void){

return NULL;

}

PASSAGEM* cadastrar_Passagem(PASSAGEM* p){

PASSAGEM* novo = (PASSAGEM*) malloc(sizeof(PASSAGEM));

printf("Entre com o numero da passagem: ");
scanf("%d",&novo->numero);

printf("Entre com numero do voo: ");
scanf("%d",&novo->numeroVoo);

printf("Entre com a data do embarque: ");
scanf("%d",&novo->dataEmbarque);

printf("Entre com hora do embarque: ");

scanf("%d",&novo->horaEmbarque);

printf("Entre com o portao de embarque: ");

scanf("%d",&novo->portaoEmbarque);

novo->prox = p;

return novo;

free(novo);

};

void imprimir_Passagem(PASSAGEM* p){

PASSAGEM* aux;

for (aux = p;aux != NULL;aux = aux->prox){

printf("Numero da passagem....: %d\n",aux->numero);
printf("Numero do voo.........: %d\n",aux->numeroVoo);
printf("Data do embarque......: %d\n",aux->dataEmbarque);
printf("Hora do embarque......: %d\n",aux->horaEmbarque);
printf("Portao do embarque....: %d\n",aux->portaoEmbarque);

};

system("PAUSE");

};

void consulta_Passagem(PASSAGEM* v, int numero){

PASSAGEM* aux;

printf("Informe o numero da passagem: ");

scanf("%d",&numero);

for (aux = v; aux != NULL; aux = aux->prox) {

if (aux->numero = numero) {

printf("Numero da passagem....: %d\n",aux->numero);
printf("Numero do voo.........: %d\n",aux->numeroVoo);
printf("Data do embarque......: %d\n",aux->dataEmbarque);
printf("Hora do embarque......: %d\n",aux->horaEmbarque);
printf("Portao do embarque....: %d\n",aux->portaoEmbarque);

} else {

printf("Passagem não encontrado!");

};

};

};

int main(int argc, char *argv[]) {

PASSAGEM* passagem;

passagem = inicializar_Passagem();

int opcao, consulta;

do {

system("CLS");

system("TITLE ETAPA 2 - Passo 3 ");
printf("\t\t\t Estrutura Passagem");
printf("\n\n\n");
printf("\n 1 - Cadrastrar passagem \n");
printf("\n 2 - Exibir passagem \n");
printf("\n 3 - Consulta passagem \n");
printf("\n 0 - Sair ");
printf("\n\n");
printf("\n Digite a opcao: ");
scanf ("%d",&opcao);

switch(opcao){

case 1:
passagem = cadastrar_Passagem(passagem);
break;

case 2:
imprimir_Passagem(passagem);
break;

case 3:
printf("Digite o numero da passagem: ");
scanf("%d",consulta);

consulta_Passagem(passagem,consulta);

case 0:
break;

default:

printf("\n Opcao incorreta, tente novamente!\n");
system ("pause");

};

} while (opcao != 0);

system ("pause");

return EXIT_SUCCESS;

}


