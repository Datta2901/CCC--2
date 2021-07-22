#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    // cout << s << endl;
    set<char>answer;
    for(int i = 0; i < s.size(); i++){
        transform(s.begin(),s.end(),s.begin(),::tolower);
        if(s[i] != ' ')
        answer.insert(s[i]);
    }

    if(answer.size() == 26){
        cout << "pangram" << endl;
    }else{
        cout << "not pangram" << endl;
    }

    return 0;
}