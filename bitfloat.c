#include <stdbool.h>
#include <stdio.h>
#include <assert.h>

// Return the bit value (0 or 1) at position pos of unsigned int n
// Note that the least significant bit position is 0. 
int get_bit_at_pos(unsigned int n, int pos)
{
  // TODO: Your code here.
  return (n >> pos) & 1;
}

// Flip the bit value (1->0 or 0->1) at position pos of unsigned int n,
// while leaving other bits unchanged.
// Return the changed integer.
// Note that the least significant bit position is 0.
//
// Example: flip_bit_at_pos(0b0100, 2) should return 0b0000 (i.e., 0)
//          flip_bit_at_pos(0b0000, 2) should return 0b0100 (i.e., 4)
int flip_bit_at_pos(unsigned int n, int pos)
{
  // TODO: Your code here.
  return n ^ (1 << pos);
}

// Return the most significant byte of unsigned int n
char get_most_significant_byte(unsigned int n)
{
  // TODO: Your code here.
  return (n >> 24) & 0xFF;
}

// Return true if n1+n2 causes signed integer overflow, return false otherwise.
//
// Signed overflow occurs when:
// - Two positive numbers sum to a negative result, OR
// - Two negative numbers sum to a positive result
//
// Note: You should detect overflow by examining the signs of the operands
// and the result, NOT by comparing against INT_MAX/INT_MIN (which would
// defeat the purpose of this exercise).
bool sum_overflowed(int n1, int n2)
{
  // TODO: Your code here.
  int sum = n1 + n2;
  if (n1 > 0 && n2 > 0 && sum <= 0) return true;
  if (n1 < 0 && n2 < 0 && sum >= 0) return true;
  return false;
}

// Extract the 8-bit exponent field of a single-precision (32-bit) IEEE 754
// floating point number and return it as an unsigned byte.
//
// IEEE 754 single-precision format (32 bits total):
//   - Bit 31:      Sign bit (1 bit)
//   - Bits 30-23:  Exponent field (8 bits) <-- extract this
//   - Bits 22-0:   Mantissa/fraction (23 bits)
//
// Hint: You'll need to reinterpret the float's bits as an unsigned int,
// then use bit shifting and masking to extract bits 23-30.
unsigned char get_exponent_field(float f) 
{
	//TODO: Your code here.
	unsigned int bits = *(unsigned int *)&f;
	return (bits >> 23) & 0xFF;
}

//Return the precision of floating point number f
//Precision is the difference f'-f such that f' is the 
//smallest *representable* floating point number larger than f  
float get_precision(float f)
{
  //TODO: Your code here
  unsigned int bits = *(unsigned int *)&f;
  bits++;
  float next = *(float *)&bits;
  return next -f;
}
