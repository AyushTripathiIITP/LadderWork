#include<bits\stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;
    int a(0),b(0);
    for(int i =1 ;i<(num+1) ; ++i){
        if(i==4 || i==7 || i==44 || i==47 || i==74 || i==77 || i==444 || i==447 ||  i==474 || i==477 || i==744 || i==747 || i==774 || i==777){
            if(num%i ==0){
                ++a;
            }
            else{
                ++b;
            }
    }
    }
    if(a>=1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    }