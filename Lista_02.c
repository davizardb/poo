/* DAVI LUIS BARBOSA SILVA - MAT-1469830 */

1) Questão


void concatena(Lista *lista1, Lista *lista2){
  no *toVisit = list->first;
  no *toLast = NULL;

    while(toVisit != NULL){
      toLast = toVisit;
      toVisit = toVisit->next;
    }
      toLast->next = lista2->first;
}

2) Questão

void remove_duplicados(Lista *lista){
  no *ptr1, *ptr2, *dup;
  ptr1 = lista->first;
  
  while (ptr1 != NULL && ptr1->next!= NULL){
    ptr2 = ptr1;
    while (ptr2->next != NULL){
      if (ptr1->info == ptr2->next->info){
        dup = ptr2->next;
        ptr2->next = ptr2->next->next;
        free(dup);
      }
      else
      {
          ptr2 = ptr2->next;
      }
    }
      ptr1 = ptr1->next;
  }
}

3) Questao

void reverse(Lista *lista){
  no *current = lista->first;
  no *ant = NULL;
  no *prox = NULL;

    while(current != NULL){
      prox = current->next;
      current->next = ant;
      ant = current;
      current = prox;
    }
    lista->first = ant;
}

4) Questao

Lista *separa(Lista *lista, int n){
  no *aux;
  no *sep;
    for(aux = lista; aux!=NULL; aux = aux->next)
      if(aux->info == n){
        sep = aux->next;
        aux->next = NULL;
    }
    return sep;
}


5) Questao

#include<stdio.h>
#include<stdlib.h>

struct No { 

	int coeficiente; 
	int potencia; 
	struct No *prox; 
}; 
			

void criar_no(int a, int b, struct No **temp) { 

	struct No *p, *q; 
	q = *temp; 
	if(q == NULL) { 
		p =(struct No*)malloc(sizeof(struct No)); 
		p->coeficiente = a; 
		p->potencia = b; 
		*temp = p; 
		p->prox = (struct No*)malloc(sizeof(struct No)); 
		p = p->prox; 
		p->prox = NULL; 
	} 
	else{ 
		p->coeficiente = a; 
		p->potencia = b; 
		p->prox = (struct No*)malloc(sizeof(struct No)); 
		p = p->prox; 
		p->prox = NULL; 
	} 
} 

void add_polinomio(struct No *poli1, struct No *poli2, struct No *poli) { 

while(poli1->prox && poli2->prox) 
	{  
		if(poli1->potencia > poli2->potencia) { 
			poli->potencia = poli1->potencia; 
			poli->coeficiente = poli1->coeficiente; 
			poli1 = poli1->prox; 
		} 	
		else if(poli1->potencia < poli2->potencia){ 
			poli->potencia = poli2->potencia; 
			poli->coeficiente = poli2->coeficiente; 
			poli2 = poli2->prox; 
		} else{ 
			poli->potencia = poli1->potencia; 
			poli->coeficiente = poli1->coeficiente+poli2->coeficiente; 
			poli1 = poli1->prox; 
			poli2 = poli2->prox; 
		} 
		poli->prox = (struct No *)malloc(sizeof(struct No)); 
		poli = poli->prox; 
		poli->prox = NULL; 
	} 
while(poli1->prox || poli2->prox) 
	{ 
		if(poli1->prox) { 
			poli->potencia = poli1->potencia; 
			poli->coeficiente = poli1->coeficiente; 
			poli1 = poli1->prox; 
		} 
		if(poli2->prox) { 
			poli->potencia = poli2->potencia; 
			poli->coeficiente = poli2->coeficiente; 
			poli2 = poli2->prox; 
		} 
		poli->prox = (struct No *)malloc(sizeof(struct No)); 
		poli = poli->prox; 
		poli->prox = NULL; 
	} 
} 


void print(struct No *node) { 
while(node->prox != NULL) { 
	printf("%dx^%d", node->coeficiente, node->potencia); 
	node = node->prox; 
		
		if(node->prox != NULL) 
			printf(" + "); 
	} 
} 


int main() { 
	struct No *poli1 = NULL, *poli2 = NULL, *soma = NULL; 
	
	// polinomio A
	criar_no(3,2,&poli1); 
	criar_no(5,1,&poli1); 
	criar_no(1,0,&poli1); 
	
	// polinomio B
	criar_no(5,2,&poli2); 
	criar_no(2,0,&poli2); 
	
	printf("Polinomio A: "); 
	print(poli1); 
	
	printf("\nPolinomio B: "); 
	print(poli2); 
	
	soma = (struct No *)malloc(sizeof(struct No)); 
	
	
	add_polinomio(poli1, poli2, soma); 
	
	printf("\nResultado da Soma: "); 
	print(soma); 
	printf("\n");

return 0; 
}