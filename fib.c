#include <stdio.h>      
int memo[1000];
int fib(int n) {
    if (n <= 1) return n;
    if (memo[n] != -1) return memo[n];
<<<<<<< HEAD
=======
    printf("Calculating fib for %d\n", n);
>>>>>>> conflict-demo
    return memo[n];

}
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 0; i < 1000; i++) {
        memo[i] = -1;
    }

    printf("fib(%d) = %d\n", n, fib(n));
    return 0;
}
