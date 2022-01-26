#include <bits/stdc++.h>
using namespace std;
int a1, a2, b1, b2, c1, c2;
bool count_parentheses(string str, stack<char> s)
{
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == ')')
        {
            a1++;
        }
        else if (str[i] == '(')
        {
            a2++;
        }
        else if (str[i] == '}')
        {
            b1++;
        }
        else if (str[i] == '{')
        {
            b2++;
        }
        else if (str[i] == ']')
        {
            c1++;
        }
        else if (str[i] == '[')
        {
            c2++;
        }
    }
    if (a1 == a2 == c1 == c2 == b1 == b2 == 0)
    {
        return false;
    }
    else if (a1 == a2 && b1 == b2 && c1 == c2)
    {
        for (int i = 0; i < str.size(); i++)
        {
            if (s.empty() == true && (str[i] == ')' || str[i] == ']' || str[i] == '}'))
            {
                return false;
                break;
            }
            else if (str[i] == ')' && s.top() == '(' || str[i] == ']' && s.top() == '[' || str[i] == '}' && s.top() == '{')
            {
                s.pop();
                continue;
            }
            else if (str[i] == ')' && s.top() != '(' || str[i] == ']' && s.top() != '[' || str[i] == '}' && s.top() != '{')
            {
                return false;
                break;
            }
            else
            {
                s.push(str[i]);
            }
        }
        return true;
    }
    else
    {
        return false;
    }
    return true;
}
int main()
{
    stack<char> s;
    string str;
    cout << "enter string: ";
    cin >> str;
    cout << count_parentheses(str, s);
}