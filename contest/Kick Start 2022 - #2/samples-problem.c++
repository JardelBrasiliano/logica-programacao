#include<bits/stdc++.h>
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int L, R, caseTest = 1;
	int amountTest; cin >> amountTest;

	int soma = 0;
	while (amountTest--) {
		cin >> R >> L;
		int loopMax = (R+L);
		int diff = R-L;
   		int totalForSum = (loopMax-abs(diff))/2;

		for (int i = totalForSum; i > 0; i--) { 
      			soma += i;
		}	
		printf("Case #%d: %d\n", caseTest++, soma);
    		soma = 0;
	}	

	return 0;
}
