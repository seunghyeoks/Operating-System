#include <stdio.h>

int main() {
    int array[5][5] = {
	  {99, 22, 73 ,46, 12}, 
	  {14, 85, 86, 58, 61},
	  {95,  3, 78, 79, 49},
	  {45, 96, 47, 81, 83},
	  {82,  8, 12, 36, 27}
    };

    int m = 0;
    int n = 0;
    int k = 0;

    // b 17 -> p m = 1 -> p n = 4  to solve
    while(*(*(array + m) + n) != 61) {
	    /* 
	      put your codes.
	    */
    }
    printf("You just passed Path 1\n");

    // b 25 -> p k = 13  to solve
    while(*(*array + k) != 79) {
      /* 
        put your codes.
      */
    }
    printf("Success!\n");
	
    return 0;
}

