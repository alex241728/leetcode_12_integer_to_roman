#include <stdio.h>
#include <stdlib.h>

#define MAX_STR_LEN (32)

char* intToRoman(int);

int main() {
  printf("%s\n", intToRoman(3));

  printf("%s\n", intToRoman(58));

  printf("%s\n", intToRoman(1994));

  printf("%s\n", intToRoman(88));

  return 0;
}

char* intToRoman(int num) {
    const char* M[] = {"", "M", "MM", "MMM"}; // store {empty, 1000, 2000, 3000}
    const char* C[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC","DCCC",
                       "CM"}; // stores {empty, 100, 200, 300, 400, 500, 600, 700, 800
    const char* X[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX",
                       "XC"}; // stores {empty, 10, 20, 30, 40, 50, 60, 70, 80, 90}
    const char* I[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII",
                       "IX"}; // stores {empty, 1, 2, 3, 4, 5, 6, 7, 8, 9}

    char* result = malloc(sizeof(char) * MAX_STR_LEN);
    sprintf(result, "%s%s%s%s", M[num / 1000], C[(num / 100) % 10], X[(num / 10) % 10], I[num % 10]);
    return result;
}