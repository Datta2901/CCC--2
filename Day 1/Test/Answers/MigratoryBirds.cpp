#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin >> size;
    map<int,int>fre;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        fre[a]++;
    }
    int max = INT_MIN,index = INT_MAX;
    for(auto i : fre){
        if(max < i.second){
            max = i.second;
            index = i.first;
        }
    }
    cout << index << endl;
    return 0;
}