#include <stdio.h>
#include <stdlib.h>
#include "arvorebin.h"

int main(){

    /*    // primeira arvore
         Arv* arvoreBinariaTeste =
          // 2+3
        arv_cria('+',
                  arv_cria('2', arv_cria('(',arv_criavazia(),arv_criavazia()), arv_criavazia()),
                   arv_cria(')', arv_cria('6',arv_criavazia(),arv_criavazia()), arv_criavazia()) );
  */

      // segunda arvore
           // (2+3)*(3-6)
         Arv* arvoreBinariaTeste2=

             arv_cria('*',
                    arv_cria('+',
                       arv_cria('2', arv_cria('(',arv_criavazia(),arv_criavazia()), arv_criavazia()),
                       arv_cria(')', arv_cria('6',arv_criavazia(),arv_criavazia()), arv_criavazia()) ),

                  arv_cria('-',
                    arv_cria('3', arv_cria('(',arv_criavazia(),arv_criavazia()), arv_criavazia()),
                     arv_cria(')', arv_cria('5',arv_criavazia(),arv_criavazia()), arv_criavazia()) )  );


    /*printf("Imprime Arvore Teste 1 \n");
	arv_imprime(arvoreBinariaTeste);

	printf("\n");
	printf("\n");
	    printf("Imprime expressao em Ordem \n");
	    imprime_expressao(arvoreBinariaTeste);

	printf("\n");
	printf("\n");
	*/



		printf("Imprime Arvore Binaria Teste 2\n");
	arv_imprime(arvoreBinariaTeste2);
	printf("\n");
	printf("\n");
	  printf("Imprime expressao aritimetica(Notacao Polonesa)  \n");
	    imprime_expressao(arvoreBinariaTeste2);

	printf("\n");
	printf("\n");















}
