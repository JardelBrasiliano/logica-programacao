#include<bits/stdc++.h>
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  
	int H, P, F, d;cin>>H>>P>>F>>d;
	

	if(d == 1) {
		for(int i = 0; i<16; i++) {
			if(F > 15) F = 0;

			if(F == H) {
				cout << "S\n";
				return 0;
			} 
			if(F == P) {
				cout << "N\n";
				return 0;
			} 
			F += 1;
		}
	} else {
		for(int i = 14; i >= 0; i--) {
			F -= 1;
			if(F == H) {
				cout << "S\n";
				return 0;
			} 
			if(F == P) {
				cout << "N\n";
				return 0;
			} 
			if(F <= 0) F = 16;
		}
	}
	
	return 0;

}
	// [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15]