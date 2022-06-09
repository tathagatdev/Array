#include<iostream>
using namespace std;
int main()
{
    int n,temp;
    cout<<"Enter Size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter Array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<n;i++)
    {
        int current=arr[i];
        int j=i-1;
        while(current<arr[j] &&j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;

    }
    cout<<"Sorted array is=";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}