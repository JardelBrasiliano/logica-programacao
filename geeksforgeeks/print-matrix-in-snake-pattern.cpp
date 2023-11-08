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

  vector<vector<int>> matrix = {{45, 48, 54},
                                {21, 89, 87},
                                {70, 78, 15}};

  vector<int> result;
  int n = matrix.size();

  for (int i = 0; i < n; i++)
  {

    if (i % 2 == 0)
    {
      for (int j = 0; j < n; j++)
      {
        result.push_back(matrix[i][j]);
      }
    }
    else
    {
      for (int j = n - 1; j >= 0; j--)
      {
        result.push_back(matrix[i][j]);
      }
    }
  }

  for (auto i : result)
    cout << i << ' ';

  return 0;
}