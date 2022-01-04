/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

using namespace std;
int Bsearch(int A[], int l, int r);
int Bsearch(int a[],int l,int h)
{ 
    if(h>l){
        int mid=(h+l)/2;
        if(a[mid]==mid)
        return mid;
        int res=-1;
        if(mid+1<=a[h])
        res=Bsearch(a,l,mid-1);
        if(res!=-1)
        return res;
        
         if(mid-1>=a[l])
        return Bsearch(a,mid+1,h);
    }
    return -1;
}
int main()
{
    int data;
    int a[]={2,2,2,3,12,20,21};
  
     int index=Bsearch(a,0,7);
     if(index==-1)
     cout<<"element not found"<<endl;
     else
     cout<<"element found(index==arr[index]) at position index:"<<index<<endl;
    return 0;
}
