#include<bits/stdc++.h>
#include <math.h>
#include <iomanip>

// potencia, duas casas de precisao

using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  
  int a;cin>>a;

  cout << fixed << setprecision(2);		
  cout << pow(a, 2)*3.1416 << endl;

	return 0;
}