#include<bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size;
    cin >> size;
    vector<int>num;
    vector<int>answer;
    map<int,int>index;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        num.push_back(a);
        answer.push_back(a);
        index[a] = i;
    }
    int k;
    cin >> k;
    sort(answer.begin(),answer.end());
    for(int i = 0; i < size; i++){
        cout << answer[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < k; i++){
        int pos = index[answer[i]];
        swap(num[pos],num[i]);
    }
    for(int i = 0; i < size; i++){
        cout << num[i] << " ";
    }
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// void s(int arr[], int n, int k)
// {
//     int i, j, min_idx;
 
//     for (i = 0; i < n-1; i++)
//     {
//         min_idx = i;
//         for (j = i+1; j < n; j++)
//         if (arr[j] < arr[min_idx])
//             min_idx = j; 
//         swap(arr[min_idx], arr[i]);
//         k--;
//         if(!k)
//             break;
//     }
// }
// int main() {
//     int n, k;
//     cin >> n;
//     int arr[n];
//     for(auto &x : arr)
//         cin >> x;
//     cin >> k;
//     s(arr,n,k);
//     for(auto &x : arr)
//         cout << x << " ";
//     return 0;
// }