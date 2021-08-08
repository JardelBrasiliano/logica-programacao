#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);

 	int n, placas; 
 	double aux = 0.1;
 	long int dezPorcento;

 	cin >> n >> placas;

 	for (int i = 1; i < 10; ++i)
 	{
		cout << (long int)ceil((n * placas) * (aux * i));
		cout << (i == 9 ? "\n" : " ");
 	}

	return 0;
}