#include<bits/stdc++.h>
using namespace std; 

int main(){
   int n;
   cin>>n;

   int arr[n];

   int m;


   for(int i=0 ; i<n ; i++){
       cin>>arr[i];
   }

   for(int j=0 ; j<n ; j++){
       int a = arr[j];
       if(a<38){
           cout<<a<<"\n";
           j++;
           //increase j by 1 and move the programe to again the start of the loop
       }
       else{
           for(int i=1 ; i<21 ; i++){
               if((5*i - a)>0 && (5*i - a)<3){
                   m = max(5*i , a);
                   break;
               }
               else{
                   m=a;
               }
           }
       }
       cout<<m<<"\n";
}
}