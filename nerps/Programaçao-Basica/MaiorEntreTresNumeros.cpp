#include<bits/stdc++.h>
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);
 	int maior = -1001;
 	for (int i = 0; i < 3; ++i)
 	{
 		int n;cin >> n;
 		if (n >= maior)
 		{
 			maior = n;
 		}
 	}
 	cout << maior << endl;
	return 0;
}		