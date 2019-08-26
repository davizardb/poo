
    /* DAVI LUIS BARBOSA SILVA - MAT-1469830 */

1) Questão

    void inverte_fila (Fila *f){

        while (!filaIsEmpty(f)){
            pilhaPush(p, f->head->value);
            filaRemove(f);
        }
        while(!pilhaIsEmpty(p)){
            filaIsert(f, p->head->value);
            pilhaPop(p);
        }
    }

2) Questão

    void fura_fila(Fila *f, int x){
        f->head->value = x;
    }


3)  Questão

    int filas_iguais (Fila *f1, Fila *f2){
        No *fifo = f1;
        No *fifo1 = f2;

      for (fifo=f1->head, fifo1=f2->head; fifo!=NULL, fifo1!=NULL; fifo=fifo->next, fifo1=fifo1->next){

          if (fifo->value != fifo1->value)
            return 0;

          else
            return 1;   
      }  
        
    }

4) Questão

    int pilhas_iguais(Pilha *p1, Pilha *p2){

        No *s1 = p1;
        No *s2 = p2;

  for (s1 = p1->head, s2 = p2->head; s1!=NULL, s2!=NULL; s1=s1->next, s2=s2->next){

    if (s1->value != s2->value)
    return 0;

    else 
    return 1; 

  }
}

5) Questão

    void print_ordem(Pilha *p){
        Pilha *Aux = criarPilha();
        No *aux;

        while(!pilhaIsEmpty(p)){
            pilhaPush(Aux, p->head->value);
            pilhaPop(p);
        }
            for (aux = Aux->head; aux!= NULL; aux=aux->next){
                printf("%d\n", aux->value);
        } 
    }
