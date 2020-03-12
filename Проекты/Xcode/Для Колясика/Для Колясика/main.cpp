#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* инициализация базы временем и вывод первых ста чисел */
int main(void)
{
int i, stime;
long ltime;

/* получение текущего календарного времени */
ltime = time (NULL);
stime = (unsigned int) ltime/2;
srand(stime);
    for (i=0; i<10; i++ ){
    printf("%d ", rand());
return 0;
}
}
