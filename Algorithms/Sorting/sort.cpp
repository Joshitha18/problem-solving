#include <iostream>
#include <vector>
#include <fstream>
using namespace std;


void merge(vector<int>& v, int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 = r - m; 
  
    int L[n1], R[n2]; 
  
    /* Copy data to arrays L[] and R[] */
    for (i = 0; i < n1; i++) 
        L[i] = v[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = v[m + 1 + j]; 
  
    /* Merge the arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
    while (i < n1 && j < n2) { 
        if (L[i] <= R[j]) { 
            v[k] = L[i]; 
            i++; 
        } 
        else { 
            v[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1) { 
        v[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2) { 
        v[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  


void mergeSort(vector<int>& v, int l, int r) 
{ 
    if (l < r) { 
        int m = l + (r - l) / 2; 
  
        // Sort first and second halves 
        mergeSort(v, l, m); 
        mergeSort(v, m + 1, r); 
  
        merge(v, l, m, r); 
    } 
} 


int main(){

vector<int>v;

ifstream myfile;
    myfile.open("sort.in");

	int a,size;
	myfile>>size;
	
	while(myfile>>a){
	v.push_back(a);

	}

    
    mergeSort(v,0,size-1);
    
    ofstream outFile("my_file.txt");
    // the important part
    for (const auto &e : v) outFile << e << " ";

return 0;
}


