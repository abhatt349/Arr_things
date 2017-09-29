#include <stdio.h>
#include <string.h>

void tester(char *s1, char *s2);

void testern(char *s1, char *s2, int n);

void tester(char *s1, char *s2) {
    int i = strcmp(s1, s2);
    if (i < 0) {
        printf("%s is less than %s\n", s1, s2);
    } else if (i > 0) {
        printf("%s is greater than %s\n", s1, s2);
    } else {
        printf("%s is the same as %s\n", s1, s2);
    }
}

void testern(char *s1, char *s2, int n) {
    int i = strncmp(s1, s2, n);
    if (i < 0) {
        printf("%s is less than %s at %d chars\n", s1, s2, n);
    } else if (i > 0) {
        printf("%s is greater than %s at %d chars\n", s1, s2, n);
    } else {
        printf("%s is the same as %s at %d chars\n", s1, s2, n);
    }
}

int main()
{
    char *s1 = "true";
    char *s2 = "word";
    char *s3 = "facts";
    char *s4 = "hello, world!";

    tester(s1, s2);
    tester(s2, s3);
    tester(s3, s4);
    tester(s1, s1);

    printf("\n");
    testern(s1, s2, 3);
    testern(s2, s3, 3);
    testern(s3, s4, 4);
    testern(s1, s1, 3);

    return 0;
}
