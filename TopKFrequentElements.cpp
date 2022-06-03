#include <bits/stdc++.h>
using namespace std;

vector<int> topKFrequent(vector<int> &nums, int k)
{
    vector<int> output;
    unordered_map<int, int> m1;
    map<int,int> m2;
    for (auto it : nums)
    {
        m1[it]++;
    }
    for(auto it:m1){
        m2[it.second]=it.first;
    }
    for(auto it:m1){
        cout << it.first << "->" << it.second << endl;
    }
    for(auto it:m2){
        cout << it.first << "->" << it.second << endl;
    }
    int size=0;
    for(auto it= m2.rbegin(); it != m2.rend();it--){
        if(size == k){
            break;
        }
        output.push_back(it->first);
        size++;
    }
    m1.clear();
    m2.clear();
    return output;
}
