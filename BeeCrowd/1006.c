#include <stdio.h>

int main(){
    double x , y , z, media;
    scanf("%lf", &x);
    scanf("%lf", &y);
    scanf("%lf", &z);

    media = (((x*2.0)+(y*3.0)+(z*5.0))/(5.0+2.0+3.0));

    printf("MEDIA = %.1lf\n", media);


    return 0;
}
