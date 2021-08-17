#include<bits/stdc++.h>
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);
 	int A, B, C, D;

 	cin >> A;
 	cin >> B;
 	cin >> C;
 	cin >> D;
 	
 	if ((B == C && ((B+C) == D)) && (B+C+D) == A)
 	{
 		cout << "S\n";
 	}else{
 		cout << "N\n";
 	}

	return 0;
}		