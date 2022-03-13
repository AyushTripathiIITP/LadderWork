#include<bits/stdc++.h>
using namespace std; 



void mainFunction(){
    int n,H ;
    cin>>n>>H;
    int hit;
    int stroke(0);

    vector<int> hitpoint;

    for(int i=0 ; i<n ; i++){
        cin>>hit;
        hitpoint.push_back(hit);
    }

    sort(hitpoint.begin() , hitpoint.end());

    int x,y;
    x= hitpoint[n-1];
    y= hitpoint[n-2];

    int f= x+y ;

    if(H%f ==0){
        cout<< 2*(H/f)<<endl;
    }
    else if(H%f <= x){
        cout<< 2*(H/f)+1<<endl;
    }
    else{
        cout<< 2*(H/f)+2<<endl;
    }
}

    

int main(){
    int t;
    cin>>t;

    for(int i=0 ; i<t ; i++)
    mainFunction();


return 0;
}