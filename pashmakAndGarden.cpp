#include<bits/stdc++.h>
using namespace std; 

int main(){
   int x1 , y1 , x2 , y2 ;
   cin>> x1>>y1>>x2>>y2;
   if(abs(x2 - x1) != abs(y2 - y1) && x1 != x2 && y1 != y2){
       cout<<"-1";
       return 0;
   }
    else if(x1 == x2){
           cout<< x1 + abs(y2 - y1) << " "<< y1 << " " ;
           cout<< x1 + abs(y2 - y1) << " " << y2 <<" " ;
       }
    else if(y1 == y2){
        cout<< x1 <<" "<< y1 + abs(x2-x1)<<" ";
        cout<< x2 <<" "<< y1 + abs(x2-x1)<<" ";
    }
    else{
           cout<< x1 << " " << y2 <<" ";
           cout<< x2 << " " << y1 <<" ";
       }
return 0;
}