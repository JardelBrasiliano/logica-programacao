#include<bits/stdc++.h>
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, total, aux, aux1 = 1;
	int amountTest; cin >> amountTest;

	while (amountTest--) {
		cin >> n >> m;
		total = 0;
		for (int i = 0; i < n; i++) {
			cin >> aux;
			total = aux + total;
		}
		printf("Case #%d: %d\n", aux1++, total - (m*(total/m)));
	}	

	return 0;
}
