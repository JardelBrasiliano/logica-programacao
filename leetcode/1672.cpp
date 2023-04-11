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

  vector<vector<int>> accounts = {{1, 2, 3}, {3, 2, 1}};

  int maxInt = -1;

  for (int i = 0; i < accounts.size(); i++)
  {
    int total = 0;
    for (int j = 0; j < accounts[i].size(); j++)
    {
      total += accounts[i][j];
    }
    maxInt = max(maxInt, total);
  }
  cout << maxInt;
  return 0;
}