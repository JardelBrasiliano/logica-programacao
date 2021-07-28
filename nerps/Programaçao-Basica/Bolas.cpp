#include<bits/stdc++.h>
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);

 	int bolas[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
 	int i, j, b;

 	for (int i = 1; i <= 8; ++i)
 	{
 		cin >> b;
 		bolas[b]++;
 	}
 	bool verifica = false;

 	for (int i = 1; i <= 8; ++i)
 	{
 		if(bolas[i] > 4)
 			verifica = true;
 	}
	
	if (verifica)
	{
		cout << "N\n";
	}else {
		cout << "S\n";
	}
 	return 0;
}	