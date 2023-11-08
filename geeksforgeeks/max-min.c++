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

  int N = 4;
  int A[] = {1, 3, 4, 1};

  sort(A, A + N);

  cout << A[0] + A[N - 1] << endl;

  return 0;
}