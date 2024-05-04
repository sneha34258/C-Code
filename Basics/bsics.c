#include<stdio.h>
#include<math.h>
int main(){
    // explicit conversion
     int a = (int) 1.999999;
    printf("%d \n ",a);
    //operator precedence
     int a = 4 + 9 * 10;
     printf("%d\n",a);

    // associativity
    int a = 4* 3 / 6 * 2;
    printf("%d\n",a);

    return 0;
}