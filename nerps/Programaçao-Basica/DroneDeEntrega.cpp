//OBI 2017 - Primeira Fase

#include<bits/stdc++.h>
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);

 	int drone[3];cin >> drone[0] >> drone[1] >> drone[2];
 	int h, l;cin >> h >> l;

 	for (int i = 0; i < 3; ++i)
 	{	
 		for (int j = i + 1; j < 3; ++j)
	 	{
 			// cout << i << " = " << j;
 			if ((drone[i] <= h && drone[j] <= l) || (drone[i] <= l && drone[j] <= h))
 			{	
 				cout << "S\n";
 				return 0;
 			}
 			// cout << endl;
	 	}
	 	// cout << endl;
 	}
 	cout << "N\n";
 	return 0;
}		