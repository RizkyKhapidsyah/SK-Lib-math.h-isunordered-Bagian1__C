
#include <stdio.h>      /* printf */
#include <math.h>       /* isunordered, sqrt */
#include <conio.h>

/*
    Source by CPlusPlus
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    double hasil;
    hasil = sqrt(-1.0);

    if (isunordered(hasil, 0.0)) {
        printf("sqrt(-1.0) and 0.0 cannot be ordered");
    } else {
        printf("sqrt(-1.0) and 0.0 can be ordered");
    }
        
    _getch();
    return 0;
}