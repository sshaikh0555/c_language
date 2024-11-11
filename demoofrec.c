#include<stdio.h>

int main(){
    float rec_height;         /* width of the rectangle */
    float rec_width;        /* height of the rectangle */
    float rec_perimeter;     /* perimeter (to be computed) */

    printf("Input the height of the Rectangle: ");
    scanf("%f", &rec_height);

    printf("Input the width of the Rectangle: ");
    scanf("%f", &rec_width);

    rec_perimeter = 2.0 * (rec_height + rec_width); /* perimeter = 2 * ( width + height )*/

    printf("Perimeter of the Rectangle is: %f\n", rec_perimeter);
    return 0;
}
