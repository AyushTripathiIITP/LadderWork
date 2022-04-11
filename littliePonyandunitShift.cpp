#include<bits/stdc++.h>
using namespace std; 

int main(){
   int n,v(0),s;
   cin>>n;
   vector<int>vect;

   while(n != 0){
       n-- ;
       int num;
       cin>>num;
       vect.push_back(num);
   }

   for(int i=0 ; i< n ; i++){
       if(vect[i] > vect[i+1]){
           v++;
           s=i;
   if(vect[n-1] > vect[0]){
       s = n-1 ;
       v++;
   }
       }
   }

   if( v == 0){
       cout<< 0 ;
       return 0;
   }
   else if(v > 1){
       cout<< -1 ;
       return 0;
   }
   else {
       cout<< (n - s -1) ;
   }
return 0;
}