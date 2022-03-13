#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    int type;
    cin>>n;
    int diff;

    vector<int> sushi;

    while(n--){
        cin>>type;
        sushi.push_back(type);
    }

    sort(sushi.begin() , sushi.end());

    int hi , lo , mid;

    hi =   
    lo =   

    while(hi > lo){
    mid= lo + ((hi - lo)/2); // predicate is "wheater the number is 1?"
    // if p is true then move to second half and again search
    if(sushi[mid] ==1){
        lo = mid +1;
    }
    else{
        hi = mid -1;
    }
    if(hi = lo){  //calulate the difference between the index of mid+1 to index of final +1
        diff = mid + n +1 ;
        break;
    }
    if(diff > n- diff){
        cout<< n-diff <<endl;
    }
    else{
        cout<< diff;
    }


    }

}