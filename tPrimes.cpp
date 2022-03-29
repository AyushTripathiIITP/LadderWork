#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long n )
{
    if(n<2)
        return false;
    else if(n==2)
        return true;
    long long limit=sqrt(n);
    if(n%2==0)
        return false;
        for(int j=3; j<=limit; j+=2){
            if(n%j==0)
                return false;
            }
    return true;
}
  
int main(){
   long long n;
   cin>>n;

   for(int i=0 ; i<n ; i++){
       long long m;
       cin>>m;
       long long int num = sqrt(m);
    //    long double num2 = sqrt(m);
       if( num*num == m && isPrime(num)==1){
           cout<<"YES\n";
       }
       else{
           cout<<"NO\n";
       }
   }
}