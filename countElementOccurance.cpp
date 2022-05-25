#include<bits/stdc++.h>
using namespace std; 

int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0 ; i < n ; i++){
       cin>>arr[i];
   }
   int target;
   cin>> target;
   int start1 = -1;
   int start2 = -1;
   int low = 0 ;
   int high = n-1;
   //finding the first occurance of target
   while(low <= high){
       int mid = low + (high - low)/2 ;
       if(arr[mid] == target){
           start1 = mid ;
           high = mid - 1;
       }
       else if(arr[mid] < target){
           low = mid + 1 ;
       }
       else if(arr[mid] > target){
           high = mid - 1;
       }
    }
   if(start1 == -1){
       cout<<"not found";
       return 0 ;
   }
   //finding the second occurance
   low = 0 ;
   high = n - 1 ;
   while(low <= high){
       int mid = low + (high - low)/2 ;
       if(arr[mid] == target){
           start2 = mid;
           low = mid + 1 ;
       } 
       else if(arr[mid] < target){
           low = mid + 1 ;
       }
       else if(arr[mid] > target){
           high = mid - 1;
       }
       else{
           high = mid + 1 ;
       }
   }
   cout<< start2 - start1 + 1 ;
return 0;
}