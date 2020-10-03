#include<stdio.h> 

int evenFib(int n) 
{ 
    if (n < 1) 
    return n; 
    if (n == 1)  
    return 2; 
    return ((4 * evenFib(n-1)) +  
             evenFib(n-2));  
} 

int oddFib(int n) 
{ 
    n = (3 * n + 1) / 2; 
    int a = -1, b = 1, c, i; 
    for (i = 1; i <= n; i++) { 
        c = a + b; 
        a = b; 
        b = c; 
    } 
    return c; 
} 
  
int main () 
{ 
    int n;
    scanf("%d",&n);
    int ans;
    ans = evenFib(n);
    printf("nth even:n %d", ans);  
    ans = oddFib(n); 
    printf("\nnth odd: %d", ans);  
    return 0; 
} 