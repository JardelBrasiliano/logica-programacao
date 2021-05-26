#include <iostream>
#include <stdlib.h>
#define MAXTAM 1005

using namespace std;

int auxFila = 0, auxFilaPrio = 0, auxPilha = 0;

int compareQsort (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main(){

    int n, opcao, entrada[1005], entradaPrioridade[1005];

    while(cin >> n){
        int totalEntrada = 0;
        bool ehPilha = true, ehFila = true, ehFilaPrio = true;

        for(int i=0; i<n; i++){
            cin >> opcao;

            if(opcao == 1){
                cin >> entrada[totalEntrada];

                entradaPrioridade[totalEntrada] = entrada[totalEntrada];
                totalEntrada++;
                auxPilha++;

            }else if(opcao == 2){
                int compare, ordList;
                cin >> compare;

                auxFilaPrio = totalEntrada;
                qsort( entradaPrioridade,auxFilaPrio , sizeof(int), compareQsort);

                if(entrada[--auxPilha] != compare){
                    ehPilha = false;
                }

                if(entrada[auxFila] == compare && ehFila){
                    auxFila++;
                }else{
                    ehFila = false;
                }

                if(entradaPrioridade[--auxFilaPrio] == compare){
                    entradaPrioridade[auxFilaPrio] = -1;
                }else {
                    ehFilaPrio = false;
                }
            }
        }
        if(!ehFila && !ehFilaPrio && !ehPilha){
            cout << "impossible";
        }else if(ehFila && !ehFilaPrio && !ehPilha){
            cout << "queue";
        }else if(!ehFila && ehFilaPrio && !ehPilha){
            cout << "priority queue";
        }else if(!ehFila && !ehFilaPrio && ehPilha){
            cout << "stack";
        }else {
            cout << "not sure";
        }
        cout << endl;
    }
    return 0;
}
