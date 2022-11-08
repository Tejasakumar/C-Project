#include <stdio.h>
#include <unistd.h> //for lunix
#include <direct.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main()
{
    system("cls");
    
    FILE *fp = fopen("art.txt","r");
    char c[100];
    fgets(c,100,fp);
    int it=0;
    while(it<9){
        fputs(c,stdout);
        fgets(c,100,fp);
        usleep(150000);
        it++;
        
    }
    printf("\t\t\t PRESS ENTER TO START\n");
    getch();
    printf("\t\t\t\t welcome to magic\n");
    int r1[7], r2[7], r3[7];
    int arr[21];
    time_t t1;
    srand((unsigned)time(&t1));
    for (int i = 0; i < 7; i++)
    {
        int ele;
    recheck:
        ele = rand() % 150;

        for (int j = 0; j < 7; j++)
        {
            if (ele == r1[j])
            {
                goto recheck;
            }
        }
        r1[i] = ele;
        arr[i] = r1[i];
    }
    for (int i = 0; i < 7; i++)
    {
        int ele;
    recheck2:
        ele = rand() % 150;

        for (int j = 0; j < 14; j++)
        {
            if (ele == arr[j])
            {
                goto recheck2;
            }
        }
        r2[i] = ele;
        arr[i + 7] = r2[i];
    }
    for (int i = 0; i < 7; i++)
    {
        int ele;
    recheck1:
        ele = rand() % 150;

        for (int j = 0; j < 21; j++)
        {
            if (ele == arr[j])
            {
                goto recheck1;
            }
        }
        r3[i] = ele;
        arr[i + 14] = r3[i];
    }
    printf("\n");
    printf("set 1 --> \t");
    for (int j = 0; j < 7; j++)
    {
        printf("%d", r1[j]);
        for (int j = 0; j < 5; j++)
        {
            printf(" ");
            usleep(41666    );
        }
    }
    printf("\n");
    printf("\n");
    printf("set 2 --> \t");
    for (int j = 0; j < 7; j++)
    {
        printf("%d", r2[j]);
        for (int j = 0; j < 5; j++)
        {
            printf(" ");
            usleep(41666    );
        }
    }
    printf("\n");
    printf("\n");
    printf("set 3 --> \t");
    for (int j = 0; j < 7; j++)
    {
        printf("%d", r3[j]);
        for (int j = 0; j < 5; j++)
        {
            printf(" ");
            usleep(41666    );
        }
    }
    printf("\n");

    int n;

    printf("enter the row/set in which ur number is located\n");
reinp1:
    scanf("%d", &n);
    if (n > 3 || n < 1)
    {
        printf("invalid entry");
        sleep(1);
        printf("\x1b[2K"); // remove invaid entry
        printf("\033[A");  // move curser up
        printf("\r");      // move cursor to extreem left
        printf("\x1b[2K"); // clearing scanf
        goto reinp1;
    }
    system("cls");
    printf("\t\t\t\twelcome to magic\n");
    if (n == 1)
    {
        int temp[7];
        for (int i = 0; i < 7; i++)
        {
            temp[i] = r1[i];
        }
        for (int i = 0; i < 7; i++)
        {
            r1[i] = r2[i];
        }
        for (int i = 0; i < 7; i++)
        {
            r2[i] = temp[i];
        }

        /*********************************/
        for (int i = 0; i < 7; i++)
        {

            arr[i] = r1[i];
        }
        for (int i = 0; i < 7; i++)
        {

            arr[i + 7] = r2[i];
        }
        for (int i = 0; i < 7; i++)
        {

            arr[i + 14] = r3[i];
        }
    }
    if(n==2){
        for(int i =0;i<7;i++){
            arr[i]=r1[i];
            arr[(i)+7]=r2[i];
            arr[(i)+14]=r3[i];

        }
    }
    if(n==3){
        
        int temp[7];
        for (int i = 0; i < 7; i++)
        {
            temp[i] = r3[i];
        }
        for (int i = 0; i < 7; i++)
        {
            r3[i] = r2[i];
        }
        for (int i = 0; i < 7; i++)
        {
            r2[i] = temp[i];
        }

        /*********************************/
        for (int i = 0; i < 7; i++)
        {

            arr[i] = r1[i];
        }
        for (int i = 0; i < 7; i++)
        {

            arr[i + 7] = r2[i];
        }
        for (int i = 0; i < 7; i++)
        {

            arr[i + 14] = r3[i];
        }
    }
    for (int i = 0; i < 7; i++)
        {
            r1[i] = arr[3 * i];
            r2[i] = arr[(3 * i) + 1];
            r3[i] = arr[(3 * i) + 2];
        }
    printf("set 1 --> \t");
    for (int j = 0; j < 7; j++)
    {
        printf("%d", r1[j]);
        for (int j = 0; j < 5; j++)
        {
            printf(" ");
            usleep(41666    );
        }
    }
    printf("\n");
    printf("\n");
    printf("set 2 --> \t");
    for (int j = 0; j < 7; j++)
    {
        printf("%d", r2[j]);
        for (int j = 0; j < 5; j++)
        {
            printf(" ");
            usleep(41666    );
        }
    }
    printf("\n");
    printf("\n");
    printf("set 3 --> \t");
    for (int j = 0; j < 7; j++)
    {
        printf("%d", r3[j]);
        for (int j = 0; j < 5; j++)
        {
            printf(" ");
            usleep(41666);
        }
    }
    printf("\n");
/*#########################################################################################*/
    printf("enter the row/set in which ur number is located\n");
reinp2:
    scanf("%d", &n);
    if (n > 3 || n < 1)
    {
        printf("invalid entry");
        sleep(1);
        printf("\x1b[2K"); // remove invaid entry
        printf("\033[A");  // move curser up
        printf("\r");      // move cursor to extreem left
        printf("\x1b[2K"); // clearing scanf
        goto reinp2;
    }
    system("cls");
    printf("\t\t\t\twelcome to magic\n");
    if (n == 1)
    {
        int temp[7];
        for (int i = 0; i < 7; i++)
        {
            temp[i] = r1[i];
        }
        for (int i = 0; i < 7; i++)
        {
            r1[i] = r2[i];
        }
        for (int i = 0; i < 7; i++)
        {
            r2[i] = temp[i];
        }

        /*********************************/
        for (int i = 0; i < 7; i++)
        {

            arr[i] = r1[i];
        }
        for (int i = 0; i < 7; i++)
        {

            arr[i + 7] = r2[i];
        }
        for (int i = 0; i < 7; i++)
        {

            arr[i + 14] = r3[i];
        }
    }
    if(n==2){
        for(int i =0;i<7;i++){
            arr[i]=r1[i];
            arr[(i)+7]=r2[i];
            arr[(i)+14]=r3[i];

        }
    }
    if(n==3){
        
        int temp[7];
        for (int i = 0; i < 7; i++)
        {
            temp[i] = r3[i];
        }
        for (int i = 0; i < 7; i++)
        {
            r3[i] = r2[i];
        }
        for (int i = 0; i < 7; i++)
        {
            r2[i] = temp[i];
        }

        /*********************************/
        for (int i = 0; i < 7; i++)
        {

            arr[i] = r1[i];
        }
        for (int i = 0; i < 7; i++)
        {

            arr[i + 7] = r2[i];
        }
        for (int i = 0; i < 7; i++)
        {

            arr[i + 14] = r3[i];
        }
    }
    for (int i = 0; i < 7; i++)
        {
            r1[i] = arr[3 * i];
            r2[i] = arr[(3 * i) + 1];
            r3[i] = arr[(3 * i) + 2];
        }
    printf("set 1 --> \t");
    for (int j = 0; j < 7; j++)
    {
        printf("%d", r1[j]);
        for (int j = 0; j < 5; j++)
        {
            printf(" ");
            usleep(41666    );
        }
    }
    printf("\n");
    printf("\n");
    printf("set 2 --> \t");
    for (int j = 0; j < 7; j++)
    {
        printf("%d", r2[j]);
        for (int j = 0; j < 5; j++)
        {
            printf(" ");
            usleep(41666    );
        }
    }
    printf("\n");
    printf("\n");
    printf("set 3 --> \t");
    for (int j = 0; j < 7; j++)
    {
        printf("%d", r3[j]);
        for (int j = 0; j < 5; j++)
        {
            printf(" ");
            usleep(41666    );
        }
    }
    printf("\n");
/*####################################################################################################*/
    printf("enter the row/set in which ur number is located\n");
reinp3:
    scanf("%d", &n);
    if (n > 3 || n < 1)
    {
        printf("invalid entry");
        sleep(1);
        printf("\x1b[2K"); // remove invaid entry
        printf("\033[A");  // move curser up
        printf("\r");      // move cursor to extreem left
        printf("\x1b[2K"); // clearing scanf
        goto reinp3;
    }
    system("cls");
    printf("\t\t\t\twelcome to magic\n");
    if (n == 1)
    {
        int temp[7];
        for (int i = 0; i < 7; i++)
        {
            temp[i] = r1[i];
        }
        for (int i = 0; i < 7; i++)
        {
            r1[i] = r2[i];
        }
        for (int i = 0; i < 7; i++)
        {
            r2[i] = temp[i];
        }

        /*********************************/
        for (int i = 0; i < 7; i++)
        {

            arr[i] = r1[i];
        }
        for (int i = 0; i < 7; i++)
        {

            arr[i + 7] = r2[i];
        }
        for (int i = 0; i < 7; i++)
        {

            arr[i + 14] = r3[i];
        }
    }
    if(n==2){
        for(int i =0;i<7;i++){
            arr[i]=r1[i];
            arr[(i)+7]=r2[i];
            arr[i+14]=r3[i];

        }
    }
    if(n==3){
        
        int temp[7];
        for (int i = 0; i < 7; i++)
        {
            temp[i] = r3[i];
        }
        for (int i = 0; i < 7; i++)
        {
            r3[i] = r2[i];
        }
        for (int i = 0; i < 7; i++)
        {
            r2[i] = temp[i];
        }

        /*********************************/
        for (int i = 0; i < 7; i++)
        {

            arr[i] = r1[i];
        }
        for (int i = 0; i < 7; i++)
        {

            arr[i + 7] = r2[i];
        }
        for (int i = 0; i < 7; i++)
        {

            arr[i + 14] = r3[i];
        }
    }
    for (int i = 0; i < 7; i++)
        {
            r1[i] = arr[3 * i];
            r2[i] = arr[(3 * i) + 1];
            r3[i] = arr[(3 * i) + 2];
        }
        
    
    printf("\t\t\t\t Your number is %d\n",arr[10]);
    
    return 0;
}