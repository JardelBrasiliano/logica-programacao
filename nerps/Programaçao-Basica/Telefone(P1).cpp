//https://neps.academy/br/exercise/235
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);

 	string numero;cin >> numero;

 	for (int i = 0; i < numero.size(); ++i)
 	{
 		char  n = numero[i];

 		if(isdigit(n) || n == '-')
 			cout << n;
 		else if((int)n <= 67)
 			cout << '2';
 		else if((int)n <= 70)
 			cout << '3';
 		else if((int)n <= 73)
 			cout << '4';
 		else if((int)n <= 76)
 			cout << '5';
 		else if((int)n <= 79)
 			cout << '6';
 		else if((int)n <= 83)
 			cout << '7';
 		else if((int)n <= 86)
 			cout << '8';
		else
			cout << '9';
 	}
 	cout << "\n";
 	return 0;
}