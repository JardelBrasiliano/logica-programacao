#include <bits/stdc++.h>
#include <math.h>
#include <string>

#define ll long long

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;

  double fiveQ = sqrt(5);
  double left = pow(((1 + fiveQ) / 2), n);
  double right = pow(((1 - fiveQ) / 2), n);

  double result = (left - right) / fiveQ;

  cout << fixed << setprecision(1);
  cout << result << endl;
  return 0;
}