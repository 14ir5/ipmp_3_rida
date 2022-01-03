/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;


int ceilsearch(int a[],int l,int h,int key){
    if(key<a[l])
    return l;
    if(key>a[h])
    return -1;
    int mid=(l+h)/2;
    if(a[mid]==key)
    return mid;
    if(key>a[mid]){
        if(key<a[mid+1])
        return mid+1;
        else
        return ceilsearch(a,mid+1,h,key);
    }
    else{
        if(key>a[mid-1])
        return mid;
        else 
        return ceilsearch(a,l,mid-1,key);
    }
    
}

int main()
{
	int arr[] = {1, 2, 8, 10, 10, 12, 19};
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 13;
	int index = ceilsearch(arr, 0, n-1, x);
	if(index == -1)
		cout << "Ceiling of " << x
			<< " doesn't exist in array ";
	else
		cout << "ceiling of " << x
			<< " is " << arr[index];
	
	return 0;
}



