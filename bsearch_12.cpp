/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

using namespace std;
int findmin(int a[],int n){
    int l=0,h=n-1,mid;
    if(n==1)
    return a[0];
    else if(n==2){
        if(a[l]>a[h])
        return a[h];
        else
        return a[l];
    }
    else{
        while(l<h){
            mid=(l+h)/2;
            if(a[mid]==a[h])
            h--;
            if(a[mid]>a[h])
            l=mid+1;
            else
            h=mid;
        }
        
    }
    return a[h];
}
int main()
{
    int a[]={7,8,9,11,12,18,5};
    int size=sizeof(a)/sizeof(a[0]);
    int min=findmin(a,size);
    cout<<"min element="<<min;
    return 0;
}
