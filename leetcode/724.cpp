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

  vector<int> nums = {2, 1, -1};
  int rightSum = 0, leftSum = 0;

  for (int num : nums)
    rightSum += num;

  int flag = -1;
  for (int i = 0; i < nums.size(); i++)
  {
    rightSum -= nums[i];
    leftSum += i != 0 ? nums[i - 1] : 0;
    if (rightSum == leftSum)
    {
      flag = i;
      break;
      // return i;
    }
  }

  cout << flag;
  return 0;
}