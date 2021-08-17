#include<bits/stdc++.h>
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);

 	int n, aux = 0;cin >> n;

 	while(n != 1){
 		aux ++;
 		if (n%2 == 0)
 			n = n/2;
 		else
 			n = (3*n) + 1;
 	}
 	cout << aux << endl;
 	return 0;
}		