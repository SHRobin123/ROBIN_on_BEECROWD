//Count Letters

#include<iostream>
#include<string>
using namespace std;
int main(){

string s;
getline(cin,s);
  
int count = 0;
  
  for(int i=0; i<s.size();i++){
    
    if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
      
      count++;
    }
  }
cout<< count<<endl;  
}

/*

Input:
He110 W0rld!
Output:
6

*/
