#include <bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,int> mp;
    unordered_map<char,int> ch;
    string s = "anushka";
    for(auto chr:s){
        cout << "char is: " << chr << endl;
        ch[chr] +=1;
        cout << chr << ": " << ch[chr] << endl;
    }
    cout << "*******" << endl;
    for(auto chre:s){
        cout << "char is: " << chre << endl;
        ch['chre'] +=1;
        cout << chre << ": " << ch[chre] << endl;
    }
}