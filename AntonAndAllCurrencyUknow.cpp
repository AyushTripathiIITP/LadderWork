#include<bits/stdc++.h>
using namespace std; 

#define ll long long 

int main(){
   string num;
   cin>> num;
   int flag(0);
   int s= num.size();
   ll int index;

   for(ll int i=s-1 ; i>=0 ; i--){
       if(num[i]%2==0){
           ++flag;
           if(flag==1 || num[i] < num[s-1]){
               index = i;
           }
       }
   }

   if(flag == 0){
       cout<<"-1\n";
   }
   else{
    swap(num[index] , num[s-1]);
    for (ll int i = 0; i < s; i++)
    {
        cout<< num[i];
    }
   }
return 0;
}