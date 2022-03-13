#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> first = {1,2,3,4,5,6};
    for(vector<int>::iterator it = first.begin() ; it != first.end(); 
    ++it)
    {
        cout<<*it<<endl;
    }
}