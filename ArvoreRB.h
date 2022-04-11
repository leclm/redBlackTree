typedef struct NO* ArvoreRB;

ArvoreRB* cria_ArvoreRB();

void libera_ArvoreRB(ArvoreRB* raiz);

int consulta_ArvoreRB(ArvoreRB *raiz, int valor);

int insere_ArvoreRB(ArvoreRB* raiz, int valor);

int remove_ArvoreRB(ArvoreRB *raiz, int valor);

int estaVazia_ArvoreRB(ArvoreRB *raiz);

int totalNO_ArvoreRB(ArvoreRB *raiz);

int altura_ArvoreRB(ArvoreRB *raiz);

void preOrdem_ArvoreRB(ArvoreRB *raiz, int H);

void emOrdem_ArvoreRB(ArvoreRB *raiz, int H);

void posOrdem_ArvoreRB(ArvoreRB *raiz, int H);
