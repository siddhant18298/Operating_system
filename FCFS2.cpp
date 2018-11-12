#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    pair<int,int>process[1000];
    int n,ct[1000],tat[1000],wt[1000];
    cout<<"\t\tFirst Come with first Serve with Arrival time"<<endl;
    cout<<"Enter the no. of process you want to insert"<<endl;
    cout<<"N=";
    cin>>n;
    
    // this loop is used to inserts the burst time of N processes
    for(int i=0;i<n;i++)
    {
        cout<<"Process["<<i+1<<"]="<<endl;
        cout<<"Arrival Time["<<i+1<<"]=";
        cin>>process[i].first;
        cout<<"Burst Time["<<i+1<<"]=";
        cin>>process[i].second;
        cout<<endl;
    }
    float sum=0;
    //sort function 
    sort(process,process+n);
    ct[0]=(process[0].second-0)+process[0].first;
    tat[0]=ct[0]-process[0].second;
    wt[0]=tat[0]-process[0].first;
    for(int i=1;i<n;i++)
    {
        if(process[i].first-ct[i-1]>0)
        {
            ct[i]=ct[i-1]+(process[i].first-ct[i-1])+process[i].second;
        }
        else
        {
            ct[i]=ct[i-1]+process[i].second;
        }
        tat[i]=ct[i]-process[i].first;
        wt[i]=tat[i]-process[i].second;
        sum+=wt[i];
    }
    cout<<"Arrival\t Burst\tCompletion\tTaT\tWaiting"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<process[i].first<<"\t"<<process[i].second<<"\t"<<ct[i]<<"\t\t"<<tat[i]<<"\t"<<wt[i]<<endl;
    }
    float v=sum/n;
    cout<<"Average waiting time is :"<<v<<endl;
    return 0;
}
