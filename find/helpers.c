/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
 
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    
    int low = 0,high = n+1;
    int mid = (low + high) / 2;
    while(mid != low)
    {
         if(value < values[mid])
        {
             high = mid;
            mid = (low + mid) / 2;
           
            
        }
        else if (value > values[mid])
        {
             low = mid;
            mid = (high + mid) / 2;
           
        }
       
        
    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    //selection sort
    int sml = 0;
    int count = 0;
    while(count < n + 1)
    {
    for(int i = count; i <= n; i++)
    {
       
    }
    
       //swap( &values[count], &values[sml]);
       
    
    }
    
    
    
    return;
}
 
