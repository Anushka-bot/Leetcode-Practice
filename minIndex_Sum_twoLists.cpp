#include <bits/stdc++.h>
using namespace std;
vector<int> min_vec;
vector<string> common, ans;
vector<string> findRestaurant(vector<string> &list1, vector<string> &list2)
{
    for (int i = 0; i < list1.size(); i++)
    {
        for (int j = 0; j < list2.size(); j++)
        {
            if (list1[i] == list2[j])
            {
                common.push_back(list1[i]);
                min_vec.push_back(i + j);
            }
        }
    }
    int mins = INT_MAX, index = 0;
    for (int i = 0; i < min_vec.size(); i++)
    {
        if (min_vec[i] == mins)
        {
            ans.push_back(common[i]);
        }
        else if(min_vec[i] < mins){
            for(int i=0;i<ans.size();i++){
                ans.pop_back();
            }
            ans.push_back(common[i]);
        }
    }
    return ans;
}
int main()
{
}