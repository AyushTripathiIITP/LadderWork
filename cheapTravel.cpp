#include<bits/stdc++.h>
using namespace std; 

int main(){
   int n,m,a,b;
   cin>>n>>m>>a>>b;
   int rubles(0);

   //find cost using m rides for cost of single ride ticket
   int cost = a*m; //this is cost for m rides using single tickets
   int ux = a*n; //now use this ux to derive a condition

   if(ux < b){
       cout<<ux;
       return 0;
   }
   else if(cost > b && n>m ){
       int w= n/m ;
       rubles += w*b ;
   }
   else if(cost>b && n<m ){
       rubles += b;
       cout<<rubles;
       return 0;
   }
   else{
       rubles += n*a;
       cout<<rubles;
       return 0;
   }
   int x = n%m ;
   if( x != 0){
   if(a <= b){
       rubles += x*a;
   }
   else{
       rubles += b;
   }
   }
cout<<rubles;
return 0;
}