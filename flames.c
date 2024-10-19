#include <stdio.h>
#include <string.h>

void removeCommonChars(char *name1, char *name2) {
    int i, j;
    for (i = 0; i < strlen(name1); i++) {
        for (j = 0; j < strlen(name2); j++) {
            if (name1[i] == name2[j]) {
                name1[i] = '*'; // Mark matched characters as *
                name2[j] = '*'; // Mark matched characters as *
                break;
            }
        }
    }
}

int countRemainingLetters(char *name1, char *name2) {
    int count = 0, i;
    for (i = 0; i < strlen(name1); i++) {
        if (name1[i] != '*') count++;
    }
    for (i = 0; i < strlen(name2); i++) {
        if (name2[i] != '*') count++;
    }
    return count;
}

int main() {
    char name1[50], name2[50];
    printf("Enter first name: ");
    scanf("%s", name1);
    printf("Enter second name: ");
    scanf("%s", name2);

    removeCommonChars(name1, name2);
    int remainingLetters = countRemainingLetters(name1, name2);

    char flames[] = "FLAMES";
    int index = 0;

    while (strlen(flames) > 1) {
        index = (remainingLetters % strlen(flames)) - 1;
        if (index >= 0) {
            for (int i = index; i < strlen(flames) - 1; i++) {
                flames[i] = flames[i + 1];
            }
            flames[strlen(flames) - 1] = '\0';
        } else {
            flames[strlen(flames) - 1] = '\0';
        }
    }

    printf("Relationship: ");
    switch (flames[0]) {
        case 'F':
            printf("Friends\n");
            break;
        case 'L':
            printf("Love\n");
            break;
        case 'A':
            printf("Affection\n");
            break;
        case 'M':
            printf("Marriage\n");
            break;
        case 'E':
            printf("Enemy\n");
            break;
        case 'S':
            printf("Siblings\n");
            break;
    }

    return 0;
}
