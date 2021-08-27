#include<bits/stdc++.h>
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int y, x;cin >> y >> x;

	if(y < 0 || y > 432){
		cout << "fora\n";
		return 0;
	}else if(x < 0 || x > 468){
		cout << "fora\n";
		return 0;
	}else
		cout << "dentro\n";

	return 0;
}