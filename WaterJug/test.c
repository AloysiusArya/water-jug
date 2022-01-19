#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* KAMUS */
    int A = 0;
    int B = 0;
    int w = 0;
    int y = 0;
    int x = 0;
    int m = 0;
    int P = 0;
    /* ALGORITMA */
    while (B != 4) {
      printf("Buatlah agar Salah satu teko air berisi 4 liter\n");
      printf("Teko A berkapasitas 3 Liter\n");
      printf("Teko B berkapasitas 5 Liter\n");
      printf("Teko A = %d\n",A);
      printf("Teko B = %d\n",B);
      printf("1. Isi Teko A sampai Penuh\n");
      printf("2. Isi Teko B sampai Penuh\n");
      printf("3. Tuang Teko A ke B\n");
      printf("4. Tuang Teko B ke A\n");
      printf("5. Kosongkan Teko A\n");
      printf("6. Kosongkan Teko B\n");
      printf("Masukkan Perintah: \n");
      scanf("%d", &P );
      if (A == 4){
        break;
      }
      if (P == 1) {
        A = 3;
      }
      else if (P == 2) {
        B = 5;
      }
      else if (P == 3) {
        y = 5 - B;
        B += A;
        if (B > 5) {
            B = 5;
        }
        A -= y;
        if (A < 0){
            A = 0;
        }
      }
      else if (P == 4) {
        x = 3 - A;
        A += B;
        if (A > 3) {
            A = 3;
        }
        w = 3 - A;
        B -= w;
        if (B <= 3){
            B = 0;

        }
        if (w == 0){
            B -= x;
        }
        if (B < 0){
            B = 0;
        }
      }
      else if (P == 5) {
        A = 0;
    }
      else if (P == 6) {
        B = 0;
    }
      else {
        printf("Masukkan Perintah");
      }
                        }
    printf("Yay, Selamat!\n");
    printf("Teko A = %d\n",A);
    printf("Teko B = %d\n",B);
    return 0;
}
