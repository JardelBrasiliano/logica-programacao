#include <ctype.h>
#include <string.h>
#include <time.h>

/* IMPRIME MÚLTIPLOS CARACTERES */
void caracteres(int nc, char c){
    int i;
    for(i=0; i<nc; i++)
        printf("%c", c);
}
/* IMPRIME A STRING S CENTRALIZADA EM TAM*/
void printc(char *s, int tam){
    int ne = (tam - strlen(s)) / 2;
    while(ne > 0)
    {
        printf(" ");
        ne--;
    }
    printf(s);
}
/* SUSPENDE A EXECUÇÃO DO APLICATIO POR delay SEGUNDOS */
void sleep(time_t delay){
    time_t timer0, timer1;
    time(&timer0);
    do
    {
        time(&timer1);
    } while((timer1 - timer0) < delay);
}
