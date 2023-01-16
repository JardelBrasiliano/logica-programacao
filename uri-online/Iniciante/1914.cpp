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

  for (int i = 0; i < n; i++)
  {
    string user1, user2, value1, value2;
    int v1, v2;

    cin >> user1 >> value1 >> user2 >> value2;
    cin >> v1 >> v2;

    if ((v1 + v2) % 2 == 0 && value1 == "PAR" || (v1 + v2) % 2 != 0 && value1 == "IMPAR")
    {
      cout << user1 << endl;
    }
    else
    {
      cout << user2 << endl;
    }
  }

  return 0;
}