#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>

#define ll long long

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  int pass = 0;
  for (int i = 0; i < n; i++)
  {
    int aux;
    cin >> aux;
    int current = aux - pass;

    cout << current << " ";
    pass = aux;
  }
  cout << endl;

  return 0;
}