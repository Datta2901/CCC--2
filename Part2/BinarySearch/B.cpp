// count number of order pairs such that sum of 2 elements in the array is equal to given number
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int binarysearch(int x,vector<int>arr,int n){
    int l=0;
    int h=n-1;
    while(l<=h){  
         int mid=l+ (h-l)/2;
         int y=arr[mid];
         if(x==y){
             return 1;
         }else if(x<y){
            h=mid-1;
         }else{
            l=mid+1;
         }
    }
    return 0;
}


int main(){ 
    int size;
    cin >> size;
    vector<int>num;
    int answer = 0;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        num.push_back(a);
    }
    int k;
    cin >> k;
    sort(num.begin(),num.end());
    for(int i = 0; i < size; i++){
        int ran = binarysearch(k - num[i],num,size);
        if(ran == 1){
            answer++;
        }
    }
    cout << answer << endl;
    return 0;
}
