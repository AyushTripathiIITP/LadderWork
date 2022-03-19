#include<bits/stdc++.h>
using namespace std; 

#define ll long long

int main(){
   ll n;
   cin>>n;

   if(n>= 0){
       cout<< n;
       return 0;
   }
   else{
       // x is number obtained on removing last digit
       int x = (n/10);
       //y is number obtained on removing second last digit
       int z = (n/100);
       int w = (n%10);
       int y = 10*z + w ;
       cout<< max(x,y);
   }
return 0;
}