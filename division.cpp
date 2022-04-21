#include<bits/stdc++.h>
using namespace std; 

int mainFunction(){
    int rating;
    cin>> rating;
    int x;

    if(rating >= 1900){
        x = 1 ;
    }
    else if(rating >= 1600 && rating <= 1899){
        x = 2;
    }
    else if(rating >=1400 && rating <= 1599){
        x = 3;
    }
    else if(rating <= 1399){
        x = 4;
    }
    cout<<"Division "<<x<<endl;
return 0;
}

int main(){
   int t;
   cin>>t;

   while(t != 0){
       mainFunction();
       t--;
   }
return 0;
}