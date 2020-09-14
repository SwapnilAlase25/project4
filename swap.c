
#include <stdio.h> 
  
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
int main(int argc, char** argv) 
{ 
    int x=argv[1], y=argv[2];
    printf("\nBefore Swapping: x = %d, y = %d", x, y); 
    swap(&x, &y); 
    printf("\nAfter Swapping: x = %d, y = %d", x, y); 
    return 0; 
} 
