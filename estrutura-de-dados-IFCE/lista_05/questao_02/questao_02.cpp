#include <iostream>
#define MAXTAM 1005

using namespace std;

typedef struct {
    char Item[MAXTAM];
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

char TPilha_Retira(TPilha *p){
    char aux;
    if(TPilha_Vazia(p) == 1){
        return -1;
    }else{
        aux = p->Item[p->Topo];
        p->Topo--;
        return aux;
    }
}

int main(){
    int maxx = 0;
    char completa[100];

    while(cin >> completa && maxx < 10000){
        maxx++;

        TPilha *pilha = (TPilha*)malloc(sizeof(TPilha));
        TPilha_Inicia(pilha);

        for(int i = 0; completa[i] != '\0'; i++){
            if(completa[i] == ')'){
                if(TPilha_Vazia(pilha) == -1){
                    TPilha_Insere(pilha, ')');
                    break;
                }else{
                    TPilha_Retira(pilha);
                }
            }else if(completa[i] == '('){
                TPilha_Insere(pilha, '(');
            }
        }
        cout << ((TPilha_Vazia(pilha) == -1) ? "correct" : "incorrect") << endl;
    }
    return 0;
}
