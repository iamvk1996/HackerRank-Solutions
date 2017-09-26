#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include<stdlib.h>
#include<stdio.h>
 
// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
 
    /* create temp arrays */
    int L[n1], R[n2];
 
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
 
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] >= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;
 
        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
 
        merge(arr, l, m, r);
    }
}
int main(){
   long int n,d,swap; 
    long int m; 
    long int i,j,c_i;
 
    scanf("%ld %ld",&n,&m);
    int dist[n];
  long int *c =(long int*) malloc(sizeof(long int) * m);
    for(c_i = 0; c_i < m; c_i++)
       scanf("%ld",&c[c_i]);
    
        for(i=0;i<n;i++)
            {
            for(j=0;j<m;j++)
                {
                if(c[j]==i)
                    {
                    dist[i]=0;
                    break;
                }
                else
                    {
                    for(j=0;j<m;j++)
                        {
                         d=abs(i-c[j]);
                        if(d<dist[i] || j==0)
                        dist[i]=d;
                    }
                }
            }
            }
    /*for (i = 0 ; i < ( n - 1 ); i++)
  {
    for (j = 0 ; j < n - i - 1; j++)
    {
      if (dist[j] < dist[j+1]) /* For decreasing order use < 
      {
        swap       = dist[j];
        dist[j]   = dist[j+1];
        dist[j+1] = swap;
      }
    }
  }*/
     mergeSort(dist,0,n-1); 
    printf("%d",dist[0]);
    return 0;
}
