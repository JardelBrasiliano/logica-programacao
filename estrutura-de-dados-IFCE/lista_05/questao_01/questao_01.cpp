#include <iostream>
#include <stack>
#define MAXTAM 1005

using namespace std;

typedef struct {
    int Item[MAXTAM];
    int Topo;
} TPilha;

void TPilha_Inicia(TPilha *p){
    p->Topo = -1;
}

int TPilha_Vazia(TPilha *p){
    if(p->Topo == -1){
        return -1;
    }else{
        return 0;
    }
}

int TPilha_Cheia(TPilha *p){
    if(p->Topo == MAXTAM-1){
        return -1;
    }else{
        return 0;
    }
}

int TPilha_Insere(TPilha *p, int x){
    if(TPilha_Cheia(p) == 1){
        return -1;
    }else{
        p->Topo++;
        p->Item[p->Topo] = x;
    }
}

int TPilha_Retira(TPilha *p){
    int aux;
    if(TPilha_Vazia(p) == 1){
        return -1;
    }else{
        aux = p->Item[p->Topo];
        p->Topo--;
        return aux;
    }
}

int main () {
    int n, atual, top, vetor[MAXTAM];
    int teste;


    while(cin >> n && n){
        while(cin >> vetor[0] && vetor[0]){
            for(int i = 1; i < n; i++){
                cin >> vetor[i];
            }

            TPilha *pilha = (TPilha*)malloc(sizeof(TPilha));
            TPilha_Inicia(pilha);
            atual = 0;

            for (int i = 1; i <= n; i++) {
                TPilha_Insere(pilha, i);

                while (TPilha_Vazia(pilha) != -1 && vetor[atual] == pilha->Item[pilha->Topo]) {
                    atual++;

                    teste = TPilha_Retira(pilha);
                }
            }
            cout << ((TPilha_Vazia(pilha) == -1) ? "Yes" : "No") << endl;
        }
        cout << endl;
    }
    return 0;
}
