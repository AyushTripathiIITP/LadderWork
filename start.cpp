#include<bits/stdc++.h>

using namespace std;

#define uset unordered_set

int main(){
    unordered_set<int> i ;
    i.insert(3);
    i.insert(2);
    i.insert(3);
    i.insert(5);
    i.insert(6);

    cout<< i.size()<<endl;

    i.erase(2);

    cout<< i.size()<<endl;
    if(i.find(3) != i.end())
    {
        cout<<"FOUND"<<endl;
    }
    else{
        cout<<"NO";
    }
    for(uset<int>::iterator it = i.begin() ; it != i.end() ; ++it){
        cout<< *it <<endl;
    }
    //cout<< * i.lower_bound(5);

}