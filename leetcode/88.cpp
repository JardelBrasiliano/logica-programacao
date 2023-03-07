#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>

#define ll long long

using namespace std;

vector<int> merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
  int aux = 0;
  for (int i = m; i < m + n; i++)
  {
    nums1[i] = nums2[aux++];
  }
  sort(nums1.begin(), nums1.end());
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> nums1 = {1, 2, 3, 0, 0, 0};
  int m = 3;
  vector<int> nums2 = {2, 5, 6};
  int n = 3;

  merge(nums1, m, nums2, n);

  return 0;
}