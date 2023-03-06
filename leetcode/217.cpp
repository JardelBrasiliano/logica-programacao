#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <string>
#include <algorithm>

#define ll long long

using namespace std;

bool containsDuplicate(vector<int> &nums)
{
  int size = nums.size();
  set<int> S;

  for (int i = 0; i < size; i++)
  {
    S.insert(nums[i]);
  }

  return S.size() < nums.size();
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> nums = {1, 2, 3, 4};

  cout << containsDuplicate(nums);

  return 0;
}