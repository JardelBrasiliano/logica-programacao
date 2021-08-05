#include<bits/stdc++.h>
#include<string>	
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);
 	int n, max = -1, cont = 0;

 	cin >> n;
 	char list[n];

 	for (int j = 0; j < n; ++j)
 	{
	 	cin.ignore();
 		for (int i = 0; i < n; ++i)
	 	{
	      	cin.get(list[i]);
	 	}
	 	if (j%2 == 0)
	 	{	
	 		for (int i = 0; i < n; ++i)
	 		{
	 			if (list[i] == 'o')
	 			{
	 				cont++;
	 			}else if (list[i] == 'A') {
	 				if (cont > max)
	 				{
	 					max = cont;
	 				}
	 				cont = 0;
	 			}
	 		}
	 	}else {
	 		for (int i = n - 1; i > -1; --i)
	 		{
	 			if (list[i] == 'o')
	 			{
	 				cont++;
	 			}else if (list[i] == 'A') {
	 				if (cont > max)
	 				{
	 					max = cont;
	 				}
	 				cont = 0;
	 			}
 	 		}
	 	}
 	}
 	if (cont > max)
 	{
 		max = cont;
 	}
 	cout << max << endl;
 	return 0;
}
