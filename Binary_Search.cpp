#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key)
{
    int low,mid,high;
    low=0;
    high=n-1;
    while(low<=high)
    {
         mid=(low+high)/2;
         if(arr[mid]==key)
         {
             return mid;
         }
         else if(arr[mid]>key)
         {
             high=mid-1;
         }
         else
         {
             low=mid+1;
         }
    }
    return -1;
}
int main()
{
    int n,key;
    cout<<"Enter Size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter Array in sorted manner"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter key"<<endl;
    cin>>key;
    cout<<binarySearch(arr,n,key);
    return 0;
}
