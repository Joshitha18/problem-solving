int binarySearch(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
  
        // If the element is present at the middle 

        if (arr[mid] == x) 
            return mid; 
  
        // If element is smaller than mid, then search in left subarray 
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
  
        // Else search in right subarray 
        return binarySearch(arr, mid + 1, r, x); 
    } 
 
    return -1; 
} 
