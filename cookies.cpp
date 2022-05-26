#include<bits/stdc++.h>
using namespace std; 

int main(){
   int n,odd(0);
   cin>>n;
   vector<int>arr;
   for(int i=0 ; i <n ; i++){
       int num;
       cin>>num;
       if(num % 2 !=0){
           ++odd;
       }
   }
   if(odd % 2 == 0){
       cout<< n - odd <<endl ;
   }
   else{
       cout<<odd<<endl;
   }
return 0;
}