#include<bits/stdc++.h>
using namespace std; 

int mainFunction(){
    int n;
    cin>>n;
    int first_place(0) , second_place(0) , third_place(0) ;
    if(n % 3 == 0){
        first_place = n / 3 + 1;
        second_place = n / 3 ;
        third_place = n /3 - 1;
    }
    else if(n % 3 == 1){
        first_place = n / 3 + 2;
        second_place = n / 3 ;
        third_place = n / 3 - 1 ;
    }
    else{
        first_place = n / 3 + 2;
        second_place = n / 3 + 1;
        third_place = n / 3 - 1;
    }
    cout<< second_place <<" "<<first_place<<" "<<third_place<<endl;
}
int main(){
   int t;
   cin>>t;
   while(t--){
       mainFunction();
   }
return 0;
}