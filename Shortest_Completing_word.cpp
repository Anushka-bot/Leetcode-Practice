#include <bits/stdc++.h>
using namespace std;
int pre_compute[26];
vector<string> pre_final;
string shortestCompletingWord(string licensePlate, vector<string> &words)
{
    for (int i = 0; i < licensePlate.size(); i++)
    {
        if (licensePlate[i] >= 'a' && licensePlate[i] <= 'z')
        {
            int ascii = (int)licensePlate[i];
            pre_compute[ascii - 97]++;
        }
        else if (licensePlate[i] >= 'A' && licensePlate[i] <= 'Z')
        {
            int ascii = (int)licensePlate[i];
            pre_compute[ascii - 65]++;
        }
    }
    for (auto it = words.begin(); it != words.end(); it++)
    {
        string s = *it;
        cout << s << endl;
        int count = 0, v = 0;
        int compute_inWords[26];
        memset(compute_inWords, 0, sizeof(compute_inWords));
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                int ascii = (int)s[i];
                compute_inWords[ascii - 97]++;
            }
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                int ascii = (int)s[i];
                compute_inWords[ascii - 65]++;
            }
        }
        for (int i = 0; i < 26; i++)
        {
            if (pre_compute[i] <= compute_inWords[i])
            {
                count++;
            }
            else
            {
                v = 1;
                break;
            }
        }
        if (v == 0)
        {
            cout << "bb" << endl;
            pre_final.push_back(s);
        }
    }
    cout << "bba" << endl;
    string s=pre_final[0];
    for (int i = 0; i < pre_final.size() - 1; i++)
    {
        cout << "^^" << endl;
        if (s.size() > pre_final[i + 1].size())
        {
            cout << "**" << endl;
            s = pre_final[i+1];
            cout << s << endl;
        }
    }
    return s;
}
int main()
{
    string licensePlate = "1s3 456";
    vector<string> words = {"looks","pest","stew","show"};
    string s = shortestCompletingWord(licensePlate,words);
    cout << "ans: " << s;
}