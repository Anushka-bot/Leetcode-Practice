#include <bits/stdc++.h>
using namespace std;
int countwords_in_s(string str){
    stringstream s(str);
    int count=0;
    string w;
    while(s >> w){
        cout << w << endl;
        count++;
    }
    return count;
}
int main(){
    string s;
    cout << "enter string:" << endl;
    getline(cin,s);
    int words=countwords_in_s(s);
    cout << "no. of words are: " << words;
}