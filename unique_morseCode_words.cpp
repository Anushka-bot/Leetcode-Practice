#include <bits/stdc++.h>
using namespace std;
int uniqueMorseRepresentations(vector<string> &words)
{
    vector<string> morsecode = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
    unordered_set<string> s;
    for(auto it:words){
        string curr;
        for(auto s: it){
            int ch=(int)s;
            curr += morsecode[ch-97];
        }
        s.insert(curr);
    }
    return s.size();
}
int main()
{
    vector<string> words={"anushka","prateek"};
    uniqueMorseRepresentations(words);
}