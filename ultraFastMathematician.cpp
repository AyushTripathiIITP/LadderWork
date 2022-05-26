#include<bits/stdc++.h>
using namespace std;

int main(){
   string a , b;
   cin>> a >> b ;
   int len = a.size() ;
   for(int i =0 ; i< len ; i++){
       if( a[i] == b[i] ){
           cout<<"0";
       }
       else{
           cout<<"1";
       }
   }
return 0;
}