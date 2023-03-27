#include <stdio.h>
#define meret 8

typedef struct SorozatResz{
    int evad;
    int epizod;
    int hossz;
} SorozatResz;

int elsoFeladat(SorozatResz sorozatreszek[]);
SorozatResz masodikFeladat(SorozatResz sorozatreszek[]);
float harmadikfeladat(SorozatResz sorozatreszek[]);

int main(){

    SorozatResz EnKicsiPonim[meret] = {
            {1, 1, 28},
            {1, 2, 27},
            {1, 3, 30},
            {2, 1, 30},
            {2, 5, 23},
            {3, 1, 25},
            {3, 4, 21},
            {3, 6, 33}
    };

    printf("A harmadik evadot %d percig tart megnezni.\n", elsoFeladat(EnKicsiPonim));
    printf("Az elso evad leghosszabb epizodja a(z) %d. epizod.\n", masodikFeladat(EnKicsiPonim).epizod);
    printf("Az evadnyito epizodok atlagosan %f perc hosszuak.\n", harmadikfeladat(EnKicsiPonim));

    return 0;
}


int elsoFeladat(SorozatResz sorozatreszek[]) {
    int osszeg = 0;
    for (int i = 0; i < meret; i++)
    {
        if (sorozatreszek[i].evad == 3)
        {
            osszeg += sorozatreszek[i].hossz;
        }
        
    }
    
    return osszeg;
}

SorozatResz masodikFeladat(SorozatResz sorozatreszek[]){
    int max = 0;
    SorozatResz r1;
    for (int i = 0; i < meret; i++)
    {
        if (sorozatreszek[i].evad == 1)
        {
            if(sorozatreszek[i].hossz > max){
                max = sorozatreszek[i].hossz;
                r1 = sorozatreszek[i];
            }
        }
        
    }
    
    return r1;
}

float harmadikfeladat(SorozatResz sorozatreszek[]){
    int osszeg = 0, count = 0;
    for (int i = 0; i < meret; i++)
    {
        if (sorozatreszek[i].epizod == 1)
        {
            osszeg += sorozatreszek[i].hossz;
            count++;
        }
        
    }
    
    return osszeg / count;
}