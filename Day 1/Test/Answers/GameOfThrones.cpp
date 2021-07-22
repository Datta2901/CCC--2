#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    map<char,int> fre;
    for(char c : s){
        fre[c]++;
    }
    int count = 0;
    for(auto it : fre){
        if((it.second) % 2 != 0){
            count++;
        }
    }
    if(count > 1){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }
    return 0;
}