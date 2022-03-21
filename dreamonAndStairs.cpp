#include<bits/stdc++.h>
using namespace std; 

int main(){
   int n,m;
   cin>>n>>m;

   int x;
   if(n%2 ==0){
       x = n/2;
   }
   else{
       x = (n/2) +1 ;
   }

   for(int i= x ; i<= n ; i++){
       if(i%m ==0){
           cout<<i<<"\n";
           return 0;
       }
   }
   cout<<"-1\n";
   return 0;
}