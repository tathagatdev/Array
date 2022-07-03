// DNF Sort (  Dutch Nationhal Flag)--Sorting of 0-1-2
/*        Algorithm 
1.Take three pointer over our array - low,mid &high 
2. Keep low and mid pointer at arr[0]  and high at arr[size-1]
3. Move mid pointer 
   when encounter 0 swap arr[mid] and arr[low] then low++ mid++ 
   When encounter 1 mid++ 
   When encounter 2 swap arr[high] and arr[mid]  aand high --  */
   
   #include<iostream>
   using namespace std; 
   void swap(int &num1,int &num2)
   {
       int temp;
       temp=num1;
       num1=num2;
       num2=temp;
   }
    void  dnfSort(int arr[],int n){
       int low=0;
       int mid=0;
       int high =n-1;
       while(mid<=high){
           if(arr[mid]==0){
               swap(arr[low],arr[mid]);
               low++;
               mid++;
           }
           else if(arr[mid]==1)
           {
               mid++;
           }
           else{
                  swap(arr[mid],arr[high]);
                  high--;
           }
       }
   }
   int main(){
        int n;
        cout<<"Enter Size"<<endl;
        cin>>n;
        int arr[n];
        cout<<"Enter Array"<<endl;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        dnfSort(arr,n);
        cout<<"Sorted Array:"<<endl;
       for(int i=0;i<n;i++){
           cout<<arr[i]<<" ";
       }
       return 0;
       
   }