#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cout<<"Queue Size=";
    cin>>n;
    cout<<"Pages=";
    vector<int>a;
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Head Position=";
    int v;
    cin>>v;
    int j=0;
    while(j<n)
    {
        vector<pair<int,int>>b;
        for(int i=0;i<n;i++)
        {
            b[i].first=abs(v-a[i]);
            b[i].second=a[i];
        }
        sort(b.begin(),b.end());
        cout<<"Move from "<<v<<" to "<<b[0].first<<"  requires seek time is "<<abs(v-b[0].second)<<endl<<endl;
        b.erase(b.begin());
        j++;
        v=a[0];
    }
}
