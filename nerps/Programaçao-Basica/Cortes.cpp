#include<bits/stdc++.h>
#include<string>
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);

 	int n, c;cin >> n >> c;
 	cin.ignore();

 	string atual[1005];

	for (int j = 0; j < n; ++j)
	{
		string item;
		getline (std::cin,item);
		atual[j] = item;
	}
	int aux = 0;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			char ver = (char)atual[i][j];
			if (((j != 0) && (j != c-1)) && (i != 0) && (i != n-1) )
			{
				char verAntes = (char)atual[i][j - 1];
				char verDepois = (char)atual[i][j + 1];

				char verCima = (char)atual[i-1][j];
				char verBaixo = (char)atual[i+1][j];

				if((ver == '#') && (verAntes != '#' || verDepois != '#' || (j == 0 || j == (c-1)) ) && ( i != 0 || i != (n-1)))
					aux++;
				else if((ver == '#') && (verCima != '#' || verBaixo != '#'))
					aux++;
			}else {
				if(ver == '#')
					aux++;
			}
			
		}
	}

	cout << aux << endl;
 	return 0;
}