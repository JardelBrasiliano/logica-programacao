#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>

#define ll long long

using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
  vector<int> res(2);
  int size = nums.size();

  for (int i = 0; i < size - 1; i++)
  {
    if (nums[i] <= target)
    {
      for (int j = i + 1; j < size; j++)
      {
        int sum = nums[i] + nums[j];
        if (sum == target)
        {
          res[0] = i;
          res[1] = j;
          return res;
        }
      }
    }
  }
  return res;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> nums = {3, 2, 4};
  int target = 6;

  twoSum(nums, target);

  return 0;
}