#include <iostream>
#include <string.h>

#define MAX_LISTA 100000
#define MAX_NOME 50

using namespace std;

typedef struct{
    char nome[MAX_NOME],
    amigo;
    int tam;
} TAmigo;


int compara(const void *p1, const void *p2){
	TAmigo *i = (TAmigo *)p1, *j = (TAmigo *)p2;

	if(i->amigo > j->amigo)
		return -1;
	else if(i->amigo < j->amigo)
		return 1;
	else
		return strcmp(i->nome, j->nome);
}

TAmigo vetor[MAX_LISTA];

int main(){

	TAmigo ganhador;
	char resp[5], nome[MAX_NOME];
	int i, n=0;
	ganhador.tam = 0;

	while(1){
		cin >> nome;
		if(strcmp(nome, "FIM") == 0){
			break;
		}
		cin >> resp;

		strcpy(vetor[n].nome, nome);
		vetor[n].tam = strlen(vetor[n].nome);

		if(strcmp(resp, "YES") == 0){
			vetor[n].amigo = 1;

			if(vetor[n].tam > ganhador.tam){
				ganhador.tam = vetor[n].tam;
				strcpy(ganhador.nome, vetor[n].nome);
			}
		}else{
			vetor[n].amigo = 0;
		}
		n++;
	}

	qsort(vetor, n, sizeof(TAmigo), compara);

	cout << vetor[0].nome << endl;

	for(i=1; i<n; i++){
		if(strcmp(vetor[i].nome, vetor[i-1].nome) != 0){
            cout << vetor[i].nome << endl;
        }
    }

    cout << endl << "Amigo do Habay:" << endl;
    cout << ganhador.nome << endl;

	return 0;
}

