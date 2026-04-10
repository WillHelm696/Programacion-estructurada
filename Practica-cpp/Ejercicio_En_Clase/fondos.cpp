#include<graphics.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

int main(){
   int driver = DETECT, mode; 
   char *cade="Color de fondo #";
   initgraph(&driver, &mode, "");
   int midx=getmaxx()/2, midy=getmaxy()/2;
   
   for(int cont=0; cont<16; cont++){
      setbkcolor(cont);
      settextstyle(1, 0, 1);
      settextjustify(1, 1);
      setcolor(15);
   
      char temp[10], cade2[50];
      strcpy(cade2, cade);
      itoa(cont, temp, 10);
      strcat(cade2, temp);
      outtextxy(midx, midy-20, cade2);
      outtextxy(midx, midy, "Presione cualquier tecla para continuar");
      getch();
      setcolor(0);
      outtextxy(midx, midy-20, cade2);
   }
   closegraph();
   return 0;
}   
