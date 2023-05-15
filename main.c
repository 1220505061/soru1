#include <stdio.h>
#include <locale.h>

int linearSearch(int arr[], int n, int x) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i; // Eleman bulunduğunda dizinin indisini döndür
        }
    }
    return -1; // Eleman bulunamadıysa -1 döndür
}

int main() {
	setlocale(LC_ALL, "turkish");
    int n, i, x;

    printf("Dizinin boyutunu girin: ");
    scanf("%d", &n);

    int arr[n]; // Kullanıcıdan alınan boyuta göre dizi oluştur

    printf("Dizinin elemanlarını girin:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Aranacak elemanı girin: ");
    scanf("%d", &x);

    int result = linearSearch(arr, n, x);

    if (result == -1) {
        printf("Eleman dizide bulunamadı.\n");
    } else {
        printf("Eleman dizinin %d. indisinde bulundu.\n", result);
    }

    return 0;
}

