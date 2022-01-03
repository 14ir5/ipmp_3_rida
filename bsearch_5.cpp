/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<bits/stdc++.h>
using namespace std;

void unsortedarr(int a[],int n){
    int s=0,e=e-1,min,max,i;
    for(s=0;s<n;s++){
        if(a[s+1]<a[s])
        break;
    }
    if(s==n-1)
    cout<<"array is sorted"<<endl;
    else
    {
        for(e=n-1; e > 0; e--)
        {
            if(a[e]<a[e-1])
            break;
        }
        max = a[s]; min = a[s];
        for(i = s + 1; i <= e; i++)
        {
            if(a[i] > max)
            max = a[i];
            if(a[i] < min)
            min = a[i];
        }
        for( i = 0; i < s; i++)
        {
            if(a[i] > min)
            {
                s = i;
                break;
            }    
        }
 

        for( i = n -1; i >= e+1; i--)
        {
            if(a[i] < max)
            {
                e = i;
                break;
            }
        }
        cout<<"unsorted array lies in between indices "<<s<<" & "<<e<<endl;
        
    }
    
}



int main()
{
	int arr[] = {10, 12, 20, 30, 25,
				40, 32, 31, 35, 50, 60};
	int arr_size = sizeof(arr)/sizeof(arr[0]);
	unsortedarr(arr, arr_size);

	return 0;
}


