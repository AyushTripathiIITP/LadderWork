#include<bits/stdc++.h>
using namespace std; 

int main(){
   int n;
   cin>>n;
   //calculte the sum from 1 to n^2
   int c = n*n ;
   for(int i=1 ;i <=c/2 ; i++){
   cout<< i <<" "<< n*n - i + 1<<endl;
   }
//    int sum = (c*(c+1))/2 ;
return 0;
}