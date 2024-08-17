#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>
#include<limits.h>
using namespace std;
int main(){
string sentence="hello Jee kaise ho saare";
string target="hello";
cout<<sentence.find(target)<<endl;
string target2="everyone";
if(sentence.find(target2)==string::npos)
{
    cout<<"Not Found"<<endl;
}
string word="Namaste";
sentence.replace(0,5,word);
cout<<sentence<<endl;
string str="abcdefhijklmnopqrstuvwxyz";
str.erase(0,4);
cout<<str;
return 0;
}