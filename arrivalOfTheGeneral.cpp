#include<bits\stdc++.h>
using namespace std;



int main(){
    int n;
    int maxI(0);
    int minI(0);
    cin>>n;
    int line[n];
    for(int i=0 ; i<n ; ++i){
        cin>>line[i];
    }

    int clone[n]; //creates a clone array of line array
    for(int i=0 ; i<n ; ++i){
        clone[i]=line[i];
    }

    //finds the maximum element of array
    //finds the minimum element of the array
    sort(clone, clone + n);
    int max;
    max= clone[n-1];
    int min;
    min= clone[0];
    //search the index of maximum array in line array from clone array;
    //search the index of minimum element of the array
    for(int i=0 ; i<n ; ++i){
        if(max==line[i]){
            maxI = (i+1); //minium of the values
            break;
        }
        else{
            continue;
        }
    }
    for(int k=0 ; k<n ;++k){
        if(min==line[k]){
            minI = (k+1); //maximum of the values
        }
        else{
            continue;
        }
    }
    if(maxI < minI){
        cout<<((maxI-1)+(n-minI));
    }
    else if(maxI > minI){
        cout<<(((maxI-1)+(n-minI))-1);
    }
}