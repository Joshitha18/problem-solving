#include <iostream>
#include <unordered_map>
#include<algorithm>
#include <vector>
#include<iterator>
#include <cmath>
using namespace std;

// function to find and print duplicates in O(n) tine and extra space and range of numbers is nor specified
void duplicates(int a[], int n) 
{ 
    // unordered_map to store frequencies 
    unordered_map<int, int> freq; 
    for (int i=0; i<n; i++) 
        freq[a[i]]++; 
  

    unordered_map<int, int>:: iterator iter; 
    for (iter=freq.begin(); iter!=freq.end(); iter++) 
    { 
        // if frequency is more than 1 
        // print the element 
        if (iter->second > 1) 
        { 
            cout << iter->first << " "; 
        } 
    } 

} 
  

int main() 
{ 
    int a[] = {12, 11, 40, 12, 5, 1000000,6, 5, 12,1000000, 11}; 
    int n = sizeof(a)/sizeof(a[0]);
    duplicates(a, n); 
    return 0; 
} 
