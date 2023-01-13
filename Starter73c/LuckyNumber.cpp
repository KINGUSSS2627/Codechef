#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int t=n%10,flag=0;
	    while(n!=0)
	    {
	        t=n%10;
	        n=n/10;
	        if(t==7)
	        {
	            flag=1;
	        }
	    }
	    if(flag==1)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
