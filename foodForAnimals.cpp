#include<bits/stdc++.h>
using namespace std; 

int mainFunction(){
    int a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;
    if(a+c >= x && b + c >= y && a+ b + c  >= x + y){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}
int main(){
    int t;
    cin>> t;
    while(t--){
        mainFunction();
    }

return 0;
}