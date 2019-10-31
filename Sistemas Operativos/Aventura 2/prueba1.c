#include    <stdio.h>
#include    <time.h>
#include    <stdlib.h>
#include    <unistd.h>
#include    <errno.h>
#define PROMPT '$'
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define COLOR_RESET   "\x1b[0m"

char* getpath (void) {
  char *path = getwd(NULL);
  printf("Path: %s\n", path);
  return path;
}
char *path(void);

char *read_line(char *line){
    printf(RED "uib" COLOR_RESET "@~" CYAN "[%s]/%s%c", /*asctime (timeinfo)*/"son las horas que son",getenv("PATH"),PROMPT);
}
char *read_line(char *line);

void chomp( char *s )
{
    s[strcspn ( s, "\n" )] = '\0';
}
void chomp(char *s);
int main() {
    char caracter = 'i';
    while(caracter != 'e'){
    time_t rawtime;
    struct tm *info;
    time( &rawtime );
    info = localtime( &rawtime );
    char *tiempo;
    tiempo = asctime(info);
    chomp(tiempo);
    char * dir = getpath();
    printf(RED "uib" COLOR_RESET "@~/[%s]",tiempo);
    printf(MAGENTA "::%s" YELLOW "%s" CYAN "%c ",getenv("HOME"),dir,PROMPT);    
    free(dir);
    scanf("%c",&caracter);
    }
    
}