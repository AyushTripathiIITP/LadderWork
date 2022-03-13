#include <bits/stdc++.h>
using namespace std;

#define loop(a,b,c) for(int i=a ; i<b ; i=i+c)

void mainFunction(){
    int n,m;
    cin>>n>>m;
    set<int> studentsInClass ;

    for(int x=0 ; x<n ; x++){
        int input;
        cin>>input;
        studentsInClass.insert(input);
    }

    set<int> studentsOutClass ;
    for(int x=0 ; x<m ; x++){
        int input1;
        cin>>input1;
        studentsOutClass.insert(input1);
    }

    for(int i=0 ; i<m ; ++i){
        if(studentsInClass.find(i) != studentsInClass.end() ){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }

    /*for(set<int>::iterator it=studentsOutClass.begin() ; it !=studentsOutClass.end() ; ++it){
        if(studentsInClass.find(*it) != studentsInClass.end() ){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }*/
}



int main(){
   
    int t; //test cases
    cin>>t;
    loop(0,t,1){
        mainFunction();
    }
    }