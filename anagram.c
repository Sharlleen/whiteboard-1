#include<stdio.h>
#include<string.h>

int check_anagram(char[], char[]);

int check_anagram(char str1[], char str2[]) {
    int cal1[256] = { 0 }; // 265 ascii value
    int cal2 [256] = { 0 };
    int char1 = strlen(str1);
    int char2 = strlen(str2);

    if (char1 != char2) {
        return 0;
    }

    for (int i = 0; i < char1; i++) {
        str1[i] = tolower(str1[i]); // lower case
        str2[i] = tolower(str2[i]);
        cal1[str1[i]]++;
        cal2[str2[i]]++;
    }

    for (int i = 0; i < 256; i++) {
        if (cal1[i] != cal2[i]) {
            return 0; // Not anagrams if character counts are different
        }
    }

    return 1;
}

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    rewind(stdin);
    scanf_s("%[^\n]",str1, sizeof(str1));
    printf("Enter second string: ");
    rewind(stdin);
    scanf_s("%[^\n]",str2 ,sizeof(str2));

    if (check_anagram(str1, str2)) {
        printf("True\n");
        printf("Both strings are anagrams of each other.\n");
    }
    else{
        printf("False\n");
        printf("The strings are not anagrams.\n");
    }
    return 0;
}
