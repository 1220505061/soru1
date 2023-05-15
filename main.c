#include <stdio.h>
#include <locale.h>

int linearSearch(int arr[], int n, int x) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i; // Eleman bulundu�unda dizinin indisini d�nd�r
        }
    }
    return -1; // Eleman bulunamad�ysa -1 d�nd�r
}

int main() {
	setlocale(LC_ALL, "turkish");
    int n, i, x;

    printf("Dizinin boyutunu girin: ");
    scanf("%d", &n);

    int arr[n]; // Kullan�c�dan al�nan boyuta g�re dizi olu�tur

    printf("Dizinin elemanlar�n� girin:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Aranacak eleman� girin: ");
    scanf("%d", &x);

    int result = linearSearch(arr, n, x);

    if (result == -1) {
        printf("Eleman dizide bulunamad�.\n");
    } else {
        printf("Eleman dizinin %d. indisinde bulundu.\n", result);
    }

    return 0;
}

