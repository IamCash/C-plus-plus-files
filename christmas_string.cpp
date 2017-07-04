#include <iostream>
using namespace std;

int main()
{
    char first[3000],test[3000];
    unsigned short int n , count=0,x;
    cin>>first;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        x=0;
        cin>>test;
        int j=0;
        while(first[j]!='\0')
        {
            if(first[j]==test[j]||first[j]=='*')
                j++;
            else
            {
                 if(first[j]!=test[j]&&x==0)
               {
                   x=1;
                   first[j]='*';
                   j++;
               }
                else
                if(first[j]!=test[j]&&x==1)
                {
                    x++;
                    break;
                }
            }
        }
        if(x==0||x==1)
        count++;
        cout<<first<<endl;
    }
    cout<<endl;
    cout<<count;
    return 0;
}
