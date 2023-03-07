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
  vector<int> v(n * 5);

  for (int i = 0; i < n * 5; i++)
  {
    cin >> v[i];
  }
  sort(v.begin(), v.end());

  int sum = 0;
  for (int i = n; i < (n * 5) - n; i++)
  {
    sum += v[i];
  }
  double div = ((n * 5) - (n * 2)) * 1.0;
  double total = (sum / div);
  cout << fixed << setprecision(15);
  cout << total << endl;

  return 0;
}