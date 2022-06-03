#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> &nums)
{
    int n = nums.size(), start = 0, ele = -1;
    int flag = n - 1;
    for (int i = n - 1; i > 0; i--)
    {
        if (nums[i] > nums[i - 1])
        {
            ele = nums[i - 1];
            start = i - 1;
            break;
        }
    }
    sort(nums.begin() + start, nums.end());
    if (ele == -1)
    {
        return;
    }
    for (int i = start + 1; i < n; i++)
    {
        if (nums[i] > ele)
        {
            flag = i;
            ele = nums[i];
            break;
        }
    }
    for (int i = flag; i > start; i--)
    {
        nums[i] = nums[i - 1];
    }
    nums[start] = ele;
    return;
}