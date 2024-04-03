#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int	    i = 0, num = 0;
    double  j = 0;
    char    *str = (char*) calloc(20, sizeof(char));    // solve segmentation fault

    printf("Enter the number: ");
    scanf("%d", &num);

    for(i = 0; i < num; i++){
	j = i/3 + i;
	printf("j = %lf \n", j);
    }

    strcpy(str, "Success!");
    printf("%s\n", str);

    free(str);
    
    return 0;
}

