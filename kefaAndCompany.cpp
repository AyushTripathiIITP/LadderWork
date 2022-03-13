#include<bits/stdc++.h>
using namespace std;

// m==money s ==size
//int checker(int a[][] , int size , int money){

int main(){

    int n,d;   //n= no of friends d== maximum money difference
    cin>>n>>d;
    int company[n][2];
    for(int i=0 ; i<n ; ++i){
        cin>>company[i][0]>>company[i][1];
    }
    //sort the first column of array syncrounous with second row
    for(int i=0 ; i<n ; ++i){
        if( company[i][0] < company[i+1][0]){
            swap(company[i][0] , company[i+1][1]);
            swap(company[i][1] , company[i+1][1]);
        }
        else{
            ++i;
        }
    }

    for(int i=0 ; i<n ; ++i){
        cout<< company[i][0] <<" "<< company[i][1] <<endl ;
    }

    // A function such that the difference between each element is less d;
    //checker(company , n , d);



}