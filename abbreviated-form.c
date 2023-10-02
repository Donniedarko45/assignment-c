#include <stdio.h>
#include <string.h>

void abbreviateName(char name[]) 
{
    int i, len;
    len = strlen(name);

    // Print the first character as it is
    printf("%c", name[0]);

    // Iterate through the name to find spaces and print the next character
    for (i = 1; i < len; i++) {
        if (name[i - 1] == ' ') {
            printf("%c", name[i]);
        }
    }

    printf("\n");
}

int main() {
    char name[50];

    // Input the person's name
    printf("Enter a person's name: ");
    fgets(name, sizeof(name), stdin);

    // Call the function to abbreviate the name
    abbreviateName(name);

    return 0;
}
