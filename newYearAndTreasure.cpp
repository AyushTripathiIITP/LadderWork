#include<bits/stdc++.h>
using namespace std;
#define ll long long

typedef struct point{
    int x;
    int y;
}pts;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);   
freopen("output.txt", "w", stdout);
#endif

    int n;
    ll sum_x(0), sum_y(0);
    cin>>n;
    pts array[n], clue[n];
    for(int i = 0 ; i<n ; i++){
        cin>>array[i].x>>array[i].y;
        sum_x += array[i].x;
        sum_y += array[i].y;
    }
    for(int i = 0 ; i<n ; i++){
        cin>>clue[i].x>>clue[i].y;
        sum_x += clue[i].x;
        sum_y += clue[i].y;
    }
    cout<<sum_x/n<<" "<<sum_y/n<<endl;
return 0;
}