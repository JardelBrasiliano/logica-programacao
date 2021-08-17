#include<bits/stdc++.h>
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);

 	int soma = 0;
 	int p, n;cin >> p >> n;

 	for (int i = 1; i <= p; ++i)
 	{
 		if (n == 1)
 			soma++;
 		else
 			soma += (n--);
 	}

 	cout << soma << endl;

	return 0;
}		