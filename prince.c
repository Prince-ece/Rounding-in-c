#include <stdio.h>
int main() {
    float a;
    // Taking input from User
    printf("Enter the number to roundoff: ");
    scanf("%f", &a);
    
    int b = (int)a; //seperating integeral part from input
    // rounding logic
    if (a-b >= 0.5){
      printf("%d", b+1);
    }
    else {
        printf("%d", b);
    }
   return 0;

}

