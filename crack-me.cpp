#include <stdio.h>
#include <string.h>

//Read the code, you can crack it !!

int main(int argc, char** argv)
{

    char password[] = "";
    char input[100];
    char message[] = "";
    char writtenBy[] = "PizzamanJ10";

    strcpy(input, argv[1]);

    int passwordValue = 0;
    int i = 0;
    while (password[i]) {
        passwordValue += password[i];
        i++;
    }

    int inputValue = 0;
    int k = 0;
    while (input[k]) {
        inputValue += input[k];
        k++;
    }

    if (inputValue == passwordValue)
        printf("%s", message);

    else
        printf("Incorrect password.");

    return 0;
}