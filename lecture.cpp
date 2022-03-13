#include<bits/stdc++.h>
using namespace std;

int fyd(string c , vector<int>f , int pos){
    vector<int>::iterator it;
    it = find(f.begin() , f.end() , c);
    pos = it - f.begin();
}

int main(){
   int n,m;
   cin>>n>>m;

   string a,b,c;

   vector<string>fl;
   vector<string>sl;

   for(int i=0 ;i<m ; i++){
       cin>>a>>b;
       fl.push_back(a);
       sl.push_back(b);
   }

   vector<string>le;

   for(int i=0 ; i<n ; i++){
       cin>>c;
       le.push_back(c);
   }

   vector<string>ans;

   for(int i=0 ; i<n ; i++){
      //the position of each word of le vector in fl vector 
      int p;
      fyd(c[i], fl , p);
      int x =fl[p].size();
      int y =sl[p].size();
      if(x<=y){
          ans.push_back(fl[p]);
      }
      else{
          ans.push_back(sl[p]);
      }
   }
//    vector<int>::iterator it;
//    for(it = ans.begin() ; it != ans.end() ; it++){
//        cout<<*it;
//    }
return 0;
}