#include <stdio.h>
#include <math.h>

// void func(int , int);
void op(int, int, float);

int main(){
    // int i = 0;
    // int num = 10;
    // func(i, num);

    int a = 3;
    int b = 5;
    float ttl = 0.0;
    op(a, b, ttl);

}

// void func(int i, int num){
//     while (i < num){
//         if (i < 5){
//             printf("First set: %d\n", i);
//         }
//         else {
//             printf("Second set: %d\n", i);
//         }
//      i++;      
//     }
// }

void op(int a, int b, float ttl){
    double result;
    for (int i = 1; i < 10; i++)
    {
        ttl = a + i;
        printf("total add: %f\n", ttl);
        ttl = b - i;
        printf("total min: %f\n", ttl);
        ttl = ttl * b;
        printf("total mul: %f\n", ttl);
        ttl = a / ttl;
        printf("total div: %f\n", ttl);
        ttl = a % i;
        printf("total mod: %f\n", ttl);
        b--;
        result = pow(i, 2);
        ttl = b + result;
        printf("total exp: %f", ttl);
    }
}