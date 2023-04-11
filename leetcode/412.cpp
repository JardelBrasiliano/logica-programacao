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

  vector<string> fizzList;

  int n = 5;

  for (int i = 1; i <= n; i++)
  {
    if (i % 3 == 0 && i % 5 == 0)
    {
      fizzList.push_back("FizzBuzz");
    }
    else if (i % 3 == 0)
    {
      fizzList.push_back("Fizz");
    }
    else if (i % 5 == 0)
    {
      fizzList.push_back("Buzz");
    }
    else
    {
      fizzList.push_back(to_string(i));
    }
  }

  return 0;
}