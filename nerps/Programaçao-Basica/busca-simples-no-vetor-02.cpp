#include<bits/stdc++.h>
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);

  int v[10], c[10], n;

  for(int i = 0; i < 10; i++) {
    cin>>v[i];
  }
  cin>>n;

  int aux = 0;
  for(int i = 0; i < 10; i++) {
    if(n == v[i]) {
      c[aux++] = i;
    }
  }

  if(aux > 0){
    cout << aux << endl;
    for(int i = 0; i < aux; i++) {
      cout << c[i] << " ";
    }
    cout << endl;
  } else {
    cout << "Mia x\n";
  }

	return 0;
}		