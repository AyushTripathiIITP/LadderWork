#include<bits/stdc++.h>
using namespace std;

int a;

int firstSum(int value[a]){
    for(int r(0) ; r < a ; ++r){
        sum += value[r];
    }
    return sum;
}
int lastSum(int value[a]){
    for(int r(a-1) ; r >= 0 ; --r){
        sum2 += value[r];
    }
}


int main(){
    int totalCoin(0);
    int sum(0);
    cin>>totalCoin;
    int value[totalCoin];
    for(int i(0) ; i< totalCoin ; ++i){
        cin>>value[i];
    }
    sort(value, value + totalCoin);
    
    for(int i(0) ; i< totalCoin ; ++i){
        if( lastSum(value[totalCoin -i]) > ( firstSum(value[totalCoin]) - lastSum(value[totalCoin -i]) ) ){  // for i=2 the second value is not excluded and so on
        cout<< i ;
        }
        }
}