#include <stdio.h>
int main() {
    float a;
    printf("Enter the number to roundoff: ");
    scanf("%f", &a);
    int b = (int)a;
    if (a-b >= 0.5){
      printf("%d", b+1);
    }
    else {
        printf("%d", b);
    }
   return 0;

}

