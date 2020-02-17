/*
 *Author:Leo
 *ID:1830026048
 *Task1
 */
#include<stdio.h>
int GCD(int x, int y);
int main() {
    int x, y;
    printf("Please input two natural number! ");
    scanf_s("%d %d", &x,&y);
    printf("The number is %d " ,GCD(x, y));

}
int GCD(int x, int y) {
    int t=0;
    if (y == 0) 
        return x;
    if (y > 0) {
        t = x%y;
        x = y;
        y = t;
        GCD(x, y);
    }
}