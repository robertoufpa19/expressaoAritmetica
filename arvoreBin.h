
typedef struct arv Arv;

Arv* arv_criavazia(void);
Arv* arv_cria(char c, Arv* e, Arv* d);
Arv* arv_libera(Arv* a);
int arv_vazia(Arv* a);

int arv_pertence(Arv* a, int c);


void arv_imprime(Arv* a);
void arv_inordem (Arv* a);
void arv_preordem (Arv* a);
void arv_posordem (Arv* a);

 void imprime_expressao(Arv* a);


Arv* arv_insere(Arv* a, char v, int direcao);










