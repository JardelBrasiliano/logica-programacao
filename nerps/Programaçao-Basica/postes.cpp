#include<bits/stdc++.h>
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

  int n;cin>>n;

  int sub=0, con=0;

  for(int i = 0; i < n; i++) {
    int auxCin;cin>>auxCin;

    if(auxCin < 50) sub++;
    if(auxCin >= 50 && auxCin < 85) con++;
  }

  cout << sub << " " << con << endl;

	return 0;
}