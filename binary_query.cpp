#include <iostream>
using namespace std;

int main()
{
    unsigned long n;
    unsigned long q;
    unsigned long x;
    unsigned long l;
    unsigned long r;
    unsigned long a[n];
    int c[10];


    cin>>n;
    cin>>q;
    for(int i=0;i<n;i++)
    	cin>>a[i];
	for(int j=0;j<q;j++)
	{
		c[0]=0;
		int u=0;
		while(c[u]!='\n')										  // cin.getline(c,10);
		cin>>c[u++];
		if(c[0]==0)
		 {
		 	l=c[1];r=c[2];
		 	if(a[r-1]==0) cout<<"EVEN"<<endl;
		 	else cout<<"ODD"<<endl;
		 }
		 else if(c[0]==1)
		 {
		 	x=c[1];
		 	if(a[x-1]==0)
		 		a[x-1]=1;
		 	else
		 		a[x-1]=0;

		 }

	}


    return 0;
}
