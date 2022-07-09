#include <stdio.h>

void main() {
    int n;
    scanf("%d", &n);

    int solution[100] = { 0 }; 
    char string[100] = { 0 };
    char stack[100] = { 0 };
    int index_solution = 0;

    int counter, index, matching;
    for (int i = 0; i < n; i++) {
        counter = 0;
        matching = 1;
        index = 0;

        for (int i = 0; stack[i] != '\0'; i++) {
            stack[i] = '\0';
        }

        scanf(" %[^\n]s", string);

        while (string[counter] != '\0' && matching) {
            switch (string[counter]) {
            case '(':
                stack[index] = string[counter];
                index++;
                break;

            case '[':
                stack[index] = string[counter];
                index++;
                break;

            case '{':
                stack[index] = string[counter];
                index++;
                break;

            case '<':
                stack[index] = string[counter];
                index++;
                break;

            case ')':
                if (index != 0 && stack[index - 1] == '(') {
                    stack[index - 1] = '\0';
                    index--;
                }
                else matching = 0;
                break;

            case ']':
                if (index != 0 && stack[index - 1] == '[') {
                    stack[index - 1] = '\0';
                    index--;
                }
                else matching = 0;
                break;

            case '}':
                if (index != 0 && stack[index - 1] == '{') {
                    stack[index - 1] = '\0';
                    index--;
                }
                else matching = 0;
                break;

            case '>':
                if (index != 0 && stack[index - 1] == '<') {
                    stack[index - 1] = '\0';
                    index--;
                }
                else matching = 0;
                break;
            }
            counter++;
        }

        if (stack[0] != '\0') {
            matching = 0;
        }

        solution[index_solution] = matching;
        index_solution++;
    }

    for (int i = 0; i < index_solution; i++) {
        printf("%d ", solution[i]);
    }
}
