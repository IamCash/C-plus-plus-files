#include<iostream>
# define max 100000
using namespace std;

unsigned int towers[max];
unsigned short int T;
unsigned int N;
void swap(unsigned int &a,unsigned int &b)
{
 unsigned int temp =a;
  a=b;
  b=temp;
}
void arrange_towers(unsigned int towers[],unsigned int N)
{
  for(unsigned int i=0;i<N;i++)
  {
     for(unsigned int j=0;N-1-i;j++)
      {if(towers[j]<towers[j+1])
        swap(towers[j],towers[j+1]);
      }
  }
}
int main()
{
  cout<<"Enter the no. of test cases:"<<endl;
  cin>>T;
  cout<<"Enter the no. of towers:"<<endl;
  cin>>N;
  cout<<"Enter the height of "<<N<< " towers :"<<endl;
  for(int i=0;i<N;i++)
  cin>>towers[i];
  arrange_towers(towers,N);
  for(int i=0;i<N;i++)
  cout<<towers[i]<<"\t";
  return 0;
}
