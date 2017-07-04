#include <iostream>
using namespace std;

int main()
{
    unsigned long int n,x,a[n];
    int attempt=0;
    int skip=0;
    cin>>n>>x;
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
    	if(a[i]<=x&&skip<2)
    	attempt++;
    	else if(a[i]>x&&skip<1)
    	skip++;
    	else
    	break;
    }
    cout<<"\n"<<attempt;

    return 0;
}
