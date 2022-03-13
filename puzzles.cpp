#include<bits\stdc++.h>
using namespace std;

    int n;
    int m;

void minimizer(int puzzles[] , int m){
    sort(puzzles , puzzles + m);

    int subset[ ];
    for(int i=0 ; i<= ((m+1)-n) ; ++i){
        int p ;
        p = sort( puzzles , puzzles+ n-1 );
        subset[i]= (max(p))-(min(p));
    }
    sort(subset[0],subset[(m-n)+2]);
    cout<<subset[0];
}

int main(){
    cin>>n>>m;
    int puzzles[m];
    for(int i(0) ; i<m ; ++i){
        cin>>puzzles[i];
    }
    //function to calculate the difference
    minimizer( puzzles , m);
}