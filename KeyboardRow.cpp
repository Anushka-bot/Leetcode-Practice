#include <bits/stdc++.h>
using namespace std;
int one = 0, two = 0, three = 0;
vector<string> words = {"Hello", "Alaska", "Dad", "Peace"};
int capital[26], small[26];
vector<string> return_vec;
void same_row_small(int ch)
{
    if (small[ch - 97] == 1)
    {
        one++;
    }
    else if (small[ch - 97] == 2)
    {
        two++;
    }
    else if (small[ch - 97] == 3)
    {
        three++;
    }
    return;
}
void same_row_capital(int ch)
{
    if (capital[ch - 65] == 1)
    {
        one++;
    }
    else if (capital[ch - 65] == 2)
    {
        two++;
    }
    else if (capital[ch - 65] == 3)
    {
        three++;
    }
    return;
}
void print(vector<string> vec)
{
    for (auto it = vec.begin(); it != vec.end(); it++)
    {
        cout << *it << " ";
    }
}
int main()
{

    string first_row = "qwertyuiop", second_row = "asdfghjkl", third_row = "zxcvbnm";
    for (int i = 0; i < first_row.size(); i++)
    {
        int c = (int)first_row[i];
        small[c - 97] = 1;
        capital[c - 32 - 65] = 1;
    }
    for (int i = 0; i < second_row.size(); i++)
    {
        int c = (int)second_row[i];
        small[c - 97] = 2;
        capital[c - 32 - 65] = 2;
    }
    for (int i = 0; i < third_row.size(); i++)
    {
        int c = (int)third_row[i];
        small[c - 97] = 3;
        capital[c - 32 - 65] = 3;
    }

    for (auto it = words.begin(); it != words.end(); it++)
    {
        one=0,two=0,three=0;
        string s = *it;
        for (int i = 0; i < s.size(); i++)
        {
            int ch = (int)s[i];
            if (ch >= 97)
            {
                cout << "&" << endl;
                same_row_small(ch);
            }
            else if (ch < 97)
            {
                cout << "*" << endl;
                same_row_capital(ch);
            }
        }
        if (one == s.size() || two == s.size() || three == s.size())
        {
            return_vec.push_back(*it);
        }
    }
    cout << one << " " << two << " " << three << " " << endl;
    print(return_vec);
}