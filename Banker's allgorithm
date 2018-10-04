#include<iostream>
using namespace std;

int main()
{
	int alloc[][4]={ 	{1,2,2,1},
						{1,0,3,3},
						{1,2,1,0},
					};
	
	int max[][4]=	{ 	{2,2,2,2},
						{1,1,3,4},
						{1,3,5,0},
					};

	int avail [4] = {3,1,1,2};	
	
	int rows =  sizeof alloc / sizeof alloc[0]; 	// 3 rows  
	int cols = sizeof alloc[0] / sizeof(int); 		// 4 cols
	
	int need[rows][cols];

	for(int i=0;i<rows;i++)
	{
		for(int j=0; j<cols; j++)
		{
			need[i][j]=max[i][j]-alloc[i][j];
		}
	}

	
	cout<<"Allocation"<<endl;
	for(int i=0;i<rows;i++)
	{
		for(int j=0; j<cols; j++)
		{
			cout<<alloc[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl;

	cout<<"max"<<endl;
	for(int i=0;i<rows;i++)
	{
		for(int j=0; j<cols; j++)
		{
			cout<<max[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl;
	
	cout<<"need"<<endl;
	for(int i=0;i<rows;i++)
	{
		for(int j=0; j<cols; j++)
		{
			cout<<need[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl;
	
	cout<<"available"<<endl;
	for(int i=0;i<cols;i++)
	{
			cout<<avail[i]<<" ";
	}
	
	cout<<endl;
	
	int finish[cols]= {0,0,0,0};
	int str[cols],temp=0,sum=0,traverse=0;
	
		
	while(sum<4)
	{
		if(traverse>10)
		{
			cout<<"Unsafe state"<<endl;
			return 0;
		}
			for(int i=0;i<rows;i++)
			{
				traverse++;
				if(finish[i]==0)
					{
					
					int flag=0;
					
					for(int j=0; j<cols; j++)
					{
						if((avail[j] - need[i][j])>0)
						{
							flag++;
						}	
					}
					if (flag==cols);
					{
						for(int j=0;j<cols;j++)
						{
							avail[j]=avail[j]+alloc[i][j];	
						}
						finish[i]=1;
						str[temp]=i;
						temp++;
					}
				}
				
			for(int i=0;i<cols;i++)
			{
				sum=sum+finish[i];
			}
		}
	}
	
	
	for(int i=0;i<rows;i++)
	{
		cout<<"p"<<str[i]<<" ";
	}
		
return 0;
}
