//  Count Sort 
//    Algo  
/*     1.We first make a count array of size max(arr) 
       2. Then according to index number we count freqency of that  number in our array 
           and put frequency in that index of count array 
       3. We then sum up our count array  arr[i]+=arr[i-1] 
       4.Now we make a new array of same size as of our array 
       5 Now we Keep pointer of our array at n-1 and we  go to arr[n-1] index of count array
        and the element in that index is decremented by 1 
       6. Element present at arr[n-1] is inserted in elem-- postion in new array  */
       
       #include<iostream>
       using namespace std;
       
       void CountSort(int arr[],int n){
           int k=arr[0];
           //Finding size of count array 
           for(int i=0;i<n;i++){
               k=max(k,arr[i]);
           }
           int countarr[10]={0};
           // Counting frequency and storing in count array
           for(int i=0;i<n;i++){
               countarr[arr[i]]++;
           }
           // doing Consecutive sum in count array starting from i=1
           for(int i=1;i<=k;i++){
               countarr[i]+=countarr[i-1];
           }
           // Point 4 of Algo
           int output[n];
           for(int i=n-1;i>=0;i--){
               output[--countarr[arr[i]]]=arr[i];
           }
           // Copying output array to original array 
           for(int i=0;i<n;i++){
               arr[i]=output[i];
           }
       }
       int main()
       {
           int n;
        cout<<"Enter Size"<<endl;
        cin>>n;
        int arr[n];
        cout<<"Enter Array"<<endl;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        CountSort(arr,n);
        cout<<"Sorted Array:"<<endl;
       for(int i=0;i<n;i++){
           cout<<arr[i]<<" ";
       }
      return 0;
       }