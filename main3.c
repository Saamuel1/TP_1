#include <stdio.h>
#include <time.h>

int main() {
    /*
    int k;
    int L[5] = {1, 2, 4, -5, 5};


    printf("k = ");
    scanf("%d", &k);

    for (int i = 0; i < 5; i++) {
        if (k == L[i]) 
        {
            printf("%d ", i);
        } 
    }
    */
    clock_t debut, fin;
    double temps;

    int n, k2;
    
    printf("Nombre d'elements de la liste : ");
    scanf("%d", &n);

    int L2[n];

    for (int i = 0; i < n; i++) {
        L2[i] = 2 * i; // Changed to 2 * i to make the array sorted
    }    

    /*for (int i = 0; i < n; i++) {
        printf("%d ", L2[i]);
    }   
    */
    
    printf("\nEnter the element to search: ");
    scanf("%d", &k2);

    int low = 0;
    int high = n - 1;

    debut = clock();

    while (low <= high) {
        int mid = low + (high - low) / 2; // Corrected calculation of mid

        if (L2[mid] == k2) {
            printf("\n%d found at index %d", k2, mid);
            fin = clock();
            temps = (double)(fin - debut) / CLOCKS_PER_SEC;
            printf("\nTime taken: %f seconds", temps); // Corrected the print statement
            return 0;
        } else if (k2 < L2[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    printf("\n%d not found in the list.", k2); // Moved this print statement outside of the while loop
    return 0;
}

