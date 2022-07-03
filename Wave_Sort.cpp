// Wave Sort 
/*      arr[0] >=arr[1]<=arr[2] >=arr[3]<= arr[4]   
      arr[0]             arr[2]                    arr[4]
      
               arr[1]                arr[3]   
                       Algo 
1.  start iterating from i=1 to n-2
2.  if arr[i]> arr[i-1]   swap 
3.  if arr[i]> arr[i+1]  swap
4. i=i+2 increment i by 2     */

#include<iostream>
using namespace std;

void swap(int &num1,int &num2){
    int temp=num1;
    num1=num2;
    num2=temp;
}
void Wavesort (int arr[],int n)
{
    for(int i=1;i<=n-2;i+=2){
        if(arr[i]>arr[i-1]){
            swap(arr[i],arr[i-1]);
        }
        else if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

}
  int main ()
  {
    int n;
    cout << "Enter Size" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter Array" << endl;
    for (int i = 0; i < n; i++)
      {
	cin >> arr[i];
      }
    Wavesort(arr, n);
    cout << "Wave Sorted Array:" << endl;
    for (int i = 0; i < n; i++)
      {
	cout << arr[i] << " ";
      }
    return 0;
  }
