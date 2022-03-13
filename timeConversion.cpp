#include<bits/stdc++.h>
using namespace std; 

int timeConversion(string s){
    int w=s.size();
    string x;
    x=s;
    x.erase(x.end()-2 , x.end());
    if(s[w-2] =='A' && s[0]=='1' && s[1]=='2'){
        x[0]=x[0]-1;
        x[1]=x[1]-2;
        cout<<x;
        return 0;

    }
    else if(s[w-2] =='P' && s[0]=='1' && s[1]=='2'){
        cout<<x;
    }
    else if(s[w-2]=='A'){
        cout<<x;
        return 0;
    }
    else{
        x[0]=x[0]+1;
        x[1]=x[1]+2;
        cout<<x;
        return 0;
    }
}

int main(){
   string s;
   cin>>s;
   timeConversion(s);
}