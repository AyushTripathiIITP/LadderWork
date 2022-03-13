#include<bits/stdc++.h>
using namespace std; 

int binaryMachine(int y , string seq){
    list<int>binary;

    int i=0;
    while(y>0){
        int x;
        x=y%2;
        binary.push_front(x);
        y=y/2;
        ++i;
    }
    list<int>::iterator it;
    for(it = binary.begin() ; it != binary.end() ; it++){
        seq= seq += to_string(*it) ;
    }

}

int main(){

   int n,m,k;
   cin>>n>>m>>k;

   vector<string>army;

   for(int i=0 ; i<m+1 ; i++){
       int x;
       string seq;
       cin>>x;
          binaryMachine(x , seq);
          army.push_back(seq); //push the binary representation of the number given to u
   }
   
}
