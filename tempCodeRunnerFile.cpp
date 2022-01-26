
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
            int num1 = s.top();
            int num2 = s.top();
            cout << "n1 n2" << " " << num1 << " " << num2 << endl;
            s.pop();
            s.pop();
            s.push(evaluate(num1, num2, *it));
        }
    }