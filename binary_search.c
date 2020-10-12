//FOR RECURSIVE FUNCTION ONLY
#include <stdio.h> 

// A recursive binary search function. It returns location of x in 
// given array arr[l..r] is present, otherwise -1 
int binarySearch(int arr[], int l, int r, int x) 
{ 
if (l<=r) 
{ 
		int mid = (l+r)/2; 

		// If the element is present at the middle itself 
		if (arr[mid] == x)
		   return mid; 

		// If element is smaller than mid, then it can only be present 
		// in left subarray 
		if (arr[mid] > x)
		   return binarySearch(arr, l, mid-1, x); 

		// Else the element can only be present in right subarray 
		return binarySearch(arr, mid+1, r, x); 
} 

// We reach here when element is not present in array 

} 

int main(void) 
{ 
int arr[] = {2, 3, 4, 10, 40}; 
int n = sizeof(arr)/ sizeof(arr[0]); 
int x = 10; 
int result = binarySearch(arr, 0, n-1, x); 
if(result == -1)
    printf("Element is not present in array");
else
    printf("Element is present at index %d", result); 
return 0; 
}

//FOR ITERATIVE CASE ONLY
/*#include <stdio.h> 

// A iterative binary search function. It returns location of x in 
// given array arr[l..r] if present, otherwise -1 
int binarySearch(int arr[], int l, int r, int x) 
{ 
while (l <= r) 
{ 
	int m = (l+r)/2; 

	// Check if x is present at mid 
	if (arr[m] == x) 
		return m; 

	// If x greater, ignore left half 
	if (arr[m] < x) 
		l = m + 1; 

	// If x is smaller, ignore right half 
	else
		r = m - 1; 
} 

// if we reach here, then element was not present 
return -1; 
} 

int main(void) 
{
int arr[] = {2, 3, 4, 10, 40};
int n=sizeof(arr)/sizeof(arr[0]); 
int x=4;
int result = binarySearch(arr, 0, n-1, x); 
if(result == -1) 
    printf("Element is not present in array");
else 
    printf("Element is present at index %d", result); 
return 0; 
}*/