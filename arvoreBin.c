



#include <stdio.h>
#include <stdlib.h>
#include "arvorebin.h"

struct arv{
	char info;
    struct arv* esq;
	struct arv* dir;

};


Arv* arv_criavazia(void){
	return NULL;
}

Arv* arv_cria(char c, Arv* sae, Arv* sad){
	Arv* p = (Arv*) malloc(sizeof(Arv));
	p->info = c;
	p->esq = sae;
	p->dir = sad;
	return p;
}

int arv_vazia(Arv* a){
	return a == NULL;
}

 void arv_imprime(Arv* a){

	printf("<");

	if(!arv_vazia(a)){
		printf("%c",a->info); //Mostra nó ra
		arv_imprime(a->esq); //Mostra sae
		arv_imprime(a->dir); //Mostra sad
	}

	printf(">");
}



Arv* arv_libera(Arv* a){
	if(!arv_vazia(a)){
		arv_libera(a->esq);
		arv_libera(a->dir);
		free(a);
	}
	return NULL;
}

int arv_pertence(Arv* a, int c){

	if(arv_vazia(a)){
        return 0;
	}else if( a->info == c ||
              arv_pertence(a->esq, c )|| arv_pertence(a->dir, c)){
	  return 1;
	}else{
        return 0;
	}
}

         // imprime expressao em ordem
        void imprime_expressao(Arv* a){

           // printf("(");
            if(!arv_vazia(a)  ){
                imprime_expressao(a->esq); //Mostra sae
                printf("%c",a->info); //Mostra nó ra
                imprime_expressao(a->dir); //Mostra sad
            }


           // printf(")");

        }




         void arv_inordem (Arv* a){
        if (!arv_vazia(a))
        {
        arv_inordem (a->esq);
        arv_imprime(a); // por exemplo imprime
        arv_inordem (a->dir);
        }
    }

        void arv_preordem (Arv* a){
        if (!arv_vazia(a))
        {
        arv_imprime(a);// por exemplo imprime
        arv_preordem(a->esq);
        arv_preordem(a->dir);
        }
        }

        void arv_posordem (Arv* a){
        if (!arv_vazia(a))
        {
        arv_posordem (a->esq);
        arv_posordem (a->dir);
         arv_imprime(a); // por exemplo imprime
        }
        }



