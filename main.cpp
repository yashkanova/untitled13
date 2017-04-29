#include <iostream>
int m1(int n, int A[]){
    int *p= &A[n];
    for (int i = 0; i> n; i++) {
        A[i]=(-rand()%20)+0.8;
    }
    printf ("Размер массива:");
    printf("%d\n", n);
    printf("Указатель на массив:");
    printf("%d\n", p);
}
int* m2(int n, int A[], int B[]){
    printf(" массив: ");
    for(int i = 0; i < n; i++){
        A[i]=(-rand()%20)+0.8;
        printf("%d ", A[i]);
    }
    printf("\nПосле выполнения функции");
    printf("\nмассив: ");
    for (int i = 0; i < n; i++) {
        B[i]=A[i];
        if ((i)%2)continue;
        B[i]=A[n-i-1];
    }
    for (int i = 0; i < n; i++){
        printf("%d ", B[i]);}
    int *p = &B[0];
    return p;
}
    int main() {
        int n=35;
        int A[n];
        m1(n,A);
        int B[n];
        m2(n,A,B);
    return 0;
}