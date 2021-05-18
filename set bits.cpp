//to print the no.set bits
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num;
	cin>>num;
	int count=0;
	while(num!=0)
	{
		if(num&1==1)
		{
			count++;
		}
		num=num>>1;
	}
	cout<<count;
}

//to find given position is set bit or not
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,p;
	cout<<"enter";
	cin>>n;
	cout<<"enter p";
	cin>>p;
	if(p==1)
	{
		if(n&1==1)
		cout<<"yes";
		else
		cout<<"no";
	}
	if(p>1)
	{
	if((n&((p-1)<<1))>0)
		cout<<"yes";
	else
       	cout<<"no";		
   }
	
}
//to change the setbit of given position
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,p,result;
	cout<<"enter num";
	cin>>n;
	cout<<"enter position";
	cin>>p;
	if(p==1)
	{
		result = n^1;
		cout<<result;
	}
	else
	{
	result=n^((p-1)<<1));
	cout<<result;
     }
}
