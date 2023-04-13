#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

#define ll long long

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s = "egcd", t = "adfd";

  map<char, vector<int>> letras;

  int sizeT = t.size();
  int letter[26]{0};

  for (int i = 0; i < sizeT; i++)
  {
    letras[s[i]].push_back(i);
  }

  for (int i = 0; i < sizeT; i++)
  {
    char buscar = s[i];
    for (int l : letras[buscar])
    {
      s[l] = t[i];
    }
  }

  cout << "S: " << s << endl;
  cout << "T: " << t << endl;
  if (s.compare(t) == -1)
  {
    // return false;
    cout << "FALSE";
  }
  else
  {
    cout << "TRUE";
  }

  // return true;
  return 0;
}