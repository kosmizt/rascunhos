#include <iostream>
using namespace std;

int main(){
    int A, B;
    scanf("%i %i", &A, &B);

    if (A<1||A>100||B<1||B>100){
        printf("Error: input out of range\n");
        return 1;
    }

    printf("%i\n", A * B);
    return 0;
}