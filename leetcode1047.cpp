#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
int main()
{
string str;
    getline(cin,str);
    int i=1;
    while(i<str.length())
    {
        if(str[i-1]==str[i])
        {
            str=str.erase(i-1,2);
            i=1;
        }
        else
        {
            i++;
        }
    }
    cout<<str<<endl;
    return 0;


return 0;
}