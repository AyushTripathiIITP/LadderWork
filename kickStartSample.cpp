#include<bits/stdc++.h>
using namespace std;

void mainfunction(int k){
    int totalcandies(0);

    int n,m;  //n is no. of candy bags 
    cin>>n>>m;//m is no of children
    int candiesBages[n];
    for(int i=0 ; i<n ; ++i){
        cin>> candiesBages[i];
        totalcandies += candiesBages[i];
    }
    cout<<"Case #"<<k+1<<": "<< (totalcandies % m) << endl; //i want to print this line at the end of accepting inputs for all test cases
    }

int main(){
    int t;
    cin>>t;
    for(int k=0 ; k<t ;++k){
        mainfunction(k);
    }
}