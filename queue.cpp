#include <bits/stdc++.h>
using namespace std;
vector<int> queu;
int head = 0;
int tail = -1;
void enqueue(int val)
{
    tail++;
    queu.push_back(val);
}
void dequeue()
{
    head++;
}
int front()
{
    return queu[head];
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        enqueue(x);
    }
    dequeue();
    dequeue();
    int front_ele=front();
    cout << front_ele << endl;
    for(int i=head;i<=tail;i++)
    {
        cout << queu[i] << " ";
    }
}