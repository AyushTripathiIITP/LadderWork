#include<bits\stdc++.h>
using namespace std;

#define REP(a,b,c) for(int i=a; i<b ; i=i+c)
#define REP2(a2,b2,c2) for(int j=a2; j<b2 ; j=j+c2)
int main()
{
    int n;
    cin>>n;
    int matrix[n][n];

    int d1=0;
    int d2=0;
    REP(0,n+1,1)
    {
        REP2(0,n+1,1)
        {
            cin>>matrix[i][j];
            if(i==j)
            {
                d1 += matrix[i][j];
            }
            else if( i=n-j+1)
            {
                d2 += matrix[i][j];
            }
        }
    }
    cout<< abs(d1-d2);
return 0;
}
