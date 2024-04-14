#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    float x;
    float y;
}POINT;

POINT MakePOINT(float x, float y){
    POINT P;
    P.x = x;
    P.y = y;
    return P;
}

void BacaPOINT(POINT *P){
    float x,y;
    scanf("%f %f", &x, &y);

    *P = MakePOINT(x, y);
}

void TulisPOINT(POINT P){
    printf("%f, %f\n", P.x, P.y);
}

int main(){
    POINT p;
    printf("Masukkan nilai x dan y");
    BacaPOINT(&p);
    printf("HASIL : \n");
    TulisPOINT(p);
    return 0;
}