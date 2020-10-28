#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h> //max min defined ache
using namespace std; 
  
int median(int[], int);


int gmed(int ar1[], int ar2[], int n) 
{ 
    if (n <= 0) 
        return -1; 
    if (n == 1) 
        return (ar1[0] + ar2[0])/2; 
    if (n == 2) 
        return (max(ar1[0], ar2[0]) + min(ar1[1], ar2[1])) / 2; 
  
    int m1 = median(ar1, n); // median of the first array 
    int m2 = median(ar2, n); //median of the second array 
  

    if (m1 == m2) 
        return m1;     //or m2
    
	if (m1 < m2)      // if m1 < m2
    { 
        if (n % 2 == 0) 
            return gmed(ar1 + n/2 - 1, ar2, n - n/2 +1); 
        return gmed(ar1 + n/2, ar2, n - n/2); 
    } 
  
    if (n % 2 == 0)   /* if m1 > m2 */
        return gmed(ar2 + n/2 - 1, ar1, n - n/2 + 1); 
    return gmed(ar2 + n/2, ar1, n - n/2); 
} 

int median(int ar[], int n) 
{ 
    if (n%2 == 0) 
        return (ar[n/2] + ar[n/2-1])/2; 
    else
        return ar[n/2]; 
} 
  
int main() 
{ 
    int ar1[] = {2, 5, 29, 31, 75}; 
    int ar2[] = {9, 12, 25, 36, 45}; 
    
    int loop;
    printf("The first array: ");
    for(loop = 0; loop <5; loop++)
      {
	  printf("%d ", ar1[loop]);
      }
    printf("\n The second Array: "); 
    
    for(loop = 0; loop <5; loop++)
      printf("%d ", ar2[loop]);
      
    int n1 = sizeof(ar1)/sizeof(ar1[0]); 
    int n2 = sizeof(ar2)/sizeof(ar2[0]); 
    if (n1 == n2) 
        printf("\n THE MEDIAN IS : %d", gmed(ar1, ar2, n1)); 
    else
        printf("Sorry!!! ERROR"); 
    return 0; 
} 
