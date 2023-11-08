// https://practice.geeksforgeeks.org/problems/reverse-a-string/1

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

  string str = "Geeks";

  int start = 0;
  int end = str.length() - 1;

  while (start < end)
  {
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    start++;
    end--;
  }

  cout << str << endl;

  return 0;
}