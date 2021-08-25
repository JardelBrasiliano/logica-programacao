#include<bits/stdc++.h>
#include <stdlib.h>
#include<vector>
using namespace std;

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main ()
{
	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);

  int num[12], menor = 108;
  int index[12], aux = 0;

  for (int i = 0; i < 10; ++i)
  {
    int n;cin >> n;
    num[i] = n;

    if(n < menor)
      menor = n;
  }
  cout << "Menor: " << menor << endl;

  cout << "Ocorrencias: ";
  for (int i = 0; i < 10; ++i)
  {
    if(num[i] == menor){
      index[aux] = i;
      aux++;
    }
  }
  for (int i = 0; i < aux; ++i)
  {
    cout << index[i];

    if(i == aux-1)
      cout << "\n";
    else
      cout <<" ";
  }

  for (int i = 0; i < 10; ++i)
  {
    if(num[i] == menor)
      cout << -1;
    else
      cout << num[i];

    if(i == 9)
      cout << "\n";
    else
      cout <<" ";
  }
 	return 0;
}