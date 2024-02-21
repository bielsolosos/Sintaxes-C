#include <stdio.h>

    struct triangulo
    {
        double X;
        double Y;
        double Z;
    };
    
    double Area(double X, double Y, double Z){
        return (X+Y)*Z/2;
    }

    double Perimetro(double X, double Y, double Z){
        return X + Y + Z;
    }

int main(){
    struct triangulo triang;

    scanf("%lf %lf %lf", &triang.X , &triang.Y , &triang.Z);
    //Essa sacada de usar o ponteiro de memória foi elite tá?


    if(((triang.Y + triang.Z) > triang.X) && ((triang.X + triang.Z) > triang.Y) && ((triang.Y + triang.Z) > triang.X) ){
        printf("Perimetro = %0.1lf\n", Perimetro(triang.X,triang.Y,triang.Z));
    }else{
        printf("Area = %0.1lf\n", Area(triang.X,triang.Y,triang.Z));
    }
    return 0;
}