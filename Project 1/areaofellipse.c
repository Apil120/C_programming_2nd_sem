#include <stdio.h>

#define PI 3.14159
int main(){
    float minor = 4;
    float major = 6;
    printf("Area of ellipse with minor axis %f and major axis %f is %f", minor, major, PI * minor * major);
    return 0;
}