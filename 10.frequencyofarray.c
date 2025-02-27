#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 3, 2}; 
    int freq[5];
    int count;

    
    for (int i = 0; i < 5; i++) {
        freq[i] = -1;
    }

    
    for (int i = 0; i < 5; i++) {
        count = 1;
        if (freq[i] == -1) {  
            for (int j = i + 1; j < 5; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    freq[j] = 0;
                }
            }
            freq[i] = count; 
        }
    }

    
    for (int i = 0; i < 5; i++) {
        if (freq[i] != 0) {
            printf("%d appears %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}
