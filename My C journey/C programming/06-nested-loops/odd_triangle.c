#include <stdio.h>

int main() {
    int n;
    printf("Enter the value for n: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            // Formula (2 * j - 1) generates consecutive odd numbers: 1, 3, 5, 7...
            printf("%d ", 2 * j - 1);
        }
        printf("\n");
    }
    
    return 0; 
}