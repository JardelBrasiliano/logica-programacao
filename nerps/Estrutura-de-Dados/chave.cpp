#include<bits/stdc++.h>
#include<string>
#include <stack>
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);

  stack<char> pilha;
 	int n;
 	string texto;

 	cin >> n;
	getline(cin, texto);				
	
 	for (int i = 0; i < n; ++i)
 	{
 		getline(cin, texto);
 		for (int i = 0; i < texto.size(); ++i)
 		{
 			if (texto[i] == '{')
 			{
 				pilha.push('{');
 			}else if(texto[i] == '}'){
 				if (pilha.size() > 0)
 				{
 					pilha.pop();
 				}else {
 					cout << "N\n";
 					return 0; 
 				}
 			}
 		}
 	}
 	if (pilha.size() == 0)
 	{
 		cout << "S\n";
 	}else{
 		cout << "N\n";
 	}

	return 0;
}