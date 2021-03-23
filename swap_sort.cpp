#include <bits/stdc++.h>
using namespace std;

void findingmissingandduplicate(int n,int a[])
{
	int i=0;
	while(i<n)
	{
		if(a[i] != a[a[i]-1])
	    {
		    swap(a[i],a[a[i]-1]);
	    }
		else 
		{
			i++;
		}

	}

	for(int k=0;k<n;k++)
	{
		if(a[k] != k+1)
		{
			cout<<"duplicate number is: "<<a[k]<<endl;
			cout<<"missing number is: "<<k+1<<endl;
		}
	}
	

}

int main() 
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin>>n;
	int a[n];
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	findingmissingandduplicate(n,a);
	return 0;
}