#include<iostream>
using namespace std;
int main()
{
    int n,max=0;
    cout<<"Enter Size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter Array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
for(int i=0;i<n;i++)
{
    if(arr[i]>max)
    {
        max=arr[i];
    }
    cout<<max<<endl;
}
return 0;
}