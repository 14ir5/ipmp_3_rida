/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

using namespace std;
int Bsearch(int a[],int l,int h,int key);
int isMajority(int a[],int n,int key){
    int i=Bsearch(a,0,n-1,key);
    if(i==-1)
    return 0;
    
    if((i+n/2)<=n-1&&a[i+n/2]==key)
    return 1;
    else
    return 0;
    
    
}


int Bsearch(int a[],int l,int h,int key)
{
    if(h>l){
        int mid=(h+l)/2;
        if(a[mid]==key&&(key>a[mid-1])||mid==0)
        return mid;
        if(key<a[mid])
        return Bsearch(a,l,mid-1,key);
        else
        return Bsearch(a,mid+1,h,key);
    }
    return -1;
}

int main()
{
    int x;
	int arr[] = { 1, 2, 3, 3, 3, 3, 10 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout<<"enter num to check majority or not"<<endl;
	cin>>x;
	if (isMajority(arr, n, x))
		cout << x << " appears more than "
            << n / 2 << " times in arr[]"
			<< endl;
	else
		cout << x << " does not appear more than"
			<< n / 2 << " times in arr[]" << endl;

	return 0;
}



