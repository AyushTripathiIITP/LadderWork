#include<bits/stdc++.h>
using namespace std;

#define ll long long;
long long factorial(long long a){
    if(a>1){
        return(a*factorial(a-1));
    }
    else{
        return(1);
    }
}

int main(){
    long long x;
    cout<<"what factorial do u want to know about?";
    cin>>x;
    cout<< factorial(x);
}