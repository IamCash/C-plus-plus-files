#include <iostream>
#include<stack>
using namespace std;

int main()
{
    unsigned short int n,w,sum=0;
    stack<int>a;
    cin>>n;
    cout<<endl;
    for(int i=0;i<n;i++)
    {
    	cin>>w;
    	a.push(w);
    }
    while(!a.empty())
    {
    	if(a.top()==0)
    	{
    		a.pop();
    		if(!a.empty())
    		a.pop();
    	}
    	else
    	{
    		sum+=a.top();
    		a.pop();
    	}

    }
    cout<<"\n"<<sum;
    return 0;
}
