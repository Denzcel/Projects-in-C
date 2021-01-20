#include <stdio.h>
#include <string.h>
int main(){

    char cName[12] = {'\0'};        // Select Red
    char capsName[12] = {'\0'};
    int iStrLen;

    printf("Please enter your character's name: ");
    scanf("%s", cName);

    printf("\nYour character's name is: %s\n", cName);

    iStrLen = strlen(cName);
    printf("The length of name: %d\n", iStrLen);

    for (int i = 0; i < iStrLen; i++){
        capsName[i] = toupper(cName[i]);
    }
    printf("The name you chose in all caps is: %s\n", capsName);

    return 0;
}
