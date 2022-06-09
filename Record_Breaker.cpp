#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int RB=0;
    if(arr[0]>arr[1])
    {
        RB++;
    }
     for(int i=1;i<=n-2;i++)
    {
        if((arr[i]>arr[i-1])&&(arr[i]>arr[i+1]))
        {
            RB++;
        }
    }
    if(arr[n-1]>arr[n-2])
    {
        RB++;
    }
    cout<<RB<<endl;
    return 0;
}