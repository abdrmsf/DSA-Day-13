// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    string s="daabcbaabcbc";
    string part="abc";
    int index=s.find(part);
    while(index!=string::npos)
    {
        s=s.erase(index,part.length());
        index=s.find(part);
    }
    cout<<s<<endl;
    return 0;
}