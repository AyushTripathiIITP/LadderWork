#include<bits/stdc++.h>
using namespace std; 

int main(){
    int n,k,q(0);

    cin>>n>>k;

    int lt = 240 - k;

    for(int i=1 ; i<n+1 ; ++i){
        if(lt>0){
        lt=lt - 5*i;
        if(lt>=0){
            ++q;
        }
        else{
            break;
        }
        }
    }
    cout<<q;
    
return 0;
}