//https://neps.academy/br/exercise/332
#include<bits/stdc++.h>
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);

 	int n, saldo;cin >> n >> saldo;
 	int menor = saldo;

 	for (int i = 0; i < n; ++i)
 	{
 		int valor;cin >> valor;

 		saldo = saldo + (valor);

 		if(saldo < menor)
 			menor = saldo;
 	}

 	cout << menor << endl;

 	return 0;
}