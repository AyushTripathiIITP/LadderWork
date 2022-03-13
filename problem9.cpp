#include<bits/stdc++.h>
using namespace std;

void birthdayCakeCandles(int candles[n]){  //now i want to take into consideration each element of the array
    for(int m=0 ; m<n ; ++m){
        int max=candles[m];
        if(candles[m+1]>candles[m]){
            max= candles[m+1];
        }
        else{
            max=candles[m];
        }
    }
    cout<<max;
}
int n;
int main(){
    cin>>n;
    int candles[n];
    for(int i=0 ; i<n ; i++) //used these codes to ask from the user for n elements of codes
    {
        cin>>candles[i];
    }
    birthdayCakeCandles();
}

