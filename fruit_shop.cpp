#include <iostream>
using namespace std;

int main()
{
    unsigned short int a,b,p,ca,cb,cp,m;
    cin>>a>>b>>p;
    cout<<endl;
    cin>>ca>>cb>>cp;
    cout<<endl;
    cin>>m;
    int nof=0;
    while(ca>0&&m>a)
    {
	    if((ca*a)<=m)
	    {
	    	m-=ca*a;
	    	nof+=ca;
	    	break;
	    }ca--;
    }
    while(cb>0&&m>b)
    {
	    if((cb*b)<=m)
	    {
	    	m-=cb*b;
	    	nof+=cb;
	    	break;
	    }cb--;
    }
    while(cp>0&&m>p)
    {
	    if((cp*p)<=m)
	    {
	    	m-=cp*p;
	    	nof+=cp;
	    	break;
	    }cp--;
    }
    cout<<"\n"<<nof;
    return 0;
}
