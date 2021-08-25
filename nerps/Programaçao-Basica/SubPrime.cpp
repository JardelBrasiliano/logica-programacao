//https://neps.academy/br/exercise/223
#include<bits/stdc++.h>
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);
    int banco, ded;

    cin >> banco >> ded;            
 	do{
        int reserva[25];

        for (int i = 1; i <= banco; ++i)
        {
            cin >> reserva[i];
        }

        int aux = 1;
        for (int i = 0; i < ded; ++i)
        {
            int d, c, v;cin >> d >> c >> v;
            

            reserva[c] = reserva[c] + v;
            reserva[d] = reserva[d] - v;
            
        }

        for (int i = 1; i <= banco; ++i)
        {
            if(reserva[i] < 0){
                aux = -1;
            }
        }

        if(aux == 1)
            cout << "S\n";
        else
            cout << "N\n";

        cin >> banco >> ded;    
 	}while((banco != 0 && ded !=0));

 	return 0;
}
