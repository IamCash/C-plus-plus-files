#include <iostream>
using namespace std;

int main()
{
    unsigned short int t,n;
    unsigned short int m[n][n];
    cin>>t;
    for(int k=0;k<t;k++)
    {
    	cin>>n;
    	for(int i=0;i<n;i++)
    	{
    		for(int j=0;j<n;j++)
    		cin>>m[i][j];
    	}
    	int count=0;
    	   for(int i=0;i<n;i++)
    	   {
    	   		for(int j=0;j<n;j++)
    	   		{
    	   			for(int u=i+1;u<n;u++)
    	   			{
    	   				for(int v=j+1;v<n;v++)
    	   				{
    	   					if(m[i][j]>m[u][v])
    	   					count++;
    	   				}
    	   			}
    	   		}
    	   }
    	   cout<<count<<endl;
    }
    return 0;
}
