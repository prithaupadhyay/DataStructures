#include<iostream>
#include<stack>
#include<string.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char s[1000];
        cin>>s;
        int i,n;
        n=strlen(s);
        for(i=n-1;i>=0;i--)
        {
            if(s[i]=='.')
            {
                s[i]='\0';
                cout<<&s[i+1]<<".";
            }
        }
        cout<<s<<endl;
}
return 0;
}