#include<bits/stdc++.h>
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int d;cin >> d;

	d = d - 3;
	d = d%8;

 	if(d <= 3)
 		cout << 1 <<endl;
 	else if(d <= 4)
 		cout << 2 <<endl;
 	else
 		cout << 3 <<endl;
	return 0;
}