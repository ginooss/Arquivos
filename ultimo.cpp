#include<iostream> 
using namespace std; 

void inserir(int arr[], int l, int m, int c) 
{ 
    int n1 = m - l + 1; 
    int n2 = c - m; 
    
    int L[n1], C[n2]; 
   
    for(int i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for(int j = 0; j < n2; j++) 
        C[j] = arr[m + 1 + j]; 
  
      
    int i = 0;  

    int j = 0;  
      

    int k = l; 
      
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= C[j])  
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else 
        { 
            arr[k] = C[j]; 
            j++; 
        } 
        k++; 
    } 
  
    while (i < n1)  
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    while (j < n2) 
    { 
        arr[k] = C[j]; 
        j++; 
        k++; 
    } 
} 
  
 
void mergeSort(int arr[], int l, int c) 
{ 
    if (l < r) 
    { 

        int m = l + (c - l) / 2; 

        mergeSort(arr, l, m); 
        mergeSort(arr, m + 1, r); 
  
        merge(arr, l, m, c); 
    } 
} 
  

void printArray(int A[], int size) 
{ 
    for(int i = 0; i < size; i++) 
        cout << A[i] << " "; 
} 
   
int main() 
{ 
    int arr[] = { 12, 11, 13, 5, 6, 7 }; 
    int tamarray = sizeof(arr) / sizeof(arr[0]); 
  
    cout << "Array dado é \n"; 
    printArray(arr, tamarray); 
  
    mergeSort(arr, 0, tamarray - 1); 
  
    cout << "\nArray randômico \n"; 
    printArray(arr, tamarray); 
    return 0; 
} 
