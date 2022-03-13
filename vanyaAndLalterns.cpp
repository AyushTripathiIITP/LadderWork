#include<bits/stdc++.h>

using namespace std; 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   int n,l;
   cin>>n>>l;


   vector<int>la;
   for( int i=0 ; i<n ;i++){
       int x;
       cin>>x;
       la.push_back(x);
   }

//    if(la.size() ==1){
//        cout<< max(n,l);
//        return 0;
//    }

   sort(la.begin() , la.end());

   int diff = max(2*la.front() , 2*(l- la.back()));
   for(int i=1 ; i<n ; i++){
       diff= max(diff , la[i]- la[i-1]);
   }


//    set<int>diff;

//    for(int i=0 ; i<n-1 ; i++){
//        int y= (la[i+1] - la[i]);
//        diff.insert(y);
//    }

//    diff.insert(2*(la.front()));
//    diff.insert(2*(l-la.back()));

//    set<int>::iterator it = diff.end();
//    --it;

//    double k=2;
//     double c = (*it/k);
//    double z =max((l-la.back()) , la.front());
//    double w =max(c,z);
//    cout<< w;

   cout<<fixed<<setprecision(9)<<(double) diff/2;

return 0;
}