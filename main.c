#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int Quadrat()
{
    int eingabe;


    printf("5. Einfache Methode\nZahleingeben:");
    scanf("%d",&eingabe);

    int summe= eingabe*eingabe;

    return summe;
}

typedef struct
    {
    const char *marke;
    int geschwindigkeit;
    }
    Auto;
static inline Auto auto_neu(const char *m, int v)
    {
    return (Auto){ m, v };
    }

int main()
{
    //1. Hallo-Welt-Programm
    printf("1.Hallo-Welt-Programm\n Hello World!\n");

    //2. Einfache Addition
    int a;
    int b;


    printf("2. Einfache Addition\n Zahleingeben:");
    scanf("%d",&a);

    printf("Noch eine Zahleingeben:");
    scanf("%d",&b);

    int summe = a+b;
    printf("Summe:%d\n",summe);

    //3. Gerade oder ungerade?
    int eingabe;

   printf("3. Gerade oder ungerade?\n Zahleingeben:");
   scanf("%d",&eingabe);

   if(eingabe %2 == 0)
   {
        printf("Die angegebene Zahl ist Gerade");
   }
   else
   {
       printf("Die angegebene Zahl ist Ungerade\n");
   }

   //4. Schleife mit for
    printf("4. Schleife mit for\n");
   for(int i=1;i<=10;i++)
   {
       printf("Ausgabe:%d\n",i);
   }
    //5. Einfache Methode
    printf("Die Quadratzahl ist:%d\n6. Array und Schleife\n", Quadrat());

    //6. Array und Schleife
    int Zahlen[]={1,2,3,8,10};
    int laenge=5;
    for(int i=0;i<laenge;i++)
    {
        printf("Zahlen:%d\n",Zahlen[i]);
    }

    //7. String-Manipulation
    char wort_eingabe[101];

    printf("7. String-Manipulation\nEin Wort eingeben:");
    scanf("%s",&wort_eingabe);

    for (char *p = wort_eingabe; *p; ++p)
    *p = (char)toupper((unsigned char)*p);

    printf("Ausgabe:%s\n",wort_eingabe);

    //8. Einfache Klasse
    Auto au = auto_neu("BMW", 50);
    printf("8. Einfache Klasse\n%s faehrt %d km/h\n", au.marke, au.geschwindigkeit);

    return 0;


}
