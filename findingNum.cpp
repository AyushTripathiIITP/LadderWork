#include<bits/stdc++.h>
using namespace std; 

int main(){
    int n,x;
    cout<<"Enter the size of array";
    cin>>n;
   int arr[n];
   cout<<"Enter the elements of the array";
   for(int i=0 ; i < n ; i++){
       cin>>arr[i];
   }
   cout<<"Enter the number you want to search for";
   cin>> x ;
   //sorting the array
   sort(arr , arr + n);
   int low = 0 ;
   int high = n-1 ;
   while(low <= high){
   int mid = low + (high - low)/2 ;
       if(arr[mid] < x){
           low = mid + 1 ;
       }
       else if(arr[mid] > x){
           high = mid -1;
       }
       else{
           cout<<"found";
           return 0;
       }
   }
   cout<<"not found";
return 0;
}