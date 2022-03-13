#include<bits\stdc++.h>
using namespace std;

string lower( string &u){
    transform(u.begin(), u.end(), u.begin() , :: tolower);
    return u ;
}

int main(){
    string s;
    string r;
    int e(0);
    cin>>s>>r;
    lower(s);
    lower(r);
     //create a function for comparision 
    for(int i=0 ; i< s.size() ; i++ ){
        if(s[i] == r[i]){
            e +=0 ;
        }
        else if(s[i] < r[i]){
            e += -1;
            break;
        }
        else if(s[i]>r[i]){
            e += 1 ;
            break;
        }
    }
    if(e < -1){
        cout<< "-1";
    }
    else if( e > 1){
        cout<< "1";
    }
    else{
        cout<< e;
    }
}
