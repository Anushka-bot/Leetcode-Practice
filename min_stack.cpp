#include <bits/stdc++.h>
using namespace std;
stack<int> s;
int mins=INT_MAX;
void push(int d)
{
    mins=min(mins,d);
    s.push(d);
}
void pop()
{
    s.pop();
}
int top_ele()
{
    cout << "top element is: " << s.top() << " " << endl;
}
int getmin()
{
    cout << "minimum eleement is: " << mins << " " << endl;
}
int main()
{
    int input;
    cout << "Enter the number acccording to the function u wnat to perform:" << endl;
    do
    {
        cout << "1.Push 2.Pop 3.top 4.getmin" << endl;
        cin >> input;
        switch (input)
        {
        case 1:
            int x;
            cout << "enter element to push: ";
            cin >> x;
            push(x);
            break;
        case 2:
            pop();
            break;
        case 3:
            top_ele();
            break;
        case 4:
            getmin();
            break;
        default:
            printf("Invalid choice");
            cout << endl;
        } /* code */
    } while (input != 0);
}
