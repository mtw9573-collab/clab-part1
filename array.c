#include <stdio.h>
#include <assert.h>

#include "ptr.h"

// Return the sum of all elements in the given array.  The array
// "arr" has "n" elements.  We must explicitly pass in the array size
// because C array does not contain size information.
//
// Here, we use pointer "arr", which points to the first element of array, 
// to represent the array.  One can also write the function's signature as
// int array_sum(int array[], int n)
int array_sum(int *arr, int n)
{
  // TODO: Your code here.
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }
  return sum;
}

// Copy the first n elements of array "src" into array "dst".
// We assume caller has already allocated an array 
// of at least n elements as "dst".
void array_cpy(int *dst, int *src, int n)
{
  // TODO: Your code here.
  for (int i = 0; i < n; i++) {
    dst[i] = src[i];
  }
}

// bubble_sort implements the bubble sort algorithm.
// https://en.wikipedia.org/wiki/Bubble_sort
// It is given an integer array "arr" of "n" elements. 
// Upon return, the integer array should contain the sorted numbers
// in increasing order. 
// You should use swap_int function you've already implemented in ptr.c 
// when implementing bubble_sort (that's why we included ptr.h here)
void bubble_sort(int *arr, int n)
{
  // TODO: Your code here.
  for (int i = 0; i < n-1; i++) {
    for (int j = 0; j < n-1-i; j++) {
      if (arr[j] > arr[j+1]) {
        swap_int(&arr[j], &arr[j+1]);
      }
    }
  }
}

// arr is a 4-byte array containing an integer stored in big-endian format,
// i.e. arr[0] contains the most significant byte and arr[3] contains the
// least significant byte.
//
// This function interprets the big-endian byte sequence and returns the
// corresponding integer value. On a little-endian machine (like x86), this
// effectively "converts" from big-endian to the native format.
//
// Example: if arr = {0x00, 0x01, 0x02, 0x03}, the function should return
// 0x00010203 (decimal 66051).
//
// Hint: Use bit shifting and OR operations to combine the bytes.
int big_to_little_endian(char *arr)
{
  // TODO: Your code here.
  return ((unsigned char)arr[0] << 24) | ((unsigned char)arr[1] << 16) | ((unsigned char)arr[2] << 8) | ((unsigned char)arr[3]);
}

