/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/



#include <iostream>
using namespace std;


int floorSearch(int arr[], int low,
				int high, int x)
{
	
	if (low > high)
		return -1;


	if (x >= arr[high])
		return high;


	int mid = (low + high) / 2;

	if (arr[mid] == x)
		return mid;


	if (mid > 0 && arr[mid - 1] <= x
		&& x < arr[mid])
		return mid - 1;

	
	if (x < arr[mid])
		return floorSearch(
			arr, low, mid - 1, x);

	
	return floorSearch(arr, mid + 1, high, x);
}


int main()
{
	int arr[] = { 1, 2, 4, 6, 10, 12, 14 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 7;
	int index = floorSearch(arr, 0, n - 1, x);
	if (index == -1)
		cout<< "Floor of " <<x <<" doesn't exist in array ";
	else
		cout<<"Floor of "<< x <<" is " << arr[index];
	return 0;
}


