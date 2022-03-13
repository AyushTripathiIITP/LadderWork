#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int exp[6];
    exp[0]= a+b+c;
    exp[1]= (a+b)*c;
    exp[2]= a+(b*c);
    exp[3]= (a*b)+c;
    exp[4]= a*(b+c);
    exp[5]= a*b*c;
    sort(exp , exp + 6);
    cout<<exp[5];
}