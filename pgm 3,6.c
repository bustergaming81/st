#include <stdio.h>

int main() {
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int d, m, y, nd, nm, ny, ndays;
    int flag = 0;

    printf("Enter the date, month, year: ");
    scanf("%d%d%d", &d, &m, &y);

    ndays = month[m - 1];

    if (m == 2) {
        if (y % 100 == 0) {
            if (y % 400 == 0)
                ndays = 29;
        }
        else if (y % 4 == 0)
            ndays = 29;
    }

    if (y <= 1812 || y > 2012) {
        printf("Invalid Input Year");
        flag = 1;
    }

    if (d <= 0 || d > ndays) {
        printf("Invalid Input Day");
        flag = 1;
    }

    if (m < 1 || m > 12) {
        printf("Invalid Input Month");
        flag = 1;
    }

    if (flag == 1)
        exit (0);

    nd = d + 1;
    nm = m;
    ny = y;

    if (nd > ndays) {
        nd = 1;
        nm++;
    }

    if (nm > 12) {
        nm = 1;
        ny++;
    }

    printf("\nGiven date is %d:%d:%d", d, m, y);
    printf("\nNext day's date is %d:%d:%d\n", nd, nm, ny);
}

