#include <bits/stdc++.h>
using namespace std;
vector<pair<int, string>> v(7);
int hash_func(int k)
{
    int hash_index = k % v.size();
    for (int j = 0;; j++)
    {
        if (v[hash_index].first == NULL || v[hash_index].second == "deleted")
        {
            v[hash_index].first = k;
            break;
        }
        else{
            hash_index++;
            if(hash_index == v.size()){
                hash_index = 0;
            }
        }
    }
    return hash_index;
}
bool insert(int key, string name)
{
    int index = hash_func(key);
    for (auto x : v)
    {
        if (key == x.first)
        {
            x.second = name;
            return true;
        }
    }
    v[index].first = key;
    v[index].second = name;
    return true;
}
bool search(int key)
{
    int index=hash_func(key);
    if(v[index].first == key){
        return true;
    }
    return false;
}
bool delet(int key)
{
    int index=hash_func(key);
    auto it = v[index];
    it.first=NULL;
    it.second="deleted";
}
void print(int key)
{
    if (key == 1)
    {
        cout << "operation successfully done" << endl;
    }
    else
    {
        cout << "key doesnot exist" << endl;
    }
}
void print_hash()
{
    for (auto c : v)
    {
        cout << c.first << " " << c.second << endl;
    }
}
int main()
{
    string s;
    cout << "enter true if u want to enter the input else enter false to stop entering input: ";
    for (int i = 0;; i++)
    {
        cin >> s;
        if (s == "true")
        {
            int key, value;
            cin >> key >> value;
            v[i].first = key;
            v[i].second = value;
        }
        else
        {
            break;
        }
    }
    bool ins = insert(7, "anushka");
    print(ins);
    bool ser = search(7);
    print(ser);
    ins = insert(5, "pramtik");
    print(ins);
    ser = search(5);
    print(ser);
    int del = delet(5);
    print(del);
    ins = insert(6, "praamtik");
    print(ins);
    ins = insert(6, "prsweaamtik");
    print(ins);
    print_hash();
}