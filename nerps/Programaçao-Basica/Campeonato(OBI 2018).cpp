#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);
 	int list[20];
 	int res;

 	for (int i = 1; i <= 16; ++i)
 	{
 		int n;cin >> n;
 		list[i] = n;
 	}
 	int aux1 = 16;
 	for (int j = 1; j <= 4; ++j)
 	{
 		int aux = 1;
	 	for (int i = 1; i <= aux1; i = i + 2)
	 	{
	 		// cout << i << " x " << i + 1 << endl;
	 		// cout << list[i] << " x " << list[i + 1] << " -> " << i;
	 		if ((list[i] == 1 && list[i + 1] == 9) || (list[i] == 9 && list[i + 1] == 1))
	 		{
	 			res = j ;
	 		}


	 		if (list[i] == 1 || list[i + 1] == 1)
	 		{
	 			list[aux++] = 1;
	 		}else if(list[i] == 9 || list[i + 1] == 9){
	 			list[aux++] = 9;
	 		}else {
	 			list[aux++] = -1;
	 		}
	 	}
 		aux1 = aux1 / 2;
	 	aux = 1;
	 }

	 if(res == 1)
	 	cout << "oitavas\n";
	 if(res == 2)
	 	cout << "quartas\n";
	 if(res == 3)
	 	cout << "semifinal\n";
	 if(res == 4)
	 	cout << "final\n";
}	