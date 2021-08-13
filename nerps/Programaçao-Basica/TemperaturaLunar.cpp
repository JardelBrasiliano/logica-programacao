#include<bits/stdc++.h>
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);

 	int n, entA, entB, somaA = 0, somaB = 0, control = 0;

 	while(cin >> n && n != 0){
 		somaA = 0;
 		cout << "Teste " << ++control << endl;
 		for (int i = 0; i < n; ++i)
	 	{
	 		cin >> entA >> entB;
	 		somaA = (entA - entB) + somaA;
	 		cout << somaA << endl;
	 	}
	 	cout << endl;
 	}
 	return 0;
}		