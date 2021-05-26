#include <iostream>

using namespace std;

int v[1000];

int main() {

    int N, K, M;
    int aux1, aux2, cont, i;
    int pos1, pos2;

    while(cin >> N >> K >> M && N){
        pos1 = 0;
        pos2 = N-1;

        for(i=0; i<N; i++){
            v[i] = i+1;
        }
        cont = 0;

        while(cont < N){
            i = K;

            while (i > 0){

                if(v[pos1] > 0){
                    i--;
                }
                if(i == 0){
                    aux1 = pos1;
                }
                pos1 = (pos1+1)%N;
            }
            i = M;

            while(i > 0){
                if(v[pos2] > 0){
                    i--;
                }
                if(i==0){
                    aux2 = pos2;
                }
                pos2 = (pos2 + N-1)%N;
            }

            if(cont > 0){
                cout << ",";
            }

            if(aux1 != aux2){
                printf("%3d%3d",v[aux1],v[aux2]);
                cont += 2;
            } else {
                printf("%3d", v[aux1]);
                cont++;
            }

            v[aux1] = 0;
            v[aux2] = 0;
        }
        cout << endl;
    }

    return 0;
}
