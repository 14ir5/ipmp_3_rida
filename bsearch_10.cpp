/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void moveToEnd(int a[],int size){
    int j=size-1;
    for(int i=size-1;i>=0;i--){
        if(a[i]!=-1){
            a[j]=a[i];
            j--;
        }
    }
}
void merge(int mnarr[],int narr[],int m,int n){
    int i=n;
    int j=0;
    int k=0;
   while(k<m+n){
       if((mnarr[i]<narr[j]&&i<m+n)||(j==n)){
            mnarr[k]=mnarr[i];
             i++;
             k++;
       }
       else
       {
            mnarr[k]=narr[j];
             j++;
             k++;
       }
     
   }
}
int main()
{
   /* Initialize arrays */
   int mnarr[] = {2, 8, -1, -1, -1, 13, -1, 15, 20};
   int narr[] = {5, 7, 9, 25};
    
   int n = sizeof(narr) / sizeof(narr[0]);
   int m= sizeof(mnarr) / sizeof(mnarr[0]) - n;
 
   moveToEnd(mnarr, m+ n);
   merge(mnarr, narr, m, n);
  for(int i=0;i<m+n;i++){
      cout<<mnarr[i]<<" ";
  }
  cout<<endl;
  int median;
  if((m+n)%2!=0)
  median=mnarr[(m+n-1)/2];
  else
  median=(mnarr[(m+n)/2-1]+mnarr[((m+n)/2)])/2;
  cout<<"median="<<median;
   return 0;
}
