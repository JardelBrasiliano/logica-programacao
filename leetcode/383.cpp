#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

#define ll long long

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string ransomNote = "fihjjjjei", magazine = "hjibagacbhadfaefdjaeaebgi";
  map<char, int> letras;

  int sizeMagazine = magazine.size();
  for (int i = 0; i < sizeMagazine; i++)
  {
    char currentChar = magazine[i];
    if (letras.find(currentChar) != letras.end())
    {
      letras[currentChar]++;
    }
    else
    {
      letras.insert(make_pair(currentChar, 1));
    }
  }

  int sizeRansomNote = ransomNote.size();
  for (int i = 0; i < sizeRansomNote; i++)
  {
    char currentChar = ransomNote[i];
    if (letras.find(currentChar) != letras.end())
    {
      if (letras[currentChar] <= 0)
      {
        return false;
      }
      letras[currentChar]--;
    }
    else
    {
      return false;
    }
  }
  return true;
  return 0;
}