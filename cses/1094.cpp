#include <bits/stdc++.h>
#include <vector>
#include <string>

#define ll long long

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  ll int ant, mov = 0;
  cin >> ant;

  for (int i = 1; i < n; i++)
  {
    ll int aux;
    cin >> aux;

    if (ant > aux)
    {
      ll int sum = (ant - aux);
      mov += sum;
      ant = sum + aux;
    }
    else
    {
      ant = aux;
    }
  }
  cout << mov << endl;
  return 0;
}