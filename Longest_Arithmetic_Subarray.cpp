#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter Array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int pd=arr[0]-arr[1];
    int curr=2;
    int ans=2;
    int j=2;
    while(j<=n)
    {
        if(pd==arr[j]-arr[j+1])
        {
            curr++;
        }
        else{
            pd=arr[j]-arr[j+1];
            curr=2;
        }
        ans=max(curr,ans);
        j++;
    }
    cout<<ans<<endl;
    
}