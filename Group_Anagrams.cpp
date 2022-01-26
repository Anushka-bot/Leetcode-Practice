#include <bits/stdc++.h>
using namespace std;
map<string, vector<string>> mymap;
vector<vector<string>> anagrams(vector<string> &strs)
{
    vector<vector<string>> gg;
    for(int i=0;i<strs.size();i++){
        string temp=strs[i];
        sort(strs[i].begin(),strs[i].end());
        mymap[strs[i]].push_back(temp);
    }
    for(auto it=mymap.begin();it != mymap.end();it++){
        gg.push_back(it->second);
    }
    return gg;
}
int main()
{
    vector<string> strs;
    int n = 0;
    cout << "enter no. of eles: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        strs.push_back(x);
    }
    vector<vector<string>> ans = anagrams(strs);
    for(auto it:ans){
        for(auto itr:it){
            cout << itr << " ";
        }
        cout << endl;
    }
}