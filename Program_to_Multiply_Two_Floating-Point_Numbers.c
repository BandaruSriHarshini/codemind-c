#include <stdio.h>
int main() {
    double a, b, product;
    scanf("%lf %lf", &a, &b);  
 
    // Calculating product
    product = a * b;

    // %.2lf displays number up to 2 decimal point
    printf("%.2lf", product);
    
    return 0;
}
