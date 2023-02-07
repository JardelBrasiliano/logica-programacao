// https://codeforces.com/contest/1777/problem/0#include <bits/stdc++.h>
#include <bits/stdc++.h>
#include <string>

#define ll long long

using namespace std;

void solved()
{
  int n, cont = 0;
  cin >> n;

  int left;
  cin >> left;
  for (int i = 0; i < n - 1; i++)
  {
    int right;
    cin >> right;

    if ((left % 2 == 0 && right % 2 == 0) || (left % 2 != 0 && right % 2 != 0))
    {
      cont++;
      left = left * right;
    }
    else
    {
      left = right;
    }
  }

  cout << cont << endl;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int tt;
  cin >> tt;

  for (int i = 0; i < tt; i++)
  {
    solved();
  }

  return 0;
}