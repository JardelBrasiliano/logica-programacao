// https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1

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

  int a[] = {1, 2, 3, 4, 5};
  int n = 5;
  int b[] = {1, 2, 3};
  int m = 3;

  set<int> S;

  for (int i = 0; i < n; i++)
  {
    S.insert(a[i]);
  }

  for (int i = 0; i < m; i++)
  {
    S.insert(b[i]);
  }
  cout << S.size() << endl;

  return 0;
}