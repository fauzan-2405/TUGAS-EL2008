// NAMA     : Muhammad Fauzan
// NIM      : 13220009
// TUGAS    : 1
// PROBLEM  : WATER JUG

#include <stdio.h>

int isi_A (int num1) {
    num1 = 3;
    return num1;
}

int isi_B (int num2) {
    num2 = 5;
    return num2;
}

int kosong_A (int num1) {
    num1 = 0;
    return num1;
}

int kosong_B (int num2) {
    num2 = 0;
    return num2;
}

void tuang_A_ke_B (int num1, int num2, int* A, int*B) {
    if (num1 + num2 > 5) {
        *B = 5;
        *A = num1 + num2 - 5;
    }
    else {
        *B = num1 + num2;
        *A = 0;
    }
}

void tuang_B_ke_A (int num1, int num2, int*A, int* B) {
    if (num2 + num1 > 3) {
        *A = 3;
        *B = num1 + num2 -3 ;
    }
    else {
        *A = num1 + num2;
        *B = 0;
    }
}

int main() {
    int num1 = 0;
    int num2 = 0;
    printf("Selamat datang di Program Water Jug \n");
    printf("Program ini menerima perintah dari User untuk menubah-ubah ");
    printf("volume ember A dan B \n");
    printf("Ember A memiliki volume 3 liter \n");
    printf("Ember B memiliki volume 5 liter \n");
    printf("Program ini akan berhenti jika isi ember A atau B bernilai 4 liter \n");

    while (num2 != 4) {
        printf("\n");
        printf("Volume ember A : %d ", num1, "\n");
        printf("Volume ember B : %d ", num2, "\n");
        printf("\n -- DAFTAR PERINTAH -- \n");
        printf("1. Mengisi penuh ember A \n");
        printf("2. Mengisi penuh ember B \n");
        printf("3. Mengosongi ember A \n");
        printf("4. Mengosongi ember B \n");
        printf("5. Tuang ember A ke ember B \n");
        printf("6. Tuang ember B ke ember A \n");

        int perintah,A,B;
        printf("Masukkan pilihan perintah Anda : ");
        scanf("%d", &perintah);
        if (perintah == 1) {
            num1 = isi_A(num1);
        }
        else if (perintah == 2)
        {
            num2 = isi_B(num2);
        }
        else if (perintah == 3) {
            num1 = kosong_A(num1);
        }
        else if (perintah == 4) {
            num2 = kosong_B(num2);
        }
        else if (perintah == 5) {
            tuang_A_ke_B(num1, num2, &A, &B);
            num1 = A;
            num2 = B;
        }
        else if (perintah = 6) {
            tuang_B_ke_A(num1, num2, &A, &B);
            num1 = A;
            num2 = B;
        }
        printf("====================================== \n");
    }
    printf("---- SELAMAT ANDA MEMENANGKAN PERMAINAN! ---- \n");    
    return 0;
}
