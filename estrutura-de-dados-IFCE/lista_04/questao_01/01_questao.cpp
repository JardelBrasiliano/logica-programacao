#include <iostream>
#include <string>

using namespace std;

typedef struct reg celula;

struct reg {
    string conteudo;
    struct reg *prox;
};

void imprimeLista(celula *le){
    celula *p;
    for( p=le ; p != nullptr ; p = p->prox){
        cout << p->conteudo << endl;
    }
}

void insereNoComecoDaLista(string x, celula *p){
    cout << x;
    celula *nova;

    nova = (celula*)malloc(sizeof(celula));
    nova->conteudo = x;
    nova->prox = p->prox;
    p->prox = nova;
}

int main(){
    cout << "Teste" << endl;

    celula *le;
    le = (celula *)malloc(sizeof(celula));
    le->conteudo = "A";
    le->prox = 0;

    insereNoComecoDaLista("B", le);

    imprimeLista(le);
    return 0;
}
