#include<bits/stdc++.h>
#define max 1000000007

using namespace std;

int checkif(int x){
    if(x == - max){
        cout<< 0 ;
        return 0;
    }
    else if(x < 0){
        cout<< (x%max) + (max);
        return 0;
    }
    else{
        cout<< (x%max);
        return 0;
    }
return 0;
}

int main(){
   int x,y,n ;
   cin>>x>>y>>n ;

   for(int i=1 ; i <= n ; i= i+6){
       if(n==i){
       checkif(x);
       return 0;
       }
   }
   for(int i=2 ; i <= n ; i= i+6){
       if(n==i){
       checkif(y);
       return 0;
       }
   }
   for(int i=3 ; i <= n ; i= i+6){
       if(n==i){
       checkif(y-x);
       return 0;
       }
   }
   for(int i=4 ; i <= n ; i= i+6){
       if(n==i){
       checkif(-x);
       return 0;
       }
   }
   for(int i=5 ; i <= n ; i= i+6){
       if(n==i){
       checkif(-y);
       return 0;
       }
   }
   for(int i=6 ; i <= n ; i= i+6){
       if(n==i){
       checkif(x-y);
       return 0;
       }
   }
return 0;
}