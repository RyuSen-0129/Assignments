#include <stdio.h>
int fibonacci(int a,int b,int n){
    if(n>0){
        printf("%d", n);
        fibonacci(b,a+b,n-1);
    }
}
int main()
{
    int i, n, t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    fibonacci(0,1,n);
    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}
