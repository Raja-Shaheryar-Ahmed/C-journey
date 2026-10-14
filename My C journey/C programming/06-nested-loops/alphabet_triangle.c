alphabet_triangle.#include <stdio.h>

int main() {
    int n;
    printf("Enter the value for n: ");
    scanf("%d", &n);
    
    // Outer loop controls the rows (1 up to n)
    for(int i = 1; i <= n; i++){
        
        int a = 65; // Reset 'a' to 65 ('A') at the start of each row
        
        // Inner loop runs 'i' times, printing characters and incrementing 'a'
        for(int j = 1; j <= i; j++){
            printf("%c ", a); 
            a++;              // Move to the next letter in the alphabet
        }
        
        printf("\n"); // Move to the next line after completing the row
    }
    
    return 0; 
}