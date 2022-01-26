#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    int n;
    cout << "enter no. of elements for queue: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    q.push(3);
    q.pop();
    int f = q.front();
    cout << " front" << f << endl;
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}