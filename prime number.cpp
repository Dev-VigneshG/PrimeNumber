#include<iostream>
using namespace std;
int main()
{
	system("color 20");
	int a,b,c;
	cout<<"ENTER ONE  NUMBER TO FIND OUT PRIME NUMBER OR COMPOSITE NUMBER\n";
	cin>>a;
	b=a/2;
	for(int i=2;i<=b;i++)
	{
		if(a %i ==0)
		{
			cout<<"NUMBER IS COMPOSITE NUMBER\n";
			c=1;
			break;
		}
	}
	if(c==0)
	cout<<"NUMBER IS PRIME NUMBER\n";
	system("pause");
	
	return 0;
}
