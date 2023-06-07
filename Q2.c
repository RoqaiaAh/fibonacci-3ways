#include <stdio.h>
#define MAX_N 100
// Recursive Function
int FibRecursive(int n) {//0.025 s
  if (n <= 1)
        return n;
    return FibRecursive(n - 1) + FibRecursive(n - 2);
}

// Bottom-Up Approach (Tabulation)
int FibTabulation(int n) {//0.044s
   int Fi [n+2];
       Fi[0]=0;
       Fi[1]=1;
       for (int i=2; i<=n; i++)
       {
           Fi[i]=Fi[i-1]+Fi[i-2];
       }
       return Fi[n];
}
//Dynamic Programming (Memoization)
int memo[MAX_N];
int recurrenceMemoization(int n) //0.040
{   if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;

    if (memo[n] != -1) return memo[n];

    memo[n] = recurrenceMemoization(n - 1) + recurrenceMemoization(n -2);
    return memo[n];

}


int main() {
    int n = 9;
     printf("Result (Tabulation): %d\n", FibTabulation(n));
    int resultRecursive = FibRecursive(n);
     printf("Result (Recursive): %d\n", resultRecursive);

       // Initialize memo array with -1
   for (int i = 0; i < MAX_N; i++) {
        memo[i] = -1;
    }
     printf("Result (recurrenceMemoization): %d\n", recurrenceMemoization(n));

    return 0;
}
