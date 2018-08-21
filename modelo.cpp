#include <stdio.h>
#include <conio.h>
#include <cstdlib>
struct aviao
{
char modelo[8];
char fabricante[30];
int passageiros;
float comprimento;
float altura;
float velocidade;
float altitude;
char motor [10];
struct aviao *prox;
};
struct aviao *aux, *inicio = NULL, *final = NULL;
/*função responsável por criar a lista*/
struct aviao* cria(void)
{
return NULL;
}
/* função com tipo de retorno ponteiro para estrutura, realizando inserção
pelo final*/
struct aviao* insere_final()
{

int x;
printf("Entre com um numero inteiro: ");
scanf("%i",&x);
aux = (struct aviao*) malloc (sizeof(struct aviao));
aux->passageiros = x;
aux -> prox = (struct aviao *) NULL;

if(inicio == NULL)
inicio = final = aux;

else
{
final -> prox = aux;
final = aux;
}

return inicio;
}
/* função que verifica o estado da lista: retorno 1 se vazia ou 0 se não
vazia*/

int lista_vazia(struct aviao *lista)
{

if(lista == NULL)

return 1;

else

return 0;
}
/* função responsável por imprimir o conteúdo da lista*/
void visualiza_lista_final(struct aviao *lista)
{
/* verifica se a lista está vazia*/
if(!lista_vazia(lista))
{
aux = lista;
while(aux != (struct aviao *) NULL)
{
printf("Valor da Lista: %i\n", aux->passageiros);
aux = aux -> prox;
}
}
/* indica que a lista está vazia*/
else
printf("\nTentou imprimir uma lista vazia!");
getch();
}
/* função que busca um elemento na lista*/
struct aviao* busca(struct aviao* lista, int busca)
{
bool achou = 0;
if(!lista_vazia(lista))
{
for(aux=lista;aux!=NULL;aux=aux->prox)
{
if(aux->passageiros == busca)
{
printf("Valor encontrado.\n");
achou = 1;
}
}
if(!achou)
printf("Valor não encontrado.\n");
}
else
{
printf("\nTentou buscar de uma lista vazia");
}
getch();
return NULL;
}
/* função para excluir registros da lista*/
struct aviao* excluir(struct aviao *lista, int valor)
{
struct aviao *ant = NULL; /* ponteiro para elemento anterior */
aux = lista; /* ponteiro para percorrer a lista */
if(!lista_vazia(lista))
{
/* procura elemento na lista, guardando anterior */
while(aux!= NULL && aux->passageiros != valor)
{
ant = aux;
aux = aux->prox;
}
/* verifica se achou o elemento */
if(aux == NULL)
{
printf("\nNao foi possivel a exclusao. Elemento não encontrado!");
getche();
return lista;
}
/* retira elemento */
if(ant == NULL)
lista = aux->prox;
else
ant->prox = aux->prox;
free(aux);
printf("Elemento removido com sucesso!\n");
getche();
return lista;
}
else
{
printf("\nTentou remover de uma lista vazia");
getche();
return lista;
}
}
int main()
{
int op, vremover, vbuscar;
struct aviao *lista;
lista = cria();
while(op != 5)
{
system("cls");
printf("\nPrograma Para Manipulacao de Listas Ligadas");
printf("\n1 - Inserir no Final da Lista");
printf("\n2 - Visualizar Lista");
printf("\n3 - Buscar Elemento na Lista");
printf("\n4 - Excluir Elemento");
printf("\n5 - Sair do Programa");
printf("\nEntre com a Opcao Desejada: ");
scanf("%i",&op);
switch(op)
{
case 1:
lista = insere_final();
break;
case 2: visualiza_lista_final(lista);
break;
case 3:
printf("Entre com o valor que se deseja buscar: ");
scanf("%d",&vbuscar);
busca(lista,vbuscar);
break;
case 4:
printf("Entre com o valor que deseja remover: ");
scanf("%i",&vremover);
lista = excluir(lista, vremover);
break;
case 5: exit(1);
}
}
}










