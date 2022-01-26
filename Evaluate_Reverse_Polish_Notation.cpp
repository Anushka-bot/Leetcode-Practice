#include <bits/stdc++.h>
using namespace std;
int evaluate(int n1, int n2, string s)
{
    if (s == "*")
    {
        return (n1 * n2);
    }
    else if (s == "+")
    {
        return (n1 + n2);
    }
    else if (s == "-")
    {
        return (n1 - n2);
    }
    else if (s == "/")
    {
        return (n1 / n2);
    }
}
int calculate_value_ofExpression(vector<string> v, stack<int> s)
{
    for (auto it = v.begin(); it != v.end(); it++)
    {
        if (*it != "*" && *it != "-" && *it != "+" && *it != "/")
        {
            int num = stoi(*it);
            cout << num << endl;
            s.push(num);
        }
        else if (*it == "*" || *it == "-" || *it == "+" || *it == "/")
        {
            int num2 = s.top();
            s.pop();
            int num1 = s.top();
            s.pop();
            cout << "n1 n2" << " " << num1 << " " << num2 << endl;
            s.push(evaluate(num1, num2, *it));
        }
    }
    return s.top();
}
int main()
{
    stack<int> s;
    vector<string> v;
    cout << "enter reverse polish notation: " << endl;
        cout << "enter '!' as a new string to end the expression: " << endl;
    for (int i = 0;; i++)
    {
        string s;
        cin >> s;
        if (s == "!")
        {
            break;
        }
        v.push_back(s);
    }
    int value = calculate_value_ofExpression(v, s);
    cout << value;
}