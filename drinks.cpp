#include<bits/stdc++.h>
using namespace std; 

int main(){
   float n,sum(0);
   cin>>n;
   for(int i=0 ; i<n ; i++){
       float num;
       cin>>num;
       sum += num;
   }
   float ans = sum / n ;
   printf("%0.9f",ans);
return 0;
}