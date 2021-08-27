#include<bits/stdc++.h>
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int aux = 1, aux1 = 0;
	int n, c, s;cin >> n >> c >> s;

	if(s == 1)
		aux1++;

	for (int i = 0; i < c; ++i)
	{
		int comando;cin >> comando;

		if(aux == n && comando == 1)
			aux = 1;
		else if(aux == 1 && comando == -1)
			aux = n;
		else
			aux = aux + (comando);

		if(aux == s)
			aux1++;
	}

	cout << aux1 << endl;
 
	return 0;
}
