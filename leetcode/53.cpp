#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>

#define ll long long

using namespace std;

int altura_dc(vector<int> &A, int p, int r)
{
  if (p == r)
  {
    return A[p];
  }
  int q = (p + r) / 2;
  int x1 = altura_dc(A, p, q);
  int x2 = altura_dc(A, q + 1, r);
  int y1 = A[q];
  int s = A[q];
  for (int i = q - 1; i >= p; i--)
  {
    s += A[i];
    y1 = max(y1, s);
  }
  int y2 = A[q + 1];
  s = A[q + 1];
  for (int j = q + 2; j <= r; j++)
  {
    s += A[j];
    y2 = max(y2, s);
  }
  int x3 = y1 + y2;
  return max({x1, x2, x3});
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  vector<int> A = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

  cout << altura_dc(A, 0, 8) << endl;

  return 0;
}