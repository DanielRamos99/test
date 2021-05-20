#include <stdio.h>

int main(){
    char name[100];
    unsigned int age;

    // printf("Hello world\n");
    printf("Name: ");
    fgets(name, sizeof(name), stdin);

    printf("Age: ");
    scanf("%u", &age);
    printf("You're going to turn %u years old\n", ++age);

    printf("Hi, %s\n", name);

    return 0;
}