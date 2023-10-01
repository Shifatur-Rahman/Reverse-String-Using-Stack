#include <iostream>
#include <stack>
using namespace std;

void sortString(string &str){

stack<char> tempStack;

for(char ch:str) tempStack.push(ch);

for(int i=0; i<str.length(); i++){
    str[i] = tempStack.top();
    tempStack.pop();
}

}


int main(){

string str;
cin>>str;
cout<<"Original String: "<<str<<endl;
sortString(str);
cout<<"Reverse String: "<<str<<endl;

}
