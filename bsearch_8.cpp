/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int max(int a[],int l,int h){
      if (l == h)
        return a[l];
     
    if ((h==l+1) && a[l] >= a[h])
        return a[l];
        
    if ((h==l+1) && a[l]<a[h])
        return a[h];
    
    int mid=(l+h)/2;
    
    if(a[mid+1]<a[mid]&&a[mid-1]<a[mid])
    return mid;
    
    if(a[mid]>a[mid+1]&&a[mid]<a[mid-1])
    return max(a,l,mid-1);
   
    return max(a,mid+1,h);
    
    
}
int main()
{
    int arr[] = {1, 3, 50, 10, 9, 7, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "The maximum element is " << max(arr, 0, n-1);
    return 0;
}
