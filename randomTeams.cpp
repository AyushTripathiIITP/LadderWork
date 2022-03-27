#include<bits/stdc++.h>
using namespace std; 

int main(){
   long long n,m;
   cin>>n>>m;

   if(n<m){
       cout<<"-1";
       return 0;
   }

   long long rem = n%m;

   long long qut =n/m;

   long long MINans;
   long long MAXans;

   if(rem !=0){
       MINans = (((qut+1)*qut)/2)*rem;
       MINans += (((qut-1)*qut)/2)*(m-rem);
   }
   else{
       MINans = (((qut-1)*qut)/2)*m;
   }

   long long x = n-m+1;
   MAXans = (x*(x-1))/2 ;

   cout<<MINans <<" "<<MAXans ;

return 0;
}