#include <iostream>
#include <string>

using namespace std;

void mainfunction(int test){
    string kingdom;
    cin >> kingdom;
    string::iterator it = kingdom.end();
    char last = *(it-1);
    if(last=='a' || last =='e' || last =='i' || last=='o' || last=='u'){
    cout << "Case #" << test << ": " << kingdom << " is ruled by Alice." << endl;
    }
    else if(last =='y'){
        cout << "Case #" << test << ": " << kingdom << " is ruled by nobody."<< endl;
    }
    else{
        cout << "Case #" << test << ": " << kingdom << " is ruled by Bob."<< endl;
    }
}


int main() {
  int testcases;
  cin >> testcases;

  for (int t = 1; t <= testcases; ++t) {
    mainfunction(t);
  }
}
