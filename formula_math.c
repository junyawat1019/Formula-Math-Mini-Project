#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <time.h>
#include <windows.h>
#include <math.h>

#define textcolor(txt,back) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), back*16+txt)
#define resetcolor() SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15)

int main(void){
    welcome();
    itinemenu();
}
void posxy(int x, int y){
     COORD coord;
     coord.X = x;
     coord.Y = y;
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void welcome(){
     posxy(10,6); textcolor(4,0); printf(" ##   ###   ##  ########  ##       #######   #######    ##       ##   ########     ########  #######  ");Sleep(200);
     posxy(10,7); textcolor(12,0); printf(" ##   ###   ##  ##        ##      ##       ##      ##  ## ##   ## ##  ##              ##    ##     ##  ");Sleep(200);
     posxy(10,8); textcolor(6,0); printf(" ##   ###   ##  ########  ##      ##       ##      ##  ## ##   ## ##  ########        ##    ##     ## ");Sleep(200);
     posxy(10,9); textcolor(2,0); printf(" ##   ###   ##  ##        ##      ##       ##      ##  ##  ## ##  ##  ##              ##    ##     ##  ");Sleep(200);
     posxy(10,10); textcolor(9,0); printf("  ## ## ## ##   ##        ##      ##       ##      ##  ##   ###   ##  ##              ##    ##     ##  ");Sleep(200);
     posxy(10,11); textcolor(1,0); printf("   ###   ###    ########  #######  #######   #######   ##    #    ##  ########        ##     #######  ");Sleep(200);
     Sleep(1100);
     system("cls");
}

void itinemenu(){
     int choice;
     loop0:
     textcolor(7,0);
     posxy(30,3); printf(" 8888888888   88                                                             "); Sleep(100);
     posxy(30,4); printf("     88       88                                                             "); Sleep(100);
     posxy(30,5); printf("     88       88                                                             "); Sleep(100);
     posxy(30,6); printf("     88       88     88                                                      "); Sleep(100);
     posxy(30,7); printf("     88    88888888     88 8888  888888   88  88  88888     88  88 88    88  "); Sleep(100);
     posxy(30,8); printf("     88       88     88 888  88 88    88  8888   88   88    8888   88   88  "); Sleep(100);
     posxy(30,9); printf("     88       88     88 88   88 88888888  88     88   888   88      88 88  "); Sleep(100);
     posxy(30,10);printf("     88       88     88 88   88 88        88     88  88 88  88       88   "); Sleep(100);
     posxy(30,11);printf(" 8888888888    88888 88 88   88  8888888  88      8888   88 88      88   "); Sleep(100);
     posxy(30,12);printf("                                                                   88   "); Sleep(100);
     posxy(30,13);printf("                                                                  88   "); Sleep(100);
     posxy(30,14); textcolor(12,0); printf(" --------------------------------------------------------------------------");
     posxy(28,15); textcolor(7,0); printf("                     WELCOME TO Main Menu Itinerary_Project                 ");
     posxy(30,16); textcolor(12,0); printf(" --------------------------------------------------------------------------");
     posxy(30,17); textcolor(7,0); printf(" [1] Itinerary");
     posxy(30,18); printf(" [2] displacement");
     posxy(30,19); printf(" [0] About Us");
     posxy(30,20); printf(" Please enter select menu : ");
          scanf("%d", &choice);
     system("cls");

     if(choice==1){
        int i, h, j;
        float s, v, t;
        loop1:
        posxy(30,1); printf("| ----------------------------------------------------------------------- |"); Sleep(200);
        posxy(30,2); printf("| ----------------------------------------------------------------------- |"); Sleep(200);
        posxy(30,3); printf("|                               Itinerary                                 |"); Sleep(200);
        posxy(30,4); printf("| ----------------------------------------------------------------------- |"); Sleep(200);
        posxy(30,5); printf("| ----------------------------------------------------------------------- |"); Sleep(200);
        posxy(30,6); printf("|                                                                         |");
        posxy(30,7); printf("|     [1]Find Speed                                                       |");
        posxy(30,8); printf("|                                                                         |");
        posxy(30,9); printf("|                                                                         |");
        posxy(30,10); printf("|                                                                         |");
        posxy(30,11); printf("|                                                                         |");
        posxy(30,12); printf("|                                                                         |");
        posxy(30,13); printf("|     [2]Find Distance                                                    |");
        posxy(30,14); printf("|                                                                         |");
        posxy(30,15); printf("|                                                                         |");
        posxy(30,16); printf("|                                                                         |");
        posxy(30,17); printf("|                                                                         |");
        posxy(30,18); printf("|                                                                         |");
        posxy(30,19); printf("|     [3]Find Time                                                        |");
        posxy(30,20); printf("|                                                                         |");
        posxy(30,21); printf("|                                                                         |");
        posxy(30,22); printf("|                                                                         |");
        posxy(30,23); printf("|                                                                         |");
        posxy(30,24); printf("|                                                                         |");
        posxy(30,25); printf("| ----------------------------------------------------------------------- |"); Sleep(200);
        posxy(30,26); printf("| ----------------------------------------------------------------------- |"); Sleep(200);
            posxy(31,27); printf(" Please select a function : ");
             scanf("%d", &i);
        if(i==1){
           posxy(31,28); printf(" Please set data Time(HH: mm: ss) : ");
                scanf("%f", &t);
           posxy(31,29); printf(" Please set data Distance : ");
                scanf("%f", &s);
        v=s/t;
           posxy(31,30); printf(" Speed is : %.2f km/hr.", v);
        }
        else if(i==2){
           posxy(31,28); printf(" Please set data Time(HH: mm: ss) : ");
                scanf("%f", &t);
           posxy(31,29); printf(" Please set data Speed : ");
                scanf("%f", &v);
        s=v*t;
           posxy(31,30); printf(" Distance is : %.2f km.", s);
        }
        else if(i==3){
           posxy(31,28); printf(" Please set data Distance : ");
                scanf("%f", &s);
           posxy(31,29); printf(" Please set data Speed : ");
                scanf("%f", &v);
        t=s/v;
           posxy(31,30); printf(" Time is : %.4f hr.", t);
        }
        else{
           posxy(31,28); printf("Error");
           Sleep(300);
           system("cls");
           goto loop1;
        }
        posxy(30,31); printf("| ----------------------------------------------------------------------- |");
        posxy(30,32); printf("| ----------------------------------------------------------------------- |");
        posxy(31,33); textcolor(7,0); printf(" [0] Main Menu");
        posxy(31,34); textcolor(7,0); printf(" [1] use again");
        posxy(31,35); textcolor(7,0); printf(" select one : ");
        scanf("%d", &h);
        if(h==0){
          system("cls");
          goto loop0;
        }
        else if(h==1){
          system("cls");
          goto loop1;
        }
     }

     else if(choice==2){
        int j, s, vec;
        float a, b, c;
        loop2:
        posxy(30,1); printf("| ----------------------------------------------------------------------- |"); Sleep(200);
        posxy(30,2); printf("| ----------------------------------------------------------------------- |"); Sleep(200);
        posxy(30,3); printf("|                              displacement                               |"); Sleep(200);
        posxy(30,4); printf("| ----------------------------------------------------------------------- |"); Sleep(200);
        posxy(30,5); printf("| ----------------------------------------------------------------------- |"); Sleep(200);
        posxy(30,6); printf("|   _______________                                           *           |");
        posxy(30,7); printf("|  |               |                                       ****           |");
        posxy(30,8); printf("|  | c^2 = a^2+b^2 |                                    *******           |");
        posxy(30,9); printf("|  | b^2 = c^2-a^2 |                                 **********           |");
        posxy(30,10); printf("|  | a^2 = c^2-b^2 |                              *************           |");
        posxy(30,11); printf("|  |_______________|                           ****************           |");
        posxy(30,12); printf("|                                           *******************           |");
        posxy(30,13); printf("|                         [1]C           **********************           |");
        posxy(30,14); printf("|                                     *************************           |");
        posxy(30,15); printf("|                                  ****************************           |");
        posxy(30,16); printf("|                              ********************************           |");
        posxy(30,17); printf("|                           ***********************************  [2]B     |");
        posxy(30,18); printf("|                        **************************************           |");
        posxy(30,19); printf("|                     *****************************************           |");
        posxy(30,20); printf("|                  ********************************************           |");
        posxy(30,21); printf("|               ***********************************************           |");
        posxy(30,22); printf("|            **************************************************           |");
        posxy(30,23); printf("|         *****************************************************           |");
        posxy(30,24); printf("|      ********************************************************           |");
        posxy(30,25); printf("|                                                                         |");
        posxy(30,26); printf("|                                 [3]A                                    |");
        posxy(30,27); printf("|                                                                         |");
        posxy(30,28); printf("| ----------------------------------------------------------------------- |"); Sleep(200);
        posxy(30,29); printf("| ----------------------------------------------------------------------- |"); Sleep(200);
        posxy(31,30); printf(" what do you want to find : ");
             scanf("%d", &j);
        if(j==1){
        float ab;
           posxy(31,31); printf(" Please set data a : ");
                scanf("%f", &a);
           posxy(31,32); printf(" Please set data b : ");
                scanf("%f", &b);
        ab=(a*a)+(b*b);
        c=sqrt(ab);
           posxy(31,33); printf(" C is : %.2f", c);
        }
        else if(j==2){
        float ac;
           posxy(31,31); printf(" Please set data a : ");
                scanf("%f", &a);
           posxy(31,32); printf(" Please set data c : ");
                scanf("%f", &c);
        ac=(c*c)-(a*a);
        b=sqrt(ac);
           posxy(31,33); printf(" B is : %.2f", b);
        }
        else if(j==3){
        float bc;
           posxy(31,31); printf(" Please set data b : ");
                scanf("%f", &b);
           posxy(31,32); printf(" Please set data c : ");
                scanf("%f", &c);
        bc=(c*c)-(b*b);
        a=sqrt(bc);
           posxy(31,33); printf(" A is : %.2f", sqrt(bc));
        }
        else{
           posxy(31,31); printf("Error");
           Sleep(300);
           system("cls");
           goto loop2;
        }
        posxy(30,34); printf("| ----------------------------------------------------------------------- |");
        posxy(30,35); printf("| ----------------------------------------------------------------------- |");
        posxy(31,36); textcolor(7,0); printf(" [0] Main Menu");
        posxy(31,37); textcolor(7,0); printf(" [1] use again");
        posxy(31,38); textcolor(7,0); printf(" select one : ");
        scanf("%d", &s);
        if(s==0){
          system("cls");
          goto loop0;
        }
        else if(s==1){
          system("cls");
          goto loop2;
        }
     }

     else if(choice==0){
        posxy(45,3); textcolor(6,0); printf(" 8888888     888888888  88        88   "); Sleep(100);
        posxy(45,4); printf(" 88   888    88         88        88   "); Sleep(100);
        posxy(45,5); printf(" 88    888   88         88        88   "); Sleep(100);
        posxy(45,6); printf(" 88     888  88         88        88   "); Sleep(100);
        posxy(45,7); printf(" 88      88  888888888  88        88   "); Sleep(100);
        posxy(45,8); printf(" 88     888  888888888   88      88    "); Sleep(100);
        posxy(45,9); printf(" 88    888   88           88    88     "); Sleep(100);
        posxy(45,10); printf(" 88   888    88            88  88      "); Sleep(100);
        posxy(45,11); printf(" 8888888     888888888      8888       "); Sleep(100);
        posxy(30,14); printf(" -----------------------------------------------------------------");
        posxy(33,15); textcolor(7,0); printf("                        Group Members ");
        posxy(30,16); textcolor(6,0); printf(" -----------------------------------------------------------------");
        posxy(30,18); textcolor(7,0); printf(" Jiratthitikal Mongkolvichian No.28 Class4/10 BJ.");
        posxy(30,19); printf(" Junyawat Hatsakhun No.14 Class4/10 BJ.");
        posxy(30,20); printf(" Thuwanon Chanasinphawatgool No.18 Class4/10 BJ.");
        posxy(30,22); textcolor(6,0); printf(" -----------------------------------------------------------------");
        posxy(30,24); textcolor(7,0); printf(" back to Main Menu : ");
        system("pause");
        system("cls");
        goto loop0;
     }
     else{
       textcolor(4,0);
       posxy(30,3); printf("   010101010100101                                                  ");Sleep(100);
       posxy(30,4); printf("   010101010101010                                                  ");Sleep(100);
       posxy(30,5); printf("   101                                                              ");Sleep(100);
       posxy(30,6); printf("   010                                                              ");Sleep(100);
       posxy(30,7); printf("   101                                                              ");Sleep(100);
       posxy(30,8); printf("   110010101010101   010  1001  010  0011    101101001    010  0011 ");Sleep(100);
       posxy(30,9); printf("   101101010101010   010 010    101 110    010       101  101 110   ");Sleep(100);
       posxy(30,10); printf("   110               1001       1010       100       011  1010      ");Sleep(100);
       posxy(30,11); printf("   001               101        101        101       110  101       ");Sleep(100);
       posxy(30,12); printf("   100010101010101   110        010        100       101  010       ");Sleep(100);
       posxy(30,13); printf("   101010101010100   101        110          101010011    110       ");Sleep(100);
       Sleep(1000);
       system("cls");
       goto loop0;
     }

}
