#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,s,p;
        cin >> n >> s >> p;
        cout << (s + p - 2) % (n) + 1 << endl;
    }
    return 0;
}