#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int o = 0;
    int res;
    while (o< 1) {
        FILE *Demon;
        Demon = fopen("student.txt","a");
        char u[20];
        char p[20];
        printf("+++++++Admin Login+++++++\n");
        printf("Enter Admin Name          :");
        scanf("%s", &u);
        printf("Enter admin %s password :", u);
        scanf("%s",&p);
        if (strcmp(u, "Demon")==0 && strcmp(p, "Demon") == 0 ) {
            printf("\n\n+++++WELOCME Admin Demon!+++++\n");
        }
        else {
            printf("Admin Login Failed");
            break;
        }
        o++;
        char D[2];
        int r=0;
        char T[100];
        while (r<1000){

            printf("\n$");
            scanf("%s",&T);
            if(strcmp(T, "exit")==0) {
                break;
            }
           if(strcmp(T, "Change_File")==0) {
        printf("Do You want change File Name :(Yes | No ) (defult : Enter No) : ");
        scanf("%s",D);

        if (strcmp(D, "Yes")== 0){
            char newname[20];
            int ret;
            char oldname[20];
            printf("oldname");
            scanf("%s",oldname);

            printf("newname");
            scanf("%s",newname);
            ret = rename(oldname, newname);
            if(ret == 0) {
                printf("File renamed successfully");
                Demon = fopen(newname, "a");
            } else {
                printf("Error: unable to rename the file");
            }
        } else if (strcmp(D, "No")== 0){
            printf("delfult name is student.txt");

        }else{
            printf("Error");
            break;

        }}
           char *name[18], *mother[100], *father[100], *age[20], *id[10],*fi[3],*cho[20];

           if(strcmp(T, "add_data")==0) {
            printf("Do you want to choose file  or rename and Defult? \nchoose file  -c | \n rename -r \n Defult -d\n");
            scanf("%s",fi);

            if(strcmp(fi, "-c")==0) {

                system("dir");
                printf("\n\n\nchoose:");
                scanf("%s",cho);
                Demon = fopen(cho,"a");

            }

            else if(strcmp(fi, "-r")==0) {

                system("dir");
                printf("\n\n\nchoose:");
                char newname[20];
                int ret=0;
                char oldname[20];
                printf("oldname");
                scanf("%s",oldname);

                printf("newname");
                scanf("%s",newname);
                ret = rename(oldname, newname);
                Demon = fopen(newname,"a");}

            else if(strcmp(fi, "-d")==0){
                printf("Defult is student.txt");
                Demon = fopen("student.txt","a");
            }

            printf("\nEnter Student Name :");
            scanf(" %[^\n]s", name);
            printf("Enter  Age :");
            scanf(" %[^\n]s", age);
            printf("Enter Student  Mother Name:");
            scanf(" %[^\n]s", mother);
            printf("Enter Student Father Name :");
            scanf(" %[^\n]s", father);
            printf("Enter Student ID Number :");
            scanf(" %[^\n]s", id);

            fputs("{\n",Demon);
            fputs("         Students's Info\n     Student's Name : ",Demon);
            fputs(name,Demon);
            fputs("\n     age            : ",Demon);
            fputs(age,Demon);
            fputs("\n     father         : ",Demon);
            fputs(father,Demon);
            fputs("\n     Mother         : ",Demon);
            fputs(mother,Demon);
            fputs("\n     Id number      : ",Demon);
            fputs(id,Demon);
            fputs("\n}\n\n",Demon);

            if(Demon == NULL){
                printf("Denile");}

            else {
                printf("{\n         Students's Info\n     Student's Name : %s\n      age           : %s\n     father         : %s\n     Mother         : %s\n     Id number      : %s\n}",name, age, father, mother, id);
                printf("Success storage\n");
            }}

        fclose(Demon);
        }
        return 0;}
    }