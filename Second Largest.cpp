#include<iostream>
using namespace std;
int main()
{
	int t=0,i,max,max1;
	cin>>t;
	while(t--)
	{
		int A[3];
		for(i=0;i<3;i++)
		 cin>>A[i];
		 
		 max=A[0];
		 for(i=0;i<2;i++)
		 {
		 	if(max<A[i+1])
		 	 max=A[i+1];
		 }
		 
		 
		  for(i=0;i<3;i++)
		  {
		  	if(max>A[i])
		  	{
			  for(int j=0;j<3;j++)
		  	{
		  		if(A[i]>A[j])
		  		 max1=A[i];
			  }
		  }
	   }
		  cout<<max1<<endl;
	}
	 
	return 0;
}
