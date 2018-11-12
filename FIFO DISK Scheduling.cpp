#include<iostream>
using namespace std;


int main()
{
	int n;
	cout<<"Queue Size=";
	cin>>n;
	int a[10001];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Head Position=";
	int v;
	cin>>v;
	
	cout<<"Move from "<<v<<" to "<<a[0]<<"  requires seek time is "<<abs(v-a[0])<<endl<<endl;
	double sum=abs(v-a[0]);
	for(int i=1;i<n-1;i++)
	{
		sum+=abs(a[i-1]-a[i]);
		cout<<"Move from "<<a[i-1]<<" to "<<a[i]<<"  requires seek time is "<<abs(a[i-1]-a[i])<<endl<<endl;
	}
	cout<<"Total seek time="<<sum<<endl<<endl;
	cout<<"Avg seek time="<<sum/n;
	return 0;
}
