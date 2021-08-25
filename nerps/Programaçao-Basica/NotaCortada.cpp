//https://neps.academy/br/exercise/465
#include<bits/stdc++.h>
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);

 	int a, b;cin >> a >> b;

	int diferenca = abs((a-b));
 	int quadrado = (((a+b)-(diferenca))/2) * 70;
 	int triangulo = (diferenca * 70)/2;

 	int areaMarzia = (quadrado + triangulo)*2;
 	int areaTotal = 160*70;
 	
 	if(areaMarzia == areaTotal)
 		cout << 0 << endl;
 	if(areaMarzia > areaTotal)
 		cout << 1 << endl;
 	if(areaMarzia < areaTotal)
 		cout << 2 << endl;

 	return 0;
}