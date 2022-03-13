#include <iostream>
using namespace std;

int main()
{
    int n,z,i(0); //number of times you are going to contest consideration
    cin>> n >> z; //accepts the value
    int min(z) , max(z) ;
    while(--n) //till n reaches 0
    {
        cin >> z  ; //accepts z ie points
        if (z < min )
        {
        min = z ;
        ++i;
        }
        if (z > max)
        {
        max = z ;
        ++i;
        }
    }
    cout << i ;
    return 0;
}