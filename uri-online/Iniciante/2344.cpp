#include <bits/stdc++.h>
#include <string>

#define ll long long

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  if (n == 0)
  {
    cout << "E" << endl;
  }
  else if (n <= 35)
  {
    cout << "D" << endl;
  }
  else if (n <= 60)
  {
    cout << "C" << endl;
  }
  else if (n <= 85)
  {
    cout << "B" << endl;
  }
  else if (n <= 100)
  {
    cout << "A" << endl;
  }

  return 0;
}