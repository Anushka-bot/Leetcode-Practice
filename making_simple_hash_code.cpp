#include <bits/stdc++.h>
using namespace std;
vector<int> hash_start;

int main(){
    string s;
    cout << "enter inputs:" << endl;
    for(int i=0;;i++){
        if(s == "true"){
            int x;
            cin >> x;
            hash_start.push_back(x);
        }
        else
        {
            break;
        }
    }
    bool sear=search(7);
    print(sear);
    bool del=delete(8);
    print(del);
    bool ins=insert(66);
    print(ins);
    ins=insert(4);
    print(ins);
    sear=search(22);
    print(sear);
    del=delete(8);
    print(del);
}