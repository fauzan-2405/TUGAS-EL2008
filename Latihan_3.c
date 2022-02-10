#include <stdio.h>
#include <stdlib.h>

// nim
// nama
// persentase

struct mahasiswa {
    int nim;
    char nama[50];
    float persentase;
};

int main () {
    int i, size;
    struct mahasiswa kelas[size];
    printf("Masukkan banyaknya data : ");
    scanf("%d", &size);
    printf("==============================\n");

    for (i = 0; i < size; ++i) {
        printf("Nim Mahasiswa   : ");
        scanf("%d", &kelas[i].nim);
        printf("Nama Mahasiswa  : ");
        scanf("%s", &kelas[i].nama);
        printf("Persentase Kehadiran (dalam koma) : ");
        scanf("%0.2f", &kelas[i].persentase);
        printf("-------------------------------------------\n");
    }

    printf("Mahasiswa yang memiliki persentase kehadiran kurang dari 80 persen adalah :");

    for (i = 0; i < size; ++i) {
        if (kelas[i].persentase < 0.8) {
            printf("Nama : %s", &kelas[i].nama);
            printf("NIM  : %d", &kelas[i].nim);
        }
    }
    return (0);
};
