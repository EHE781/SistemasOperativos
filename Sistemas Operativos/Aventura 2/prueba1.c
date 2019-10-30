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
int getTime ()
{
  time_t rawtime;
  struct tm * timeinfo;

  time ( &rawtime );
  timeinfo = localtime ( &rawtime );
  return timeinfo;
}
int getTime();

char *read_line(char *line){
    struct tm *timeinfo;
    timeinfo = getTime();
    printf(RED "uib" COLOR_RESET "@~" CYAN "[%s]/%s%c", asctime (timeinfo),getenv("PATH"),PROMPT);
}
char *read_line(char *line);


int main() {
    char caracter = 'i';
    struct tm *timeinfo;
    timeinfo = getTime();
    while(caracter != 'e'){
    char * dir = getpath();
    printf(RED "uib" COLOR_RESET "@~" COLOR_RESET "/" MAGENTA "%s" YELLOW "%s" CYAN "%c ",getenv("HOME"),dir,PROMPT);    
    free(dir);
    scanf("%c",&caracter);
    }
    
}