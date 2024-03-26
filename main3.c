#include <stdio.h>

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

    int n, k2;
    printf("Nombre d'elements de la liste : ");
    scanf("%d", &n);

    int L2[n];

    for (int i = 0; i < n; i++) {
        L2[i] = 2*i;
    }    

    for (int i = 0; i < n; i++) {
        printf("%d ", L2[i]);
    }   

    printf("\nEnter the element to search: ");
    scanf("%d", &k2);

    int low = 0;
    int high = n - 1;
    int found = 0;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (L2[mid] == k2) {
            printf("\n%d found at index %d", k2, mid);
            found = 1;
            break;
        } else if (k2 < L2[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }


    return 0;
}
