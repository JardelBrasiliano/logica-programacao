// https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1

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

  int arr[] = {1, 2, 3, 4, 5};
  int n = 5;

  int auxArr = arr[n - 1];

  for (int i = n - 1; i > 0; i--)
  {
    arr[i] = arr[i - 1];
  }
  arr[0] = auxArr;
  return 0;
}