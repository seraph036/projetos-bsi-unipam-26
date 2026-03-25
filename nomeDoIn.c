#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int pedirNome();
//char nomeDoIn[10] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
char nomeDoIn[10];
char resposta[10] = "louis";

int main() {
    //setbuf(NULL, "");
    printf("quem é o in? (primeiro nome): ");
    scanf("%s", &nomeDoIn);
    if (strcmp(nomeDoIn, resposta) == 0) {
        printf("acertou o in!\n");
        exit(0);
    }
    else {
        printf("errou o in! tente de novo!\n");
        main();
    }
}