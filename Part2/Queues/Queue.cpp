#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int queue[1000], n = 1000, front = - 1, rear = - 1;
void Insert() {
   int val;
   if (rear == n - 1)
        return;
   else {
      if (front == - 1)
        front = 0;
      cin>>val;
      rear++;
      queue[rear] = val;
   }
}
void Delete() {
   if (front == - 1 || front > rear) {
      return ;
   } else {
      front++;;
   }
}
void Display() {
   if (front == - 1)
       return;
   else {
      for (int i = front; i <= rear; i++)
            cout << queue[i] <<" ";
         cout << endl;
   }
}


int main() {
    int size;
    cin >> size;
    int k;
    n = size;
    cin >> k;
    while(k--){
        Insert();
    }
    int p;
    cin >> p;
    while(p--){
        Delete();
    }
    Display();
    return 0;
}