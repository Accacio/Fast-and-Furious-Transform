
#include "stdio.h"
#include "math.h"

#define PI 3.1415926535
#define length(A) sizeof((A))/(sizeof(A[0]))

void
print_sequencef(float * seq,int length)
{
    printf("(");
    for (int i = 0; i < length-1; i++) {
        printf("%f, ",seq[i]);
    }
    printf("%f",seq[length-1]);
    printf(")");
}

void
order_odd_even(float * seq, float* out,int length)
{
    printf("Odd terms:\n");
    for (int i=0,j = 0; i < length; i+=2) {
        out[j]=seq[i];
        j++;
    }
    printf("Even terms:\n");
    for (int i=1,j = 0; i < length; i+=2) {
        out[length/2+j]=seq[i];
        j++;
    }
}

int main(int argc, char *argv[]) {
    float seq[] = {1,2,3,4,5,6,7,8};
    float temp[length(seq)] = {0};

    printf("A sequence of size 2^n:\n");
    print_sequencef(seq,length(seq));
    printf("\n");
    order_odd_even(seq,temp,length(seq));

    /* order_odd_even(temp,temp,length(seq)/2); */
    print_sequencef(temp,length(temp));
    printf("\n");

    printf("\n");
    return 0;
}
