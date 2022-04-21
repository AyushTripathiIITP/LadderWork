#include<bits/stdc++.h>
using namespace std; 

int mainfunction(){
    int n,even=0,odd=0,w=0;
    int even2=0,odd2=0,w2=0;
    cin>>n;
    vector<int>arr,odd_pos_even_num,odd_pos_odd_num,even_pos_even_num,even_pos_odd_num;
    for(int i=0 ; i<n ; i++){
        int num;
        cin>>num;
        if( i % 2 ==0 && num%2 ==0){
        odd_pos_even_num.push_back(num);
        }
        else if(i % 2 ==0 && num % 2 == 1){
            odd_pos_odd_num.push_back(num);
        }
        else if(i % 2 !=0 && num % 2 == 0){
            even_pos_even_num.push_back(num);
        }
        else if(i % 2 !=0 && num % 2 == 1){
            even_pos_odd_num.push_back(num);
        }
    }
    for(int i=0 ; i<n ; i= i+2){
        ++w;
    }
    w2 = n - w ;
    if(odd_pos_even_num.size() == w && even_pos_odd_num.size() == w2){
        cout<<"YES\n";
        return 0;
    }
    else if(odd_pos_odd_num.size() ==w && even_pos_even_num.size() == w2){
        cout<<"YES\n";
        return 0;
    }
    else if(even_pos_even_num.size() == w2 && odd_pos_odd_num.size() == w){
        cout<<"YES\n";
        return 0;
    }
    else if(even_pos_odd_num.size() == w2 && odd_pos_even_num.size() == w){
        cout<<"YES\n";
        return 0;
    }
    else if(even_pos_even_num.size() == w2 && odd_pos_even_num.size() ==w){
        cout<<"YES\n";
        return 0;
    }
    else if(even_pos_odd_num.size() == w2 && odd_pos_odd_num.size() == w){
        cout<<"YES\n";
        return 0;
    }
    else{
        cout<<"NO\n";
        return 0;
    }
    
}

int main(){
   int t;
   cin>>t;
   while(t!=0){
       mainfunction();
       t--;
   }
return 0;
}