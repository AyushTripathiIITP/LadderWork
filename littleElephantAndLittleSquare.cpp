#include<bits/stdc++.h>
using namespace std; 

int main(){
   int arr[3][3];
   for(int i=0 ; i<3 ; i++){
       for(int j=0 ; j<3 ; j++){
           cin>>arr[i][j];
       }
   }
   for(int i= 0 ; i < 100000 ; i++){
       int fix = i + arr[0][1] + arr[0][2] ;
       for(int j=0 ; j < 100000 ; j++){
           int fix2 = j + arr[1][0] + arr[1][2] ;
           if(fix == fix2){
               for(int k=0 ; k<100000 ; k++){
                   int fix3 = k + arr[2][0] + arr[1][0] ;
                   if(fix3 == fix){
                       cout<<"sucess";
                   }
               }
           }
           else{
               break;
           }
       }
   }
return 0;
}