#include <bits/stdc++.h>
using namespace std;

int numRescueBoats(vector<int> &people, int limit)
{
    unordered_map<int, int> mymap;
    for (int i = 0; i < people.size(); i++)
    {
        mymap[people[i]] = i;
    }
    int flag = 0, boats = 0;
    while (people.size() > 0)
    {
        auto it_curr = mymap.find(people[flag]);
        auto it_find = mymap.find(limit - people[flag]);
        auto ppl_it_curr = find(people.begin(), people.end(), people[flag]);
        auto ppl_it_find = find(people.begin(), people.end(), limit - people[flag]);
        if (it_find != mymap.end())
        {
            boats++;
            people.erase(ppl_it_curr);
            people.erase(ppl_it_find);
            mymap.erase(it_curr);
            mymap.erase(it_find);
        }
        else
        {
            boats++;
            people.erase(ppl_it_curr);
            mymap.erase(it_curr);
        }
        cout << "people.size: " << people.size() << endl;
        flag++;
        if (flag >= people.size() && people.size() > 0)
        {
            flag = 0;
        }
    }
    return boats;
}

int main()
{
    vector<int> people;
    while (1)
    {
        string s;
        cin >> s;
        if (s == "true")
        {
            int x;
            cout << "Enter weight: ";
            cin >> x;
            people.push_back(x);
        }
        else
        {
            break;
        }
    }
    int limit;
    cout << "Enter limit: ";
    cin >> limit;
    int ans = numRescueBoats(people, limit);
    cout << ans;
}