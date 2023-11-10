// https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1

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

  int arr[] = {7, 10, 4, 20, 15};
  int l = 0;
  int r = 4;
  int k = 4;
  int newArr[r - l];

  sort(arr, arr + (r + 1));

  for (auto i : arr)
    cout << i << ' ';

  cout << endl;
  cout << arr[k - 1];

  return 0;
}