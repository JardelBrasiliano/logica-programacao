#include<bits/stdc++.h>
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);

 	int A, B, C;cin >> A >> B >> C;

 	if (A == B)
 	{
 		cout << C << endl;
 	}else if(A == C){
 		cout << B << endl;
 	}else if(B == C){
 		cout << A << endl;
 	}
 	
	return 0;
}		