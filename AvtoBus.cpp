#include<bits/stdc++.h>
using namespace std; 
#define ll long long 

int mainFunction(){
    ll int n,x(0),y(0);
    cin>>n;
    if(n % 2 != 0 || n<= 3){
        cout<<-1<<"\n";
        return 0;
    }
    if(n == 4){
        cout<<n/4<<" "<<n/4<<endl;
        return 0;
    }
    // else{  //2x + 3y = n/2 for maxima maximize x
    // if((n/2) % 2 == 0){
    //   x = n/4 ;  
    // }
    // else{
    //     x = ((n/2)-3)/2 ;
    // }
    // }
    //maximize y for minima
    x = n/4 ;
    if((n/2)%3 == 0){
        y = n/6 ;
    }
    else{
        y = n/6 + 1 ;
    }
    cout<<y<<" "<<x<<endl;
    return 0;
}

int main(){
   int t;
   cin>>t;
   while(t--){
       mainFunction();
   }
return 0;
}