#include <stdio.h>

int main() {
  int x = 10;
  int *ptr = &x; // ptr now points to the memory address of x

  *ptr = 20; // The value at the memory address pointed to by ptr (which is x) is changed

  printf("%d\n", x); // Output: 20, demonstrating the change

  return 0;
}
//This is corrected code which correctly uses pointers to modify the values of the variable x