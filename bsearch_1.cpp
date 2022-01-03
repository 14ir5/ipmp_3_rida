/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int Bsearch(int A[], int l, int r, int key);
int main()
{
    int data;
    int a[]={2,3,4,5,6,12,20,21};
    cout<<"enter number to search"<<endl;
    cin>>data;
     int index=Bsearch(a,0,7,data);
     if(index==-1)
     cout<<"element not found"<<endl;
     else
     cout<<"element found at position index:"<<index<<endl;
    return 0;
}

int Bsearch(int A[], int l, int r, int key)
{
	int m;

	while( r - l > 1 )
	{
		m = l + (r-l)/2;

		if( A[m] <= key )
			l = m;
		else
			r = m;
	}

	if( A[l] == key )
		return l;
	if( A[r] == key )
		return r;
	else
		return -1;
}
