/*
To find the area of the triangle using breath and height
here(scanf();) is a input function
here(printf();) is a output function
*/


#include<stdio.h>

int main() {
    int breath , height ;
    printf("Enter breath of triangle : ");
    scanf("%d",&breath);
    printf("Enter height of triangle : ");
    scanf("%d",&height);
    int a = breath*height ;
    printf("The area of Traingle is : %d \n",a/2);
    return 0;
    
}
