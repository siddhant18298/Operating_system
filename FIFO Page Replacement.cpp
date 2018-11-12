#include<iostream>
using namespace std;

bool search(int v,int a[],int m)
{
	for(int i=0;i<m;i++)
	{
		if(v==a[i])
			return true; 
	}
	return false;
}

int main()
{
	int pages[10001];
	int n;
	cout<<"No. of Pages=";
	cin>>n;
	int frames[3]={-1};
	cout<<"Enter the pages=";
	for(int i=0;i<n;i++)
	{
		cin>>pages[i];
	}
	int hit=0,j=0,fault=0;
	for(int i=0;i<n;i++)
	{
		if(search(pages[i],frames,3)==true)
		{
			cout<<pages[i]<<" is hit"<<endl;
			hit=1;
		}
		else
		{
			cout<<pages[i]<<" is fault"<<endl;
			frames[j]=pages[i];
			j=(j+1)%3;
			fault++;
			
		}
		cout<<"Now Frames are :"<<endl;
		for(int k=0;k<3;k++)
		{
			cout<<frames[k]<<" ";
		}
		cout<<endl<<endl;
	}
	cout<<"No of faults="<<fault<<endl;
}
