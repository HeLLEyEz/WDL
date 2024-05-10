#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int m,n;
        cin>>m>>n;
        m--;//As elements are starting from 1
        n--;
        int x[m];//x is vertical axis and y is horizontal axis
        int y[n];
        for(int i=0;i<m;i++) cin>>x[i];
        for(int j=0;j<n;j++) cin>>y[j];

        sort(x,x+m,greater<int>());
        sort(y,y+n,greater<int>());

        int ans=0;
        int i=0,j=0;
        int horizontal_count=1;
        int vertical_count=1;

        while(i<m && j<n)
        {
            if(x[i]>y[j])
            {
                ans+=x[i]*vertical_count;
                horizontal_count++;//opposite axix ka count increase karega
                i++;
            }
            else
            {
                ans+=y[j]*horizontal_count;
                vertical_count++;
                j++;
            }
        }

        while(i<m)//if m!=n then kuch elemnt while loop mai bach jayenge unke liye h
        {
            ans+=x[i]*vertical_count;
            i++;
        }
        while(j<n)
        {
            ans+=y[j]*horizontal_count;
            j++;
        }

        cout<<ans<<endl;
    }

}