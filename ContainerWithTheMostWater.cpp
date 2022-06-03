#include <bits/stdc++.h>
using namespace std;

//Brute force

int maxArea(vector<int> &height)
{
    int n = height.size();
    vector<long long int> amnt;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            amnt.push_back((j - i) * (min(height[i], height[j])));
        }
    }
    int ans = *max_element(amnt.begin(), amnt.end());
    return ans;
}