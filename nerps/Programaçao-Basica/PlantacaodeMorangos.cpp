#include<bits/stdc++.h>
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);
 	int c, l, maior;
 	cin >> c >> l;
 	maior = c * l;
 	cin >> c >> l;
 	(c * l) > maior ? maior = (c * l) : maior = maior;

 	cout << maior << endl;
	return 0;
}		