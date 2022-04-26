#include<bits/stdc++.h>
using namespace std;

bool automaton(string s, string t){
int j(0);
   for(int i = 0 ; i<s.size() ;i++){
       if(t[j] == s[i]){
           j++;
       }
   }
   if(j == t.size()){
       return true;
   }
   else{
       return false;
   }
}
bool a(string s,string t){
    int arr1[s.size()];
   int arr2[s.size()];
   for(int i=0 ; i<s.size() ; i++){
       arr1[i] = s[i];
   }
   for(int i=0 ; i<t.size() ; i++){
       arr2[i] = t[i];
   }
   sort(arr1 , arr1 + s.size());
   sort(arr2 , arr2 + t.size());

   for(int i = 0 ; i < s.size() ; i++){
       if(arr1[i] == arr2[i]){
           continue;
       }
       else{
           return false;
       }
   }
   return true;
}
bool both(string s, string t){
    for(int i=0 ; i < t.size() ; i++){
       int p = s.find(t[i]);
       if(p == -1){
           return false;
           break;
       }
   }
   return true;
}

int main(){
   string s,t;
   cin>>s>>t;
   if(s.size() < t.size()){
       cout<<"need tree\n";
       return 0;
   }
   else if(automaton(s,t)){
       cout<<"automaton\n";
       return 0;
   }
   else if(a(s,t)){
       cout<<"array\n";
       return 0;
   }
   else if(both(s,t)){
       cout<<"both\n";
       return 0;
   }
   else{
       cout<<"need tree\n";
       return 0;
   }
return 0;
}