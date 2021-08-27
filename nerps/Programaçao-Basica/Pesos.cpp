#include<bits/stdc++.h>
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, c[112345];cin >> n;
 	
	for (int i = 1; i <= n; ++i)
	{
		int c1;cin >> c1;
		c[i] = c1;

		if(i == 1 && c1 <= 8){
			continue;
		}else if((c1 - c[i-1]) <= 8){
			continue;
		}else{
			cout << "N\n";
			return 0;
		}
	}
	cout << "S\n";
	return 0;
}
