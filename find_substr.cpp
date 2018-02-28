#include <iostream>
#include <string>
using namespace std;

int Find(string str_long,string str_short)
{
    if(str_long.length() < str_short.length())
    {
        cout<<"error"<<endl;
        return -1;
    }
    string temp;
    char str_short_first=str_short[0];

    for(int i=0;i<str_long.length();i++)
    {
        if(str_long[i]==str_short_first)
        {
            temp.assign(str_long,i,str_short.length());
            if(temp==str_short)
            {
                return ++i;
            }
            else
            {
                continue;
            }
        }
    }
    return -1;
}

int main()
{
    string str_l;
    cout<<"请输入第一个长字符串"<<endl;
    cin>>str_l;
    string str_s;
    cout<<"请输入第一个短字符串"<<endl;
    cin>>str_s;
    cout<<Find(str_l,str_s)<<endl;
    return 0;
}
