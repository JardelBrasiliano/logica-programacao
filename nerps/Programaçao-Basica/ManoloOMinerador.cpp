#include<bits/stdc++.h>
#include <iomanip>
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int indexMaior = -1;
	double valorMaior = -1.0;

	int indexMenor = 5005;
	double valorMenor = 5005;

	int n, m;cin >> n >> m;

	double v[11234], g[11234];

	for (int i = 0; i < n; ++i)
	{
		double valorMoeda;cin >> valorMoeda;

		v[i] = valorMoeda;
	}

	double aux = 0;

	for (int i = 0; i < n; ++i)
	{
		double quantMoeda;cin >> quantMoeda;
		aux = quantMoeda + aux;

		double auxMaior = aux * v[i];
		if(auxMaior > valorMaior){
			indexMaior = i;
			valorMaior = auxMaior;
		}

		if(auxMaior < valorMenor){
			indexMenor = i;
			valorMenor = auxMaior;
		}
	}
  cout << fixed << setprecision(2);		
	cout << (indexMaior + 1) << " " << (valorMaior * m) << endl;
	cout << (indexMenor + 1) << " " << (valorMenor * m) << endl;
	return 0;
}
