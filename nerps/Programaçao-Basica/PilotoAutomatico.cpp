#include<bits/stdc++.h>
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);

 	int a, b, c;cin >> a >> b >> c;
 	int aux;

 	if((b-c) < (c-b))
 		aux = 1;
 	if((b-a)>(c-b))
 		aux = -1;
 	if((b-a) == (c-b))
 		aux = 0;

 	cout << aux << endl; 
 	return 0;
}