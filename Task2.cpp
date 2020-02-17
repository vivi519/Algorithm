/*
 *Author:Leo
 *ID:1830026048
 *Task2
 */
#include<stdio.h>
#include <string>
using namespace std;
void reverseR(int length, char* str);
int main() {
    char s[50];
    int len;
    printf("Please input a sentence: ");
    scanf_s("%s", s,50);
    len = strlen(s);
    reverseR(len, s);
    printf("After reverse: %s", s);
}

void reverseR(int length, char* str) {
    // length : the number of char in *str
    // The chars in *str are reversed when 
    // this function completes
     if (length > 1) {
        char t;
        t = *(str + length - 1);
        *(str + length - 1) = *str;
        *str = t;
        reverseR(int (length - 2), str+1 );
        }


        
    
}