#include<bits/stdc++.h>
using namespace std; 

int main(){
   int n;
   cin>>n;
   int Nutan(0);
   int Tusla(0);
   for(int i=0 ; i<n ; i++){
       char s;
       cin>> s;
       if(s=='N'){
           ++Nutan;
       }
       else{
           ++Tusla;
       }
   }
   if(Nutan > Tusla){
       cout<<"Nutan\n";
   }
   else{
       cout<<"Tusla\n";
   }
return 0;
}