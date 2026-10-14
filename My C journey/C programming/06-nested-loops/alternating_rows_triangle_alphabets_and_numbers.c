#include <stdio.h>

int main() {
    int n;
    printf("Enter the value for n: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++){
        // Check row 'i' instead of 'n' so it changes every row!
        if(i % 2 != 0){
            int b = 1;
            for(int j = 1; j <= i; j++){
                printf("%d ", b);
                b++;
            }
        }
        else {
            int a = 65;
            for(int j = 1; j <= i; j++){
                printf("%c ", a);
                a++;
            }
        }
        printf("\n");
    }
    
    return 0; 
}