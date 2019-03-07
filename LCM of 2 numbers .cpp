#include <iostream>
using namespace std;

int main() {
	int a,b;
	cin>>a>>b;
	for(int i=1; ;i++)
	{
		int p=a*i;
		if(p%b==0)
		{
			cout<<p;
			break;
		}
		
	}
	return 0;
}
