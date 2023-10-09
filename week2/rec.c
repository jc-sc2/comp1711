#include <stdio.h>

int main(){

    float len;
    float width;
    float area;

    printf("Enter length: ");
    scanf("%f", &len);
    printf("Enter width: ");
    scanf("%f", &width);
    
    area = len*width;
    printf("Area of your rec is %g\n", area);
    return 0;
}