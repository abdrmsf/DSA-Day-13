// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstring>
using namespace std;
bool ispalindrome(string r)
{
    int start=0;
    int end=r.length()-1;
    while(start<=end)
    {
        if(r[start]!=r[end])
        {
            return false;
        }
    start++;
    end--;
    }
    return true;
}
int main() {
string s="A man, a plan, a canal: Panama";
string r="";
for(int i=0;i<s.length();i++)
{
   if(s[i]>='A' && s[i]<='Z') 
   {
       s[i]=s[i]-'A'+'a';
       r=r+s[i];
   }
   else if(s[i]>='a' && s[i]<='z')
   {
       r=r+s[i];
   }
}
cout<<r<<endl;
cout<<ispalindrome(r)<<endl;
}