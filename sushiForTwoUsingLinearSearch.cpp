#include<bits/stdc++.h>
using namespace std; 

int main(){
    int n;
    cin>>n;


int ty;
vector<int>s;
    for(int i=0 ; i<n ; ++i){
        cin>>ty;
        s.push_back(ty);
    }


int one(0), two(0) , flag(0) , ans(0);
    if(s[0]==1){
        ++one;
    }
    else{
        ++two;
    }

    for(int i=1 ; i<n ;i++){
        if(s[i-1] != s[i]){
            ++flag;
        }

        if(flag==2){
            ans = max(ans, min(one,two));
            flag =1;
            if(s[i]==1){
                one=0;
            }
            else{
                two=0;
            }
        }

        if(s[i] ==1){
            ++one;
        }
        else{
            ++two;
        }
    }

    ans = max(ans,min(one,two));

    cout<< 2*ans ;
return 0;
}