
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int level,n,m,a[100000],i,j,flag=0,l;
    cin>>level;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>a[i];
    cin>>m;
    for(i=n; i<n+m; i++)
        cin>>a[i];
        l=n+m;
    sort(a,a+l);
  /*  for(i=0; i<n+m; i++)
        cout<<a[i]<<" ";*/
    for(i=0; i<n+m; i++)
    {
        if(a[i]!=a[i+1])
            flag++;

    }
    /// cout<<flag;
    if(flag==level)
        cout<< "I become the guy.";
    else
        cout<<"Oh, my keyboard!";


}
